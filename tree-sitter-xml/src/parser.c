#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 443
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 139
#define ALIAS_COUNT 1
#define TOKEN_COUNT 74
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 6

enum {
  sym_Name = 1,
  anon_sym_LT_BANG_LBRACK = 2,
  anon_sym_IGNORE = 3,
  anon_sym_INCLUDE = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
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
  anon_sym_standalone = 61,
  anon_sym_yes = 62,
  anon_sym_no = 63,
  anon_sym_DOCTYPE = 64,
  anon_sym_LT = 65,
  anon_sym_SLASH_GT = 66,
  anon_sym_LT_SLASH = 67,
  sym_CharData = 68,
  anon_sym_LT_BANG_LBRACKCDATA_LBRACK = 69,
  anon_sym_RBRACK_RBRACK_GT = 70,
  sym_CData = 71,
  anon_sym_xml_DASHstylesheet = 72,
  anon_sym_xml_DASHmodel = 73,
  sym_document = 74,
  sym__markupdecl = 75,
  sym__DeclSep = 76,
  sym_elementdecl = 77,
  sym_contentspec = 78,
  sym_Mixed = 79,
  sym_children = 80,
  sym__cp = 81,
  sym__choice = 82,
  sym_AttlistDecl = 83,
  sym_AttDef = 84,
  sym__AttType = 85,
  sym__EnumeratedType = 86,
  sym_NotationType = 87,
  sym_Enumeration = 88,
  sym_DefaultDecl = 89,
  sym__EntityDecl = 90,
  sym_GEDecl = 91,
  sym_PEDecl = 92,
  sym_EntityValue = 93,
  sym_NDataDecl = 94,
  sym_NotationDecl = 95,
  sym_PEReference = 96,
  sym__Reference = 97,
  sym_EntityRef = 98,
  sym_CharRef = 99,
  sym_AttValue = 100,
  sym_ExternalID = 101,
  sym_PublicID = 102,
  sym_SystemLiteral = 103,
  sym_PubidLiteral = 104,
  sym_XMLDecl = 105,
  sym__VersionInfo = 106,
  sym__EncodingDecl = 107,
  sym_PI = 108,
  sym__Eq = 109,
  sym_prolog = 110,
  sym__Misc = 111,
  sym__SDDecl = 112,
  sym_doctypedecl = 113,
  aux_sym__intSubset = 114,
  sym_element = 115,
  sym_EmptyElemTag = 116,
  sym_Attribute = 117,
  sym_STag = 118,
  sym_ETag = 119,
  sym_content = 120,
  sym_CDSect = 121,
  sym_StyleSheetPI = 122,
  sym_XmlModelPI = 123,
  sym_PseudoAtt = 124,
  sym_PseudoAttValue = 125,
  aux_sym_document_repeat1 = 126,
  aux_sym_Mixed_repeat1 = 127,
  aux_sym__choice_repeat1 = 128,
  aux_sym_AttlistDecl_repeat1 = 129,
  aux_sym_NotationType_repeat1 = 130,
  aux_sym_Enumeration_repeat1 = 131,
  aux_sym_EntityValue_repeat1 = 132,
  aux_sym_EntityValue_repeat2 = 133,
  aux_sym_AttValue_repeat1 = 134,
  aux_sym_AttValue_repeat2 = 135,
  aux_sym_EmptyElemTag_repeat1 = 136,
  aux_sym_content_repeat1 = 137,
  aux_sym_StyleSheetPI_repeat1 = 138,
  alias_sym_PITarget = 139,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_Name] = "Name",
  [anon_sym_LT_BANG_LBRACK] = "<![",
  [anon_sym_IGNORE] = "IGNORE",
  [anon_sym_INCLUDE] = "INCLUDE",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [anon_sym_standalone] = "standalone",
  [anon_sym_yes] = "yes",
  [anon_sym_no] = "no",
  [anon_sym_DOCTYPE] = "DOCTYPE",
  [anon_sym_LT] = "<",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [sym_CharData] = "CharData",
  [anon_sym_LT_BANG_LBRACKCDATA_LBRACK] = "<![CDATA[",
  [anon_sym_RBRACK_RBRACK_GT] = "]]>",
  [sym_CData] = "CData",
  [anon_sym_xml_DASHstylesheet] = "xml-stylesheet",
  [anon_sym_xml_DASHmodel] = "xml-model",
  [sym_document] = "document",
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
  [sym_StyleSheetPI] = "StyleSheetPI",
  [sym_XmlModelPI] = "XmlModelPI",
  [sym_PseudoAtt] = "PseudoAtt",
  [sym_PseudoAttValue] = "PseudoAttValue",
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
  [aux_sym_EmptyElemTag_repeat1] = "EmptyElemTag_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
  [aux_sym_StyleSheetPI_repeat1] = "StyleSheetPI_repeat1",
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
  [anon_sym_standalone] = anon_sym_standalone,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_DOCTYPE] = anon_sym_DOCTYPE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [sym_CharData] = sym_CharData,
  [anon_sym_LT_BANG_LBRACKCDATA_LBRACK] = anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [anon_sym_RBRACK_RBRACK_GT] = anon_sym_RBRACK_RBRACK_GT,
  [sym_CData] = sym_CData,
  [anon_sym_xml_DASHstylesheet] = anon_sym_xml_DASHstylesheet,
  [anon_sym_xml_DASHmodel] = anon_sym_xml_DASHmodel,
  [sym_document] = sym_document,
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
  [sym_StyleSheetPI] = sym_StyleSheetPI,
  [sym_XmlModelPI] = sym_XmlModelPI,
  [sym_PseudoAtt] = sym_PseudoAtt,
  [sym_PseudoAttValue] = sym_PseudoAttValue,
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
  [aux_sym_EmptyElemTag_repeat1] = aux_sym_EmptyElemTag_repeat1,
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
  [aux_sym_StyleSheetPI_repeat1] = aux_sym_StyleSheetPI_repeat1,
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
  [anon_sym_DOCTYPE] = {
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
  [anon_sym_xml_DASHstylesheet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xml_DASHmodel] = {
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
  [sym_StyleSheetPI] = {
    .visible = true,
    .named = true,
  },
  [sym_XmlModelPI] = {
    .visible = true,
    .named = true,
  },
  [sym_PseudoAtt] = {
    .visible = true,
    .named = true,
  },
  [sym_PseudoAttValue] = {
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
  [aux_sym_StyleSheetPI_repeat1] = {
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
  [3] = {.index = 2, .length = 1},
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
  [4] = {
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
  [78] = 78,
  [79] = 79,
  [80] = 59,
  [81] = 81,
  [82] = 45,
  [83] = 83,
  [84] = 53,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 37,
  [89] = 54,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 54,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 53,
  [100] = 100,
  [101] = 101,
  [102] = 7,
  [103] = 7,
  [104] = 37,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 53,
  [111] = 54,
  [112] = 37,
  [113] = 113,
  [114] = 114,
  [115] = 53,
  [116] = 54,
  [117] = 117,
  [118] = 118,
  [119] = 37,
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
  [134] = 47,
  [135] = 135,
  [136] = 130,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 51,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 43,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 57,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 58,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 60,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 40,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 170,
  [175] = 65,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 160,
  [180] = 180,
  [181] = 128,
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
  [252] = 251,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 250,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 248,
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
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 398,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 387,
  [413] = 386,
  [414] = 414,
  [415] = 382,
  [416] = 416,
  [417] = 345,
  [418] = 402,
  [419] = 387,
  [420] = 386,
  [421] = 402,
  [422] = 387,
  [423] = 386,
  [424] = 387,
  [425] = 386,
  [426] = 416,
  [427] = 401,
  [428] = 400,
  [429] = 399,
  [430] = 397,
  [431] = 393,
  [432] = 385,
  [433] = 401,
  [434] = 400,
  [435] = 399,
  [436] = 385,
  [437] = 401,
  [438] = 400,
  [439] = 399,
  [440] = 401,
  [441] = 400,
  [442] = 399,
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
      if (eof) ADVANCE(54);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '%') ADVANCE(78);
      if (lookahead == '&') ADVANCE(133);
      if (lookahead == '\'') ADVANCE(93);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '*') ADVANCE(65);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == ',') ADVANCE(68);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '1') ADVANCE(81);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '<') ADVANCE(155);
      if (lookahead == '=') ADVANCE(154);
      if (lookahead == '>') ADVANCE(60);
      if (lookahead == '?') ADVANCE(66);
      if (lookahead == 'E') ADVANCE(86);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'N') ADVANCE(85);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == ']') ADVANCE(57);
      if (lookahead == '|') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(91);
      if (lookahead == 0 ||
          lookahead == 65534 ||
          lookahead == 65535) ADVANCE(80);
      if (!aux_sym_EntityValue_token1_character_set_1(lookahead)) ADVANCE(80);
      if (aux_sym_EntityValue_token1_character_set_2(lookahead)) ADVANCE(92);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '%') ADVANCE(78);
      if (lookahead == '&') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(80);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '&') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(138);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(78);
      if (lookahead == '&') ADVANCE(133);
      if (lookahead == '\'') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(94);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(78);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == '?') ADVANCE(13);
      if (lookahead == 'E') ADVANCE(114);
      if (lookahead == 'I') ADVANCE(97);
      if (lookahead == 'N') ADVANCE(112);
      if (lookahead == ']') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (sym_Name_character_set_1(lookahead)) ADVANCE(128);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(133);
      if (lookahead == '\'') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(139);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '[') ADVANCE(21);
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
      if (lookahead == '.') ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(158);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(153);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(149);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(165);
      END_STATE();
    case 15:
      if (lookahead == '?') ADVANCE(13);
      if (sym_Name_character_set_1(lookahead)) ADVANCE(128);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(40);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(62);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(44);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(41);
      END_STATE();
    case 20:
      if (lookahead == 'C') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'C') ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == 'D') ADVANCE(16);
      END_STATE();
    case 23:
      if (lookahead == 'D') ADVANCE(77);
      END_STATE();
    case 24:
      if (lookahead == 'D') ADVANCE(76);
      END_STATE();
    case 25:
      if (lookahead == 'D') ADVANCE(75);
      END_STATE();
    case 26:
      if (lookahead == 'D') ADVANCE(19);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(23);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(25);
      END_STATE();
    case 31:
      if (lookahead == 'F') ADVANCE(32);
      if (lookahead == 'I') ADVANCE(36);
      if (lookahead == 'P') ADVANCE(20);
      if (lookahead == 'R') ADVANCE(27);
      END_STATE();
    case 32:
      if (lookahead == 'I') ADVANCE(43);
      END_STATE();
    case 33:
      if (lookahead == 'I') ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == 'I') ADVANCE(29);
      END_STATE();
    case 35:
      if (lookahead == 'L') ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == 'M') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'P') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'Q') ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == 'R') ADVANCE(30);
      END_STATE();
    case 40:
      if (lookahead == 'T') ADVANCE(17);
      END_STATE();
    case 41:
      if (lookahead == 'T') ADVANCE(18);
      END_STATE();
    case 42:
      if (lookahead == 'U') ADVANCE(33);
      END_STATE();
    case 43:
      if (lookahead == 'X') ADVANCE(28);
      END_STATE();
    case 44:
      if (lookahead == '[') ADVANCE(164);
      END_STATE();
    case 45:
      if (lookahead == ']') ADVANCE(52);
      if (lookahead != 0) ADVANCE(166);
      END_STATE();
    case 46:
      if (lookahead == ']') ADVANCE(14);
      END_STATE();
    case 47:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(96);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(132);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 50:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 51:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(152);
      END_STATE();
    case 52:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(166);
      END_STATE();
    case 53:
      if (eof) ADVANCE(54);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '%') ADVANCE(78);
      if (lookahead == '\'') ADVANCE(93);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '*') ADVANCE(65);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == ',') ADVANCE(68);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '1') ADVANCE(10);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '<') ADVANCE(156);
      if (lookahead == '=') ADVANCE(154);
      if (lookahead == '>') ADVANCE(60);
      if (lookahead == '?') ADVANCE(66);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == ']') ADVANCE(57);
      if (lookahead == '|') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(96);
      if (sym_Name_character_set_1(lookahead)) ADVANCE(128);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LT_BANG_LBRACK);
      if (lookahead == 'C') ADVANCE(26);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '[') ADVANCE(55);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_POUNDPCDATA);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'R') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'R') ADVANCE(101);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(128);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(73);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(74);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(128);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(128);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_POUNDREQUIRED);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_POUNDIMPLIED);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_POUNDFIXED);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '.') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      if (sym_Nmtoken_character_set_2(lookahead)) ADVANCE(132);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '>') ADVANCE(158);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'D') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'F') ADVANCE(32);
      if (lookahead == 'I') ADVANCE(36);
      if (lookahead == 'P') ADVANCE(20);
      if (lookahead == 'R') ADVANCE(27);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'M') ADVANCE(121);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'N') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(96);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      if (sym_Nmtoken_character_set_3(lookahead)) ADVANCE(132);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(132);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(128);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_EntityValue_token2);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__S);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'D') ADVANCE(70);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(128);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(118);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(105);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(128);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(119);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(128);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(115);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(128);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'F') ADVANCE(71);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'F') ADVANCE(72);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(128);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(122);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'Y') ADVANCE(73);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(125);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(128);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(102);
      if (lookahead == 'Y') ADVANCE(74);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(128);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'K') ADVANCE(99);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'K') ADVANCE(103);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(128);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'M') ADVANCE(124);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(128);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(71);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(123);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(128);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(72);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(128);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'O') ADVANCE(110);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'O') ADVANCE(111);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(128);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'S') ADVANCE(73);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'S') ADVANCE(74);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(128);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(106);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(108);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(128);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(117);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(128);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(109);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(128);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_Name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_Name);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (sym_Nmtoken_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      if (sym_Nmtoken_character_set_3(lookahead)) ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      if (sym_Nmtoken_character_set_3(lookahead)) ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '#') ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_AMP_POUND);
      if (lookahead == 'x') ADVANCE(136);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_CharRef_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_CharRef_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_AttValue_token1);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_AttValue_token2);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token2);
      if (lookahead == '\'') ADVANCE(93);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '%') ||
          ('\'' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token1);
      if (aux_sym_PubidLiteral_token1_character_set_1(lookahead)) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token2);
      if (lookahead == '\'') ADVANCE(93);
      if (aux_sym_PubidLiteral_token2_character_set_1(lookahead)) ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token2);
      if (aux_sym_PubidLiteral_token2_character_set_1(lookahead)) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
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
      ACCEPT_TOKEN(aux_sym_PI_token1);
      if (lookahead == '?') ADVANCE(51);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_Comment);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(59);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == '?') ADVANCE(148);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(58);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == '?') ADVANCE(148);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == '?') ADVANCE(148);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_CharData);
      if (lookahead == '&') ADVANCE(133);
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
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK_GT);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_CData);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead != 0) ADVANCE(166);
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
      if (lookahead == 'D') ADVANCE(3);
      if (lookahead == 'E') ADVANCE(4);
      if (lookahead == 'I') ADVANCE(5);
      if (lookahead == 'N') ADVANCE(6);
      if (lookahead == 'P') ADVANCE(7);
      if (lookahead == 'S') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(10);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == 'x') ADVANCE(13);
      if (lookahead == 'y') ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == 'N') ADVANCE(15);
      if (lookahead == 'T') ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == 'D') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == 'O') ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == 'L') ADVANCE(19);
      if (lookahead == 'M') ADVANCE(20);
      if (lookahead == 'N') ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == 'G') ADVANCE(22);
      if (lookahead == 'N') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == 'D') ADVANCE(24);
      if (lookahead == 'O') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 'U') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == 'Y') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 15:
      if (lookahead == 'Y') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == 'T') ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(36);
      END_STATE();
    case 18:
      if (lookahead == 'C') ADVANCE(37);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == 'P') ADVANCE(39);
      END_STATE();
    case 21:
      if (lookahead == 'T') ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == 'N') ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == 'C') ADVANCE(42);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(43);
      END_STATE();
    case 25:
      if (lookahead == 'T') ADVANCE(44);
      END_STATE();
    case 26:
      if (lookahead == 'B') ADVANCE(45);
      END_STATE();
    case 27:
      if (lookahead == 'S') ADVANCE(46);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_ANY);
      END_STATE();
    case 35:
      if (lookahead == 'L') ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead == 'T') ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == 'T') ADVANCE(54);
      END_STATE();
    case 38:
      if (lookahead == 'M') ADVANCE(55);
      END_STATE();
    case 39:
      if (lookahead == 'T') ADVANCE(56);
      END_STATE();
    case 40:
      if (lookahead == 'I') ADVANCE(57);
      END_STATE();
    case 41:
      if (lookahead == 'O') ADVANCE(58);
      END_STATE();
    case 42:
      if (lookahead == 'L') ADVANCE(59);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(60);
      END_STATE();
    case 44:
      if (lookahead == 'A') ADVANCE(61);
      END_STATE();
    case 45:
      if (lookahead == 'L') ADVANCE(62);
      END_STATE();
    case 46:
      if (lookahead == 'T') ADVANCE(63);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_xml);
      if (lookahead == '-') ADVANCE(67);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 52:
      if (lookahead == 'I') ADVANCE(68);
      END_STATE();
    case 53:
      if (lookahead == 'A') ADVANCE(69);
      END_STATE();
    case 54:
      if (lookahead == 'Y') ADVANCE(70);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(71);
      END_STATE();
    case 56:
      if (lookahead == 'Y') ADVANCE(72);
      END_STATE();
    case 57:
      if (lookahead == 'T') ADVANCE(73);
      END_STATE();
    case 58:
      if (lookahead == 'R') ADVANCE(74);
      END_STATE();
    case 59:
      if (lookahead == 'U') ADVANCE(75);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(76);
      END_STATE();
    case 61:
      if (lookahead == 'T') ADVANCE(77);
      END_STATE();
    case 62:
      if (lookahead == 'I') ADVANCE(78);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(79);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 67:
      if (lookahead == 'm') ADVANCE(83);
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 68:
      if (lookahead == 'S') ADVANCE(85);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_StringType);
      END_STATE();
    case 70:
      if (lookahead == 'P') ADVANCE(86);
      END_STATE();
    case 71:
      if (lookahead == 'N') ADVANCE(87);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_EMPTY);
      END_STATE();
    case 73:
      if (lookahead == 'Y') ADVANCE(88);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(89);
      END_STATE();
    case 75:
      if (lookahead == 'D') ADVANCE(90);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_NDATA);
      END_STATE();
    case 77:
      if (lookahead == 'I') ADVANCE(91);
      END_STATE();
    case 78:
      if (lookahead == 'C') ADVANCE(92);
      END_STATE();
    case 79:
      if (lookahead == 'M') ADVANCE(93);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 85:
      if (lookahead == 'T') ADVANCE(99);
      END_STATE();
    case 86:
      if (lookahead == 'E') ADVANCE(100);
      END_STATE();
    case 87:
      if (lookahead == 'T') ADVANCE(101);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_ENTITY);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_IGNORE);
      END_STATE();
    case 90:
      if (lookahead == 'E') ADVANCE(102);
      END_STATE();
    case 91:
      if (lookahead == 'O') ADVANCE(103);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PUBLIC);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_SYSTEM);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 98:
      if (lookahead == 'y') ADVANCE(108);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_ATTLIST);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DOCTYPE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_ELEMENT);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      END_STATE();
    case 103:
      if (lookahead == 'N') ADVANCE(109);
      END_STATE();
    case 104:
      if (lookahead == 'g') ADVANCE(110);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_NOTATION);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_encoding);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_xml_DASHmodel);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_standalone);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_xml_DASHstylesheet);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 53},
  [2] = {.lex_state = 160},
  [3] = {.lex_state = 160},
  [4] = {.lex_state = 160},
  [5] = {.lex_state = 160},
  [6] = {.lex_state = 53},
  [7] = {.lex_state = 53},
  [8] = {.lex_state = 53},
  [9] = {.lex_state = 53},
  [10] = {.lex_state = 53},
  [11] = {.lex_state = 53},
  [12] = {.lex_state = 53},
  [13] = {.lex_state = 53},
  [14] = {.lex_state = 53},
  [15] = {.lex_state = 53},
  [16] = {.lex_state = 53},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 53},
  [21] = {.lex_state = 53},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 53},
  [24] = {.lex_state = 53},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 53},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 160},
  [30] = {.lex_state = 53},
  [31] = {.lex_state = 53},
  [32] = {.lex_state = 53},
  [33] = {.lex_state = 53},
  [34] = {.lex_state = 53},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 160},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 53},
  [40] = {.lex_state = 160},
  [41] = {.lex_state = 53},
  [42] = {.lex_state = 53},
  [43] = {.lex_state = 160},
  [44] = {.lex_state = 160},
  [45] = {.lex_state = 160},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 160},
  [48] = {.lex_state = 53},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 160},
  [51] = {.lex_state = 160},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 160},
  [54] = {.lex_state = 160},
  [55] = {.lex_state = 53},
  [56] = {.lex_state = 53},
  [57] = {.lex_state = 160},
  [58] = {.lex_state = 160},
  [59] = {.lex_state = 160},
  [60] = {.lex_state = 160},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 53},
  [65] = {.lex_state = 160},
  [66] = {.lex_state = 53},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 160},
  [69] = {.lex_state = 53},
  [70] = {.lex_state = 53},
  [71] = {.lex_state = 53},
  [72] = {.lex_state = 53},
  [73] = {.lex_state = 53},
  [74] = {.lex_state = 53},
  [75] = {.lex_state = 53},
  [76] = {.lex_state = 53},
  [77] = {.lex_state = 53},
  [78] = {.lex_state = 53},
  [79] = {.lex_state = 53},
  [80] = {.lex_state = 53},
  [81] = {.lex_state = 53},
  [82] = {.lex_state = 53},
  [83] = {.lex_state = 53},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 53},
  [86] = {.lex_state = 53},
  [87] = {.lex_state = 53},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 53},
  [91] = {.lex_state = 53},
  [92] = {.lex_state = 53},
  [93] = {.lex_state = 53},
  [94] = {.lex_state = 53},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 53},
  [97] = {.lex_state = 53},
  [98] = {.lex_state = 53},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 53},
  [101] = {.lex_state = 53},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 53},
  [106] = {.lex_state = 53},
  [107] = {.lex_state = 53},
  [108] = {.lex_state = 53},
  [109] = {.lex_state = 53},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 53},
  [114] = {.lex_state = 53},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 53},
  [118] = {.lex_state = 53},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 53},
  [121] = {.lex_state = 53},
  [122] = {.lex_state = 53},
  [123] = {.lex_state = 53},
  [124] = {.lex_state = 53},
  [125] = {.lex_state = 53},
  [126] = {.lex_state = 53},
  [127] = {.lex_state = 53},
  [128] = {.lex_state = 53},
  [129] = {.lex_state = 53},
  [130] = {.lex_state = 53},
  [131] = {.lex_state = 53},
  [132] = {.lex_state = 53},
  [133] = {.lex_state = 53},
  [134] = {.lex_state = 53},
  [135] = {.lex_state = 53},
  [136] = {.lex_state = 53},
  [137] = {.lex_state = 53},
  [138] = {.lex_state = 53},
  [139] = {.lex_state = 53},
  [140] = {.lex_state = 53},
  [141] = {.lex_state = 53},
  [142] = {.lex_state = 53},
  [143] = {.lex_state = 53},
  [144] = {.lex_state = 53},
  [145] = {.lex_state = 53},
  [146] = {.lex_state = 53},
  [147] = {.lex_state = 53},
  [148] = {.lex_state = 53},
  [149] = {.lex_state = 53},
  [150] = {.lex_state = 53},
  [151] = {.lex_state = 53},
  [152] = {.lex_state = 53},
  [153] = {.lex_state = 53},
  [154] = {.lex_state = 53},
  [155] = {.lex_state = 53},
  [156] = {.lex_state = 53},
  [157] = {.lex_state = 53},
  [158] = {.lex_state = 53},
  [159] = {.lex_state = 53},
  [160] = {.lex_state = 53},
  [161] = {.lex_state = 53},
  [162] = {.lex_state = 53},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 53},
  [165] = {.lex_state = 53},
  [166] = {.lex_state = 53},
  [167] = {.lex_state = 53},
  [168] = {.lex_state = 53},
  [169] = {.lex_state = 53},
  [170] = {.lex_state = 53},
  [171] = {.lex_state = 53},
  [172] = {.lex_state = 53},
  [173] = {.lex_state = 53},
  [174] = {.lex_state = 53},
  [175] = {.lex_state = 53},
  [176] = {.lex_state = 53},
  [177] = {.lex_state = 53},
  [178] = {.lex_state = 53},
  [179] = {.lex_state = 53},
  [180] = {.lex_state = 53},
  [181] = {.lex_state = 53},
  [182] = {.lex_state = 53},
  [183] = {.lex_state = 53},
  [184] = {.lex_state = 53},
  [185] = {.lex_state = 53},
  [186] = {.lex_state = 53},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 53},
  [190] = {.lex_state = 53},
  [191] = {.lex_state = 53},
  [192] = {.lex_state = 53},
  [193] = {.lex_state = 15},
  [194] = {.lex_state = 4},
  [195] = {.lex_state = 15},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 53},
  [198] = {.lex_state = 53},
  [199] = {.lex_state = 53},
  [200] = {.lex_state = 53},
  [201] = {.lex_state = 15},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 53},
  [204] = {.lex_state = 53},
  [205] = {.lex_state = 15},
  [206] = {.lex_state = 53},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 15},
  [209] = {.lex_state = 53},
  [210] = {.lex_state = 53},
  [211] = {.lex_state = 53},
  [212] = {.lex_state = 53},
  [213] = {.lex_state = 53},
  [214] = {.lex_state = 53},
  [215] = {.lex_state = 53},
  [216] = {.lex_state = 53},
  [217] = {.lex_state = 53},
  [218] = {.lex_state = 53},
  [219] = {.lex_state = 53},
  [220] = {.lex_state = 53},
  [221] = {.lex_state = 53},
  [222] = {.lex_state = 53},
  [223] = {.lex_state = 53},
  [224] = {.lex_state = 53},
  [225] = {.lex_state = 53},
  [226] = {.lex_state = 53},
  [227] = {.lex_state = 53},
  [228] = {.lex_state = 53},
  [229] = {.lex_state = 53},
  [230] = {.lex_state = 53},
  [231] = {.lex_state = 53},
  [232] = {.lex_state = 53},
  [233] = {.lex_state = 53},
  [234] = {.lex_state = 53},
  [235] = {.lex_state = 53},
  [236] = {.lex_state = 53},
  [237] = {.lex_state = 53},
  [238] = {.lex_state = 53},
  [239] = {.lex_state = 53},
  [240] = {.lex_state = 53},
  [241] = {.lex_state = 53},
  [242] = {.lex_state = 53},
  [243] = {.lex_state = 53},
  [244] = {.lex_state = 53},
  [245] = {.lex_state = 4},
  [246] = {.lex_state = 53},
  [247] = {.lex_state = 53},
  [248] = {.lex_state = 53},
  [249] = {.lex_state = 53},
  [250] = {.lex_state = 53},
  [251] = {.lex_state = 4},
  [252] = {.lex_state = 4},
  [253] = {.lex_state = 53},
  [254] = {.lex_state = 53},
  [255] = {.lex_state = 53},
  [256] = {.lex_state = 4},
  [257] = {.lex_state = 53},
  [258] = {.lex_state = 53},
  [259] = {.lex_state = 53},
  [260] = {.lex_state = 53},
  [261] = {.lex_state = 53},
  [262] = {.lex_state = 53},
  [263] = {.lex_state = 53},
  [264] = {.lex_state = 53},
  [265] = {.lex_state = 53},
  [266] = {.lex_state = 53},
  [267] = {.lex_state = 53},
  [268] = {.lex_state = 53},
  [269] = {.lex_state = 53},
  [270] = {.lex_state = 53},
  [271] = {.lex_state = 53},
  [272] = {.lex_state = 53},
  [273] = {.lex_state = 53},
  [274] = {.lex_state = 4},
  [275] = {.lex_state = 53},
  [276] = {.lex_state = 53},
  [277] = {.lex_state = 53},
  [278] = {.lex_state = 53},
  [279] = {.lex_state = 4},
  [280] = {.lex_state = 53},
  [281] = {.lex_state = 47},
  [282] = {.lex_state = 53},
  [283] = {.lex_state = 4},
  [284] = {.lex_state = 53},
  [285] = {.lex_state = 53},
  [286] = {.lex_state = 53},
  [287] = {.lex_state = 53},
  [288] = {.lex_state = 53},
  [289] = {.lex_state = 53},
  [290] = {.lex_state = 53},
  [291] = {.lex_state = 53},
  [292] = {.lex_state = 53},
  [293] = {.lex_state = 53},
  [294] = {.lex_state = 53},
  [295] = {.lex_state = 53},
  [296] = {.lex_state = 53},
  [297] = {.lex_state = 53},
  [298] = {.lex_state = 53},
  [299] = {.lex_state = 53},
  [300] = {.lex_state = 53},
  [301] = {.lex_state = 4},
  [302] = {.lex_state = 4},
  [303] = {.lex_state = 53},
  [304] = {.lex_state = 53},
  [305] = {.lex_state = 53},
  [306] = {.lex_state = 140},
  [307] = {.lex_state = 53},
  [308] = {.lex_state = 53},
  [309] = {.lex_state = 53},
  [310] = {.lex_state = 53},
  [311] = {.lex_state = 53},
  [312] = {.lex_state = 142},
  [313] = {.lex_state = 144},
  [314] = {.lex_state = 47},
  [315] = {.lex_state = 146},
  [316] = {.lex_state = 53},
  [317] = {.lex_state = 53},
  [318] = {.lex_state = 53},
  [319] = {.lex_state = 53},
  [320] = {.lex_state = 53},
  [321] = {.lex_state = 4},
  [322] = {.lex_state = 53},
  [323] = {.lex_state = 53},
  [324] = {.lex_state = 53},
  [325] = {.lex_state = 4},
  [326] = {.lex_state = 15},
  [327] = {.lex_state = 53},
  [328] = {.lex_state = 53},
  [329] = {.lex_state = 47},
  [330] = {.lex_state = 53},
  [331] = {.lex_state = 53},
  [332] = {.lex_state = 53},
  [333] = {.lex_state = 53},
  [334] = {.lex_state = 53},
  [335] = {.lex_state = 53},
  [336] = {.lex_state = 53},
  [337] = {.lex_state = 53},
  [338] = {.lex_state = 53},
  [339] = {.lex_state = 53},
  [340] = {.lex_state = 53},
  [341] = {.lex_state = 53},
  [342] = {.lex_state = 53},
  [343] = {.lex_state = 4},
  [344] = {.lex_state = 53},
  [345] = {.lex_state = 53},
  [346] = {.lex_state = 47},
  [347] = {.lex_state = 4},
  [348] = {.lex_state = 53},
  [349] = {.lex_state = 53},
  [350] = {.lex_state = 53},
  [351] = {.lex_state = 47},
  [352] = {.lex_state = 53},
  [353] = {.lex_state = 53},
  [354] = {.lex_state = 53},
  [355] = {.lex_state = 53},
  [356] = {.lex_state = 53},
  [357] = {.lex_state = 47},
  [358] = {.lex_state = 53},
  [359] = {.lex_state = 53},
  [360] = {.lex_state = 53},
  [361] = {.lex_state = 53},
  [362] = {.lex_state = 53},
  [363] = {.lex_state = 53},
  [364] = {.lex_state = 53},
  [365] = {.lex_state = 53},
  [366] = {.lex_state = 53},
  [367] = {.lex_state = 53},
  [368] = {.lex_state = 53},
  [369] = {.lex_state = 53},
  [370] = {.lex_state = 53},
  [371] = {.lex_state = 53},
  [372] = {.lex_state = 53},
  [373] = {.lex_state = 53},
  [374] = {.lex_state = 53},
  [375] = {.lex_state = 53},
  [376] = {.lex_state = 53},
  [377] = {.lex_state = 53},
  [378] = {.lex_state = 53},
  [379] = {.lex_state = 53},
  [380] = {.lex_state = 53},
  [381] = {.lex_state = 53},
  [382] = {.lex_state = 4},
  [383] = {.lex_state = 53},
  [384] = {.lex_state = 4},
  [385] = {.lex_state = 53},
  [386] = {.lex_state = 53},
  [387] = {.lex_state = 53},
  [388] = {.lex_state = 53},
  [389] = {.lex_state = 53},
  [390] = {.lex_state = 53},
  [391] = {.lex_state = 53},
  [392] = {.lex_state = 53},
  [393] = {.lex_state = 152},
  [394] = {.lex_state = 53},
  [395] = {.lex_state = 53},
  [396] = {.lex_state = 166},
  [397] = {.lex_state = 53},
  [398] = {.lex_state = 53},
  [399] = {.lex_state = 49},
  [400] = {.lex_state = 4},
  [401] = {.lex_state = 53},
  [402] = {.lex_state = 53},
  [403] = {.lex_state = 53},
  [404] = {.lex_state = 53},
  [405] = {.lex_state = 53},
  [406] = {.lex_state = 53},
  [407] = {.lex_state = 50},
  [408] = {.lex_state = 53},
  [409] = {.lex_state = 50},
  [410] = {.lex_state = 53},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 53},
  [413] = {.lex_state = 53},
  [414] = {.lex_state = 53},
  [415] = {.lex_state = 4},
  [416] = {.lex_state = 53},
  [417] = {.lex_state = 53},
  [418] = {.lex_state = 53},
  [419] = {.lex_state = 53},
  [420] = {.lex_state = 53},
  [421] = {.lex_state = 53},
  [422] = {.lex_state = 53},
  [423] = {.lex_state = 53},
  [424] = {.lex_state = 53},
  [425] = {.lex_state = 53},
  [426] = {.lex_state = 53},
  [427] = {.lex_state = 53},
  [428] = {.lex_state = 4},
  [429] = {.lex_state = 49},
  [430] = {.lex_state = 53},
  [431] = {.lex_state = 152},
  [432] = {.lex_state = 53},
  [433] = {.lex_state = 53},
  [434] = {.lex_state = 4},
  [435] = {.lex_state = 49},
  [436] = {.lex_state = 53},
  [437] = {.lex_state = 53},
  [438] = {.lex_state = 4},
  [439] = {.lex_state = 49},
  [440] = {.lex_state = 53},
  [441] = {.lex_state = 4},
  [442] = {.lex_state = 49},
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
    [anon_sym_standalone] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_DOCTYPE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_LT_BANG_LBRACKCDATA_LBRACK] = ACTIONS(1),
    [anon_sym_xml_DASHstylesheet] = ACTIONS(1),
    [anon_sym_xml_DASHmodel] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(411),
    [sym_XMLDecl] = STATE(23),
    [sym_PI] = STATE(20),
    [sym_prolog] = STATE(178),
    [sym__Misc] = STATE(20),
    [sym_doctypedecl] = STATE(34),
    [sym_element] = STATE(39),
    [sym_EmptyElemTag] = STATE(175),
    [sym_STag] = STATE(3),
    [sym_StyleSheetPI] = STATE(20),
    [sym_XmlModelPI] = STATE(20),
    [aux_sym_document_repeat1] = STATE(20),
    [anon_sym_LT_BANG] = ACTIONS(3),
    [sym__S] = ACTIONS(5),
    [anon_sym_LT_QMARK] = ACTIONS(7),
    [sym_Comment] = ACTIONS(9),
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
    STATE(60), 1,
      sym_ETag,
    STATE(65), 1,
      sym_EmptyElemTag,
    STATE(250), 1,
      sym_content,
    STATE(37), 2,
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
    STATE(65), 1,
      sym_EmptyElemTag,
    STATE(164), 1,
      sym_ETag,
    STATE(261), 1,
      sym_content,
    STATE(37), 2,
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
    STATE(65), 1,
      sym_EmptyElemTag,
    STATE(37), 2,
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
    STATE(65), 1,
      sym_EmptyElemTag,
    STATE(37), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(5), 5,
      sym__Reference,
      sym_PI,
      sym_element,
      sym_CDSect,
      aux_sym_content_repeat1,
  [192] = 11,
    ACTIONS(3), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT_QMARK,
    ACTIONS(11), 1,
      anon_sym_LT,
    STATE(3), 1,
      sym_STag,
    STATE(23), 1,
      sym_XMLDecl,
    STATE(34), 1,
      sym_doctypedecl,
    STATE(66), 1,
      sym_element,
    STATE(172), 1,
      sym_prolog,
    STATE(175), 1,
      sym_EmptyElemTag,
    ACTIONS(9), 2,
      sym__S,
      sym_Comment,
    STATE(20), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [231] = 2,
    ACTIONS(67), 1,
      anon_sym_LT_BANG,
    ACTIONS(65), 13,
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
  [250] = 9,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    ACTIONS(71), 1,
      anon_sym_LT_BANG,
    ACTIONS(73), 1,
      sym__S,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(77), 1,
      sym_Comment,
    STATE(11), 1,
      aux_sym__intSubset,
    STATE(165), 1,
      sym__markupdecl,
    STATE(307), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(308), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [283] = 9,
    ACTIONS(71), 1,
      anon_sym_LT_BANG,
    ACTIONS(73), 1,
      sym__S,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(77), 1,
      sym_Comment,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      aux_sym__intSubset,
    STATE(165), 1,
      sym__markupdecl,
    STATE(307), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(308), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [316] = 9,
    ACTIONS(71), 1,
      anon_sym_LT_BANG,
    ACTIONS(73), 1,
      sym__S,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(77), 1,
      sym_Comment,
    ACTIONS(81), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      aux_sym__intSubset,
    STATE(165), 1,
      sym__markupdecl,
    STATE(307), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(308), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [349] = 9,
    ACTIONS(83), 1,
      anon_sym_RBRACK,
    ACTIONS(85), 1,
      anon_sym_LT_BANG,
    ACTIONS(88), 1,
      sym__S,
    ACTIONS(91), 1,
      anon_sym_LT_QMARK,
    ACTIONS(94), 1,
      sym_Comment,
    STATE(11), 1,
      aux_sym__intSubset,
    STATE(165), 1,
      sym__markupdecl,
    STATE(307), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(308), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [382] = 9,
    ACTIONS(71), 1,
      anon_sym_LT_BANG,
    ACTIONS(73), 1,
      sym__S,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(77), 1,
      sym_Comment,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      aux_sym__intSubset,
    STATE(165), 1,
      sym__markupdecl,
    STATE(307), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(308), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [415] = 8,
    ACTIONS(71), 1,
      anon_sym_LT_BANG,
    ACTIONS(73), 1,
      sym__S,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(77), 1,
      sym_Comment,
    STATE(8), 1,
      aux_sym__intSubset,
    STATE(165), 1,
      sym__markupdecl,
    STATE(307), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(308), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [445] = 8,
    ACTIONS(71), 1,
      anon_sym_LT_BANG,
    ACTIONS(73), 1,
      sym__S,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(77), 1,
      sym_Comment,
    STATE(10), 1,
      aux_sym__intSubset,
    STATE(165), 1,
      sym__markupdecl,
    STATE(307), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(308), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [475] = 8,
    ACTIONS(71), 1,
      anon_sym_LT_BANG,
    ACTIONS(73), 1,
      sym__S,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(77), 1,
      sym_Comment,
    STATE(12), 1,
      aux_sym__intSubset,
    STATE(165), 1,
      sym__markupdecl,
    STATE(307), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(308), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [505] = 8,
    ACTIONS(71), 1,
      anon_sym_LT_BANG,
    ACTIONS(73), 1,
      sym__S,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(77), 1,
      sym_Comment,
    STATE(9), 1,
      aux_sym__intSubset,
    STATE(165), 1,
      sym__markupdecl,
    STATE(307), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(308), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [535] = 8,
    ACTIONS(99), 1,
      anon_sym_PERCENT,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(110), 1,
      anon_sym_AMP_POUND,
    ACTIONS(113), 1,
      anon_sym_AMP_POUNDx,
    STATE(104), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(17), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [563] = 8,
    ACTIONS(116), 1,
      anon_sym_PERCENT,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(122), 1,
      anon_sym_AMP,
    ACTIONS(124), 1,
      anon_sym_AMP_POUND,
    ACTIONS(126), 1,
      anon_sym_AMP_POUNDx,
    STATE(88), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(25), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [591] = 8,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(128), 1,
      anon_sym_PERCENT,
    ACTIONS(130), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(132), 1,
      anon_sym_AMP,
    ACTIONS(134), 1,
      anon_sym_AMP_POUND,
    ACTIONS(136), 1,
      anon_sym_AMP_POUNDx,
    STATE(104), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(17), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [619] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_BANG,
    ACTIONS(140), 1,
      anon_sym_LT_QMARK,
    ACTIONS(142), 1,
      anon_sym_LT,
    STATE(48), 1,
      sym_doctypedecl,
    ACTIONS(138), 2,
      sym__S,
      sym_Comment,
    STATE(26), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [643] = 6,
    ACTIONS(71), 1,
      anon_sym_LT_BANG,
    ACTIONS(75), 1,
      anon_sym_LT_QMARK,
    ACTIONS(77), 1,
      sym_Comment,
    STATE(142), 1,
      sym__markupdecl,
    STATE(307), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(308), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [667] = 8,
    ACTIONS(116), 1,
      anon_sym_PERCENT,
    ACTIONS(122), 1,
      anon_sym_AMP,
    ACTIONS(124), 1,
      anon_sym_AMP_POUND,
    ACTIONS(126), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      aux_sym_EntityValue_token2,
    STATE(88), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(18), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [695] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_BANG,
    ACTIONS(140), 1,
      anon_sym_LT_QMARK,
    ACTIONS(142), 1,
      anon_sym_LT,
    STATE(48), 1,
      sym_doctypedecl,
    ACTIONS(148), 2,
      sym__S,
      sym_Comment,
    STATE(24), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [719] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_BANG,
    ACTIONS(140), 1,
      anon_sym_LT_QMARK,
    ACTIONS(150), 1,
      anon_sym_LT,
    STATE(30), 1,
      sym_doctypedecl,
    ACTIONS(138), 2,
      sym__S,
      sym_Comment,
    STATE(26), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [743] = 8,
    ACTIONS(152), 1,
      anon_sym_PERCENT,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(160), 1,
      anon_sym_AMP,
    ACTIONS(163), 1,
      anon_sym_AMP_POUND,
    ACTIONS(166), 1,
      anon_sym_AMP_POUNDx,
    STATE(88), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(25), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [771] = 5,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 1,
      anon_sym_LT_QMARK,
    ACTIONS(171), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(173), 2,
      sym__S,
      sym_Comment,
    STATE(26), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [793] = 8,
    ACTIONS(128), 1,
      anon_sym_PERCENT,
    ACTIONS(132), 1,
      anon_sym_AMP,
    ACTIONS(134), 1,
      anon_sym_AMP_POUND,
    ACTIONS(136), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(144), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      aux_sym_EntityValue_token1,
    STATE(104), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(19), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [821] = 7,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_NOTATION,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    STATE(284), 1,
      sym__AttType,
    ACTIONS(183), 2,
      sym_StringType,
      sym_TokenizedType,
    STATE(282), 2,
      sym__EnumeratedType,
      sym_PEReference,
    STATE(285), 2,
      sym_NotationType,
      sym_Enumeration,
  [846] = 2,
    ACTIONS(189), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(191), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [860] = 4,
    ACTIONS(140), 1,
      anon_sym_LT_QMARK,
    ACTIONS(195), 1,
      anon_sym_LT,
    ACTIONS(193), 2,
      sym__S,
      sym_Comment,
    STATE(56), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [878] = 4,
    ACTIONS(140), 1,
      anon_sym_LT_QMARK,
    ACTIONS(150), 1,
      anon_sym_LT,
    ACTIONS(138), 2,
      sym__S,
      sym_Comment,
    STATE(26), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [896] = 4,
    ACTIONS(140), 1,
      anon_sym_LT_QMARK,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 2,
      sym__S,
      sym_Comment,
    STATE(26), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [914] = 6,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    STATE(109), 1,
      sym__choice,
    STATE(322), 1,
      sym_contentspec,
    ACTIONS(199), 2,
      anon_sym_EMPTY,
      anon_sym_ANY,
    STATE(327), 3,
      sym_Mixed,
      sym_children,
      sym_PEReference,
  [936] = 4,
    ACTIONS(140), 1,
      anon_sym_LT_QMARK,
    ACTIONS(142), 1,
      anon_sym_LT,
    ACTIONS(203), 2,
      sym__S,
      sym_Comment,
    STATE(31), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [954] = 7,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_AMP,
    ACTIONS(210), 1,
      anon_sym_AMP_POUND,
    ACTIONS(213), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(216), 1,
      aux_sym_AttValue_token2,
    STATE(35), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(112), 2,
      sym_EntityRef,
      sym_CharRef,
  [978] = 7,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      anon_sym_AMP,
    ACTIONS(223), 1,
      anon_sym_AMP_POUND,
    ACTIONS(225), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(227), 1,
      aux_sym_AttValue_token2,
    STATE(35), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(112), 2,
      sym_EntityRef,
      sym_CharRef,
  [1002] = 2,
    ACTIONS(229), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(231), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1016] = 7,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(235), 1,
      anon_sym_AMP_POUND,
    ACTIONS(237), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(239), 1,
      aux_sym_AttValue_token1,
    STATE(67), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(119), 2,
      sym_EntityRef,
      sym_CharRef,
  [1040] = 4,
    ACTIONS(140), 1,
      anon_sym_LT_QMARK,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    ACTIONS(243), 2,
      sym__S,
      sym_Comment,
    STATE(32), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1058] = 2,
    ACTIONS(245), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(247), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1072] = 4,
    ACTIONS(140), 1,
      anon_sym_LT_QMARK,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
    ACTIONS(251), 2,
      sym__S,
      sym_Comment,
    STATE(64), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1090] = 4,
    ACTIONS(140), 1,
      anon_sym_LT_QMARK,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 2,
      sym__S,
      sym_Comment,
    STATE(26), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1108] = 2,
    ACTIONS(255), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(257), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1122] = 2,
    ACTIONS(259), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(261), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1136] = 2,
    ACTIONS(263), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(265), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1150] = 7,
    ACTIONS(221), 1,
      anon_sym_AMP,
    ACTIONS(223), 1,
      anon_sym_AMP_POUND,
    ACTIONS(225), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(227), 1,
      aux_sym_AttValue_token2,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    STATE(35), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(112), 2,
      sym_EntityRef,
      sym_CharRef,
  [1174] = 2,
    ACTIONS(269), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(271), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1188] = 4,
    ACTIONS(140), 1,
      anon_sym_LT_QMARK,
    ACTIONS(150), 1,
      anon_sym_LT,
    ACTIONS(273), 2,
      sym__S,
      sym_Comment,
    STATE(55), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1206] = 7,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(235), 1,
      anon_sym_AMP_POUND,
    ACTIONS(237), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(239), 1,
      aux_sym_AttValue_token1,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    STATE(67), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(119), 2,
      sym_EntityRef,
      sym_CharRef,
  [1230] = 2,
    ACTIONS(275), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(277), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1244] = 2,
    ACTIONS(279), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(281), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1258] = 7,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(235), 1,
      anon_sym_AMP_POUND,
    ACTIONS(237), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    ACTIONS(285), 1,
      aux_sym_AttValue_token1,
    STATE(49), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(119), 2,
      sym_EntityRef,
      sym_CharRef,
  [1282] = 2,
    ACTIONS(287), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(289), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1296] = 2,
    ACTIONS(291), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(293), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1310] = 4,
    ACTIONS(140), 1,
      anon_sym_LT_QMARK,
    ACTIONS(195), 1,
      anon_sym_LT,
    ACTIONS(138), 2,
      sym__S,
      sym_Comment,
    STATE(26), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1328] = 4,
    ACTIONS(140), 1,
      anon_sym_LT_QMARK,
    ACTIONS(295), 1,
      anon_sym_LT,
    ACTIONS(138), 2,
      sym__S,
      sym_Comment,
    STATE(26), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1346] = 2,
    ACTIONS(297), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(299), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1360] = 2,
    ACTIONS(301), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(303), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1374] = 2,
    ACTIONS(305), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(307), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1388] = 2,
    ACTIONS(309), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(311), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1402] = 7,
    ACTIONS(221), 1,
      anon_sym_AMP,
    ACTIONS(223), 1,
      anon_sym_AMP_POUND,
    ACTIONS(225), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(313), 1,
      aux_sym_AttValue_token2,
    STATE(46), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(112), 2,
      sym_EntityRef,
      sym_CharRef,
  [1426] = 7,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(235), 1,
      anon_sym_AMP_POUND,
    ACTIONS(237), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(315), 1,
      anon_sym_DQUOTE,
    ACTIONS(317), 1,
      aux_sym_AttValue_token1,
    STATE(38), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(119), 2,
      sym_EntityRef,
      sym_CharRef,
  [1450] = 7,
    ACTIONS(221), 1,
      anon_sym_AMP,
    ACTIONS(223), 1,
      anon_sym_AMP_POUND,
    ACTIONS(225), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(315), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      aux_sym_AttValue_token2,
    STATE(36), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(112), 2,
      sym_EntityRef,
      sym_CharRef,
  [1474] = 4,
    ACTIONS(140), 1,
      anon_sym_LT_QMARK,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 2,
      sym__S,
      sym_Comment,
    STATE(26), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1492] = 2,
    ACTIONS(323), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(325), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1506] = 4,
    ACTIONS(140), 1,
      anon_sym_LT_QMARK,
    ACTIONS(327), 1,
      ts_builtin_sym_end,
    ACTIONS(329), 2,
      sym__S,
      sym_Comment,
    STATE(42), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1524] = 7,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    ACTIONS(333), 1,
      anon_sym_AMP,
    ACTIONS(336), 1,
      anon_sym_AMP_POUND,
    ACTIONS(339), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(342), 1,
      aux_sym_AttValue_token1,
    STATE(67), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(119), 2,
      sym_EntityRef,
      sym_CharRef,
  [1548] = 2,
    ACTIONS(345), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(347), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1562] = 6,
    ACTIONS(349), 1,
      anon_sym_PIPE,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(357), 1,
      sym__S,
    STATE(138), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(353), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [1583] = 8,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(359), 1,
      sym_Name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_POUNDPCDATA,
    ACTIONS(365), 1,
      sym__S,
    STATE(69), 1,
      sym_PEReference,
    STATE(77), 1,
      sym__choice,
    STATE(120), 1,
      sym__cp,
  [1608] = 1,
    ACTIONS(367), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [1619] = 1,
    ACTIONS(369), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [1630] = 6,
    ACTIONS(349), 1,
      anon_sym_PIPE,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    ACTIONS(373), 1,
      sym__S,
    STATE(153), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(353), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [1651] = 1,
    ACTIONS(375), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [1662] = 6,
    ACTIONS(379), 1,
      anon_sym_POUNDFIXED,
    ACTIONS(381), 1,
      anon_sym_DQUOTE,
    ACTIONS(383), 1,
      anon_sym_SQUOTE,
    STATE(334), 1,
      sym_AttValue,
    STATE(336), 1,
      sym_DefaultDecl,
    ACTIONS(377), 2,
      anon_sym_POUNDREQUIRED,
      anon_sym_POUNDIMPLIED,
  [1682] = 6,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(359), 1,
      sym_Name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      sym__S,
    STATE(146), 1,
      sym__cp,
    STATE(77), 2,
      sym__choice,
      sym_PEReference,
  [1702] = 2,
    ACTIONS(353), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
    ACTIONS(355), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1714] = 7,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(359), 1,
      sym_Name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      anon_sym_POUNDPCDATA,
    STATE(73), 1,
      sym_PEReference,
    STATE(77), 1,
      sym__choice,
    STATE(124), 1,
      sym__cp,
  [1736] = 6,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(359), 1,
      sym_Name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      sym__S,
    STATE(120), 1,
      sym__cp,
    STATE(77), 2,
      sym__choice,
      sym_PEReference,
  [1756] = 2,
    ACTIONS(305), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(307), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1768] = 6,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(359), 1,
      sym_Name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      sym__S,
    STATE(129), 1,
      sym__cp,
    STATE(77), 2,
      sym__choice,
      sym_PEReference,
  [1788] = 2,
    ACTIONS(263), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(265), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1800] = 2,
    ACTIONS(395), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(393), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1811] = 2,
    ACTIONS(287), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(289), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1822] = 6,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(397), 1,
      sym_Name,
    ACTIONS(399), 1,
      anon_sym_PIPE,
    ACTIONS(401), 1,
      sym__S,
    STATE(91), 1,
      aux_sym_NotationType_repeat1,
    STATE(291), 1,
      sym_PEReference,
  [1841] = 2,
    ACTIONS(405), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(403), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1852] = 6,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(399), 1,
      anon_sym_PIPE,
    ACTIONS(401), 1,
      sym__S,
    ACTIONS(407), 1,
      sym_Name,
    STATE(94), 1,
      aux_sym_NotationType_repeat1,
    STATE(297), 1,
      sym_PEReference,
  [1871] = 2,
    ACTIONS(229), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(231), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1882] = 2,
    ACTIONS(291), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(293), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1893] = 5,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(359), 1,
      sym_Name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    STATE(124), 1,
      sym__cp,
    STATE(77), 2,
      sym__choice,
      sym_PEReference,
  [1910] = 6,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(399), 1,
      anon_sym_PIPE,
    ACTIONS(401), 1,
      sym__S,
    ACTIONS(409), 1,
      sym_Name,
    STATE(121), 1,
      aux_sym_NotationType_repeat1,
    STATE(270), 1,
      sym_PEReference,
  [1929] = 2,
    ACTIONS(413), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(411), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1940] = 5,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(359), 1,
      sym_Name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    STATE(133), 1,
      sym__cp,
    STATE(77), 2,
      sym__choice,
      sym_PEReference,
  [1957] = 6,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(397), 1,
      sym_Name,
    ACTIONS(399), 1,
      anon_sym_PIPE,
    ACTIONS(401), 1,
      sym__S,
    STATE(121), 1,
      aux_sym_NotationType_repeat1,
    STATE(291), 1,
      sym_PEReference,
  [1976] = 2,
    ACTIONS(291), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(293), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1987] = 2,
    ACTIONS(417), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(415), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1998] = 5,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      anon_sym_SQUOTE,
    ACTIONS(423), 1,
      anon_sym_SYSTEM,
    ACTIONS(425), 1,
      anon_sym_PUBLIC,
    STATE(289), 2,
      sym_EntityValue,
      sym_ExternalID,
  [2015] = 2,
    ACTIONS(429), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(427), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2026] = 2,
    ACTIONS(287), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(289), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [2037] = 5,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(359), 1,
      sym_Name,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    STATE(146), 1,
      sym__cp,
    STATE(77), 2,
      sym__choice,
      sym_PEReference,
  [2054] = 2,
    ACTIONS(433), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(431), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2065] = 2,
    ACTIONS(67), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(65), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [2076] = 2,
    ACTIONS(67), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(65), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [2087] = 2,
    ACTIONS(229), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(231), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [2098] = 5,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(423), 1,
      anon_sym_SYSTEM,
    ACTIONS(435), 1,
      anon_sym_PUBLIC,
    STATE(356), 1,
      sym_PEReference,
    STATE(299), 2,
      sym_ExternalID,
      sym_PublicID,
  [2115] = 6,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      anon_sym_SQUOTE,
    ACTIONS(423), 1,
      anon_sym_SYSTEM,
    ACTIONS(425), 1,
      anon_sym_PUBLIC,
    STATE(239), 1,
      sym_ExternalID,
    STATE(246), 1,
      sym_EntityValue,
  [2134] = 5,
    ACTIONS(423), 1,
      anon_sym_SYSTEM,
    ACTIONS(425), 1,
      anon_sym_PUBLIC,
    ACTIONS(437), 1,
      anon_sym_LBRACK,
    ACTIONS(439), 1,
      anon_sym_GT,
    STATE(232), 1,
      sym_ExternalID,
  [2150] = 2,
    ACTIONS(441), 1,
      anon_sym_LT_BANG,
    ACTIONS(83), 4,
      anon_sym_RBRACK,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2160] = 2,
    ACTIONS(443), 2,
      anon_sym_GT,
      sym__S,
    ACTIONS(445), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [2170] = 2,
    ACTIONS(287), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(289), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [2180] = 2,
    ACTIONS(291), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(293), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [2190] = 2,
    ACTIONS(229), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(231), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [2200] = 2,
    ACTIONS(449), 1,
      anon_sym_LT_BANG,
    ACTIONS(447), 4,
      anon_sym_RBRACK,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2210] = 4,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    ACTIONS(455), 1,
      sym__S,
    STATE(117), 1,
      aux_sym__choice_repeat1,
    ACTIONS(451), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2224] = 2,
    ACTIONS(287), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(289), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2234] = 2,
    ACTIONS(291), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(293), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2244] = 4,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    ACTIONS(462), 1,
      sym__S,
    STATE(117), 1,
      aux_sym__choice_repeat1,
    ACTIONS(457), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2258] = 2,
    ACTIONS(465), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(467), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2268] = 2,
    ACTIONS(229), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(231), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2278] = 4,
    ACTIONS(455), 1,
      sym__S,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym__choice_repeat1,
    ACTIONS(451), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2292] = 4,
    ACTIONS(473), 1,
      anon_sym_PIPE,
    ACTIONS(476), 1,
      sym__S,
    STATE(121), 1,
      aux_sym_NotationType_repeat1,
    ACTIONS(471), 2,
      anon_sym_PERCENT,
      sym_Name,
  [2306] = 2,
    ACTIONS(479), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(481), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2316] = 2,
    ACTIONS(483), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(485), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2326] = 4,
    ACTIONS(455), 1,
      sym__S,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym__choice_repeat1,
    ACTIONS(451), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2340] = 4,
    ACTIONS(455), 1,
      sym__S,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      aux_sym__choice_repeat1,
    ACTIONS(451), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2354] = 2,
    ACTIONS(489), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(491), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2364] = 1,
    ACTIONS(471), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [2371] = 4,
    ACTIONS(493), 1,
      anon_sym_GT,
    ACTIONS(495), 1,
      sym__S,
    ACTIONS(497), 1,
      anon_sym_SLASH_GT,
    STATE(135), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2384] = 1,
    ACTIONS(460), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2391] = 4,
    ACTIONS(499), 1,
      sym_Name,
    ACTIONS(501), 1,
      anon_sym_GT,
    ACTIONS(503), 1,
      anon_sym_SLASH_GT,
    STATE(215), 1,
      sym_Attribute,
  [2404] = 1,
    ACTIONS(505), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2411] = 2,
    ACTIONS(509), 1,
      anon_sym_LT,
    ACTIONS(507), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2420] = 1,
    ACTIONS(511), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2427] = 1,
    ACTIONS(271), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2434] = 3,
    ACTIONS(515), 1,
      sym__S,
    STATE(135), 1,
      aux_sym_EmptyElemTag_repeat1,
    ACTIONS(513), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
  [2445] = 4,
    ACTIONS(499), 1,
      sym_Name,
    ACTIONS(501), 1,
      anon_sym_GT,
    ACTIONS(518), 1,
      anon_sym_SLASH_GT,
    STATE(215), 1,
      sym_Attribute,
  [2458] = 4,
    ACTIONS(349), 1,
      anon_sym_PIPE,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    ACTIONS(373), 1,
      sym__S,
    STATE(153), 1,
      aux_sym_Mixed_repeat1,
  [2471] = 4,
    ACTIONS(349), 1,
      anon_sym_PIPE,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
    ACTIONS(522), 1,
      sym__S,
    STATE(152), 1,
      aux_sym_Mixed_repeat1,
  [2484] = 4,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(524), 1,
      sym_Name,
    ACTIONS(526), 1,
      sym__S,
    STATE(234), 1,
      sym_PEReference,
  [2497] = 4,
    ACTIONS(528), 1,
      anon_sym_PIPE,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
    ACTIONS(532), 1,
      sym__S,
    STATE(144), 1,
      aux_sym_Enumeration_repeat1,
  [2510] = 2,
    ACTIONS(536), 1,
      anon_sym_LT,
    ACTIONS(534), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2519] = 3,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(538), 1,
      sym__S,
    STATE(113), 2,
      sym__DeclSep,
      sym_PEReference,
  [2530] = 1,
    ACTIONS(281), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2537] = 4,
    ACTIONS(540), 1,
      anon_sym_PIPE,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
    ACTIONS(545), 1,
      sym__S,
    STATE(144), 1,
      aux_sym_Enumeration_repeat1,
  [2550] = 2,
    ACTIONS(550), 1,
      sym__S,
    ACTIONS(548), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [2559] = 1,
    ACTIONS(553), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2566] = 2,
    ACTIONS(555), 1,
      sym__S,
    ACTIONS(471), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [2575] = 1,
    ACTIONS(257), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2582] = 4,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(558), 1,
      sym_Name,
    ACTIONS(560), 1,
      sym__S,
    STATE(227), 1,
      sym_PEReference,
  [2595] = 2,
    ACTIONS(564), 1,
      anon_sym_LT,
    ACTIONS(562), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2604] = 1,
    ACTIONS(566), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [2611] = 4,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
    ACTIONS(573), 1,
      sym__S,
    STATE(152), 1,
      aux_sym_Mixed_repeat1,
  [2624] = 4,
    ACTIONS(349), 1,
      anon_sym_PIPE,
    ACTIONS(522), 1,
      sym__S,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
    STATE(152), 1,
      aux_sym_Mixed_repeat1,
  [2637] = 1,
    ACTIONS(299), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2644] = 4,
    ACTIONS(349), 1,
      anon_sym_PIPE,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
    ACTIONS(357), 1,
      sym__S,
    STATE(138), 1,
      aux_sym_Mixed_repeat1,
  [2657] = 3,
    ACTIONS(578), 1,
      anon_sym_GT,
    ACTIONS(580), 1,
      sym__S,
    STATE(156), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2668] = 2,
    ACTIONS(585), 1,
      anon_sym_LT,
    ACTIONS(583), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2677] = 1,
    ACTIONS(303), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2684] = 2,
    ACTIONS(589), 1,
      anon_sym_LT,
    ACTIONS(587), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2693] = 4,
    ACTIONS(493), 1,
      anon_sym_GT,
    ACTIONS(497), 1,
      anon_sym_SLASH_GT,
    ACTIONS(499), 1,
      sym_Name,
    STATE(215), 1,
      sym_Attribute,
  [2706] = 4,
    ACTIONS(528), 1,
      anon_sym_PIPE,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
    ACTIONS(593), 1,
      sym__S,
    STATE(140), 1,
      aux_sym_Enumeration_repeat1,
  [2719] = 4,
    ACTIONS(528), 1,
      anon_sym_PIPE,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
    ACTIONS(597), 1,
      sym__S,
    STATE(167), 1,
      aux_sym_Enumeration_repeat1,
  [2732] = 4,
    ACTIONS(599), 1,
      sym__S,
    ACTIONS(601), 1,
      anon_sym_QMARK_GT,
    STATE(202), 1,
      sym__EncodingDecl,
    STATE(279), 1,
      sym__SDDecl,
  [2745] = 1,
    ACTIONS(311), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2752] = 3,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(603), 1,
      sym__S,
    STATE(108), 2,
      sym__DeclSep,
      sym_PEReference,
  [2763] = 2,
    ACTIONS(607), 1,
      anon_sym_LT,
    ACTIONS(605), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2772] = 4,
    ACTIONS(528), 1,
      anon_sym_PIPE,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
    ACTIONS(593), 1,
      sym__S,
    STATE(144), 1,
      aux_sym_Enumeration_repeat1,
  [2785] = 4,
    ACTIONS(609), 1,
      anon_sym_ELEMENT,
    ACTIONS(611), 1,
      anon_sym_ATTLIST,
    ACTIONS(613), 1,
      anon_sym_NOTATION,
    ACTIONS(615), 1,
      anon_sym_ENTITY,
  [2798] = 1,
    ACTIONS(247), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2805] = 4,
    ACTIONS(617), 1,
      anon_sym_GT,
    ACTIONS(619), 1,
      sym__S,
    ACTIONS(621), 1,
      anon_sym_SLASH_GT,
    STATE(128), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2818] = 3,
    ACTIONS(623), 1,
      anon_sym_GT,
    ACTIONS(625), 1,
      sym__S,
    STATE(177), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2829] = 4,
    ACTIONS(627), 1,
      anon_sym_LT,
    STATE(3), 1,
      sym_STag,
    STATE(41), 1,
      sym_element,
    STATE(175), 1,
      sym_EmptyElemTag,
  [2842] = 2,
    ACTIONS(631), 1,
      anon_sym_LT,
    ACTIONS(629), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2851] = 4,
    ACTIONS(617), 1,
      anon_sym_GT,
    ACTIONS(633), 1,
      sym__S,
    ACTIONS(635), 1,
      anon_sym_SLASH_GT,
    STATE(181), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2864] = 1,
    ACTIONS(325), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2871] = 4,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(637), 1,
      sym_Name,
    ACTIONS(639), 1,
      anon_sym_GT,
    STATE(341), 1,
      sym_PEReference,
  [2884] = 3,
    ACTIONS(639), 1,
      anon_sym_GT,
    ACTIONS(641), 1,
      sym__S,
    STATE(156), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2895] = 4,
    ACTIONS(627), 1,
      anon_sym_LT,
    STATE(3), 1,
      sym_STag,
    STATE(66), 1,
      sym_element,
    STATE(175), 1,
      sym_EmptyElemTag,
  [2908] = 4,
    ACTIONS(493), 1,
      anon_sym_GT,
    ACTIONS(499), 1,
      sym_Name,
    ACTIONS(643), 1,
      anon_sym_SLASH_GT,
    STATE(215), 1,
      sym_Attribute,
  [2921] = 2,
    ACTIONS(647), 1,
      anon_sym_LT,
    ACTIONS(645), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2930] = 4,
    ACTIONS(493), 1,
      anon_sym_GT,
    ACTIONS(643), 1,
      anon_sym_SLASH_GT,
    ACTIONS(649), 1,
      sym__S,
    STATE(135), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2943] = 4,
    ACTIONS(651), 1,
      sym_Name,
    ACTIONS(653), 1,
      anon_sym_xml,
    ACTIONS(655), 1,
      anon_sym_xml_DASHstylesheet,
    ACTIONS(657), 1,
      anon_sym_xml_DASHmodel,
  [2956] = 4,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(659), 1,
      sym_Name,
    ACTIONS(661), 1,
      sym__S,
    STATE(87), 1,
      sym_PEReference,
  [2969] = 4,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(637), 1,
      sym_Name,
    ACTIONS(663), 1,
      anon_sym_GT,
    STATE(341), 1,
      sym_PEReference,
  [2982] = 1,
    ACTIONS(665), 3,
      anon_sym_LBRACK,
      anon_sym_GT,
      sym__S,
  [2988] = 2,
    ACTIONS(669), 1,
      anon_sym_STAR,
    ACTIONS(667), 2,
      anon_sym_GT,
      sym__S,
  [2996] = 3,
    ACTIONS(671), 1,
      sym__S,
    ACTIONS(673), 1,
      anon_sym_QMARK_GT,
    STATE(194), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3006] = 3,
    ACTIONS(675), 1,
      sym__S,
    ACTIONS(677), 1,
      anon_sym_QMARK_GT,
    STATE(196), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3016] = 3,
    ACTIONS(679), 1,
      sym_Name,
    ACTIONS(681), 1,
      anon_sym_PERCENT,
    STATE(337), 1,
      sym_PEReference,
  [3026] = 1,
    ACTIONS(683), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3032] = 1,
    ACTIONS(685), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3038] = 3,
    ACTIONS(651), 1,
      sym_Name,
    ACTIONS(655), 1,
      anon_sym_xml_DASHstylesheet,
    ACTIONS(657), 1,
      anon_sym_xml_DASHmodel,
  [3048] = 3,
    ACTIONS(687), 1,
      sym_Name,
    ACTIONS(689), 1,
      anon_sym_QMARK_GT,
    STATE(283), 1,
      sym_PseudoAtt,
  [3058] = 3,
    ACTIONS(689), 1,
      anon_sym_QMARK_GT,
    ACTIONS(691), 1,
      sym__S,
    STATE(207), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3068] = 3,
    ACTIONS(687), 1,
      sym_Name,
    ACTIONS(693), 1,
      anon_sym_QMARK_GT,
    STATE(283), 1,
      sym_PseudoAtt,
  [3078] = 3,
    ACTIONS(693), 1,
      anon_sym_QMARK_GT,
    ACTIONS(695), 1,
      sym__S,
    STATE(207), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3088] = 3,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(697), 1,
      sym_Name,
    STATE(403), 1,
      sym_PEReference,
  [3098] = 3,
    ACTIONS(699), 1,
      anon_sym_LBRACK,
    ACTIONS(701), 1,
      anon_sym_GT,
    ACTIONS(703), 1,
      sym__S,
  [3108] = 3,
    ACTIONS(705), 1,
      sym__S,
    ACTIONS(707), 1,
      anon_sym_EQ,
    STATE(332), 1,
      sym__Eq,
  [3118] = 1,
    ACTIONS(709), 3,
      anon_sym_LBRACK,
      anon_sym_GT,
      sym__S,
  [3124] = 3,
    ACTIONS(711), 1,
      anon_sym_QMARK_GT,
    ACTIONS(713), 1,
      anon_sym_encoding,
    ACTIONS(715), 1,
      anon_sym_standalone,
  [3134] = 3,
    ACTIONS(711), 1,
      anon_sym_QMARK_GT,
    ACTIONS(717), 1,
      sym__S,
    STATE(325), 1,
      sym__SDDecl,
  [3144] = 3,
    ACTIONS(705), 1,
      sym__S,
    ACTIONS(707), 1,
      anon_sym_EQ,
    STATE(229), 1,
      sym__Eq,
  [3154] = 1,
    ACTIONS(719), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3160] = 3,
    ACTIONS(687), 1,
      sym_Name,
    ACTIONS(721), 1,
      anon_sym_QMARK_GT,
    STATE(283), 1,
      sym_PseudoAtt,
  [3170] = 3,
    ACTIONS(723), 1,
      anon_sym_DQUOTE,
    ACTIONS(725), 1,
      anon_sym_SQUOTE,
    STATE(185), 1,
      sym_SystemLiteral,
  [3180] = 3,
    ACTIONS(727), 1,
      sym__S,
    ACTIONS(730), 1,
      anon_sym_QMARK_GT,
    STATE(207), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3190] = 3,
    ACTIONS(687), 1,
      sym_Name,
    ACTIONS(732), 1,
      anon_sym_QMARK_GT,
    STATE(283), 1,
      sym_PseudoAtt,
  [3200] = 1,
    ACTIONS(734), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3206] = 1,
    ACTIONS(736), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3212] = 3,
    ACTIONS(381), 1,
      anon_sym_DQUOTE,
    ACTIONS(383), 1,
      anon_sym_SQUOTE,
    STATE(295), 1,
      sym_AttValue,
  [3222] = 3,
    ACTIONS(705), 1,
      sym__S,
    ACTIONS(707), 1,
      anon_sym_EQ,
    STATE(230), 1,
      sym__Eq,
  [3232] = 3,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(738), 1,
      sym_Name,
    STATE(85), 1,
      sym_PEReference,
  [3242] = 1,
    ACTIONS(740), 3,
      anon_sym_LBRACK,
      anon_sym_GT,
      sym__S,
  [3248] = 1,
    ACTIONS(513), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3254] = 1,
    ACTIONS(543), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3260] = 2,
    ACTIONS(744), 1,
      sym__S,
    ACTIONS(742), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [3268] = 1,
    ACTIONS(742), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3274] = 1,
    ACTIONS(747), 3,
      anon_sym_LBRACK,
      anon_sym_GT,
      sym__S,
  [3280] = 2,
    ACTIONS(751), 1,
      sym__S,
    ACTIONS(749), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3288] = 3,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(753), 1,
      sym_Name,
    STATE(171), 1,
      sym_PEReference,
  [3298] = 3,
    ACTIONS(705), 1,
      sym__S,
    ACTIONS(707), 1,
      anon_sym_EQ,
    STATE(277), 1,
      sym__Eq,
  [3308] = 3,
    ACTIONS(705), 1,
      sym__S,
    ACTIONS(707), 1,
      anon_sym_EQ,
    STATE(276), 1,
      sym__Eq,
  [3318] = 3,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(755), 1,
      sym_Name,
    STATE(217), 1,
      sym_PEReference,
  [3328] = 3,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(757), 1,
      sym_Name,
    STATE(339), 1,
      sym_PEReference,
  [3338] = 1,
    ACTIONS(759), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3344] = 2,
    ACTIONS(761), 1,
      sym__S,
    ACTIONS(759), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [3352] = 3,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(764), 1,
      sym_Name,
    STATE(333), 1,
      sym_PEReference,
  [3362] = 3,
    ACTIONS(766), 1,
      anon_sym_DQUOTE,
    ACTIONS(768), 1,
      anon_sym_SQUOTE,
    STATE(274), 1,
      sym_PseudoAttValue,
  [3372] = 3,
    ACTIONS(381), 1,
      anon_sym_DQUOTE,
    ACTIONS(383), 1,
      anon_sym_SQUOTE,
    STATE(237), 1,
      sym_AttValue,
  [3382] = 2,
    ACTIONS(772), 1,
      anon_sym_STAR,
    ACTIONS(770), 2,
      anon_sym_GT,
      sym__S,
  [3390] = 3,
    ACTIONS(774), 1,
      anon_sym_LBRACK,
    ACTIONS(776), 1,
      anon_sym_GT,
    ACTIONS(778), 1,
      sym__S,
  [3400] = 2,
    ACTIONS(782), 1,
      sym__S,
    ACTIONS(780), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3408] = 2,
    ACTIONS(784), 1,
      sym__S,
    ACTIONS(571), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [3416] = 3,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(558), 1,
      sym_Name,
    STATE(227), 1,
      sym_PEReference,
  [3426] = 3,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    STATE(340), 1,
      sym_PubidLiteral,
  [3436] = 1,
    ACTIONS(791), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3442] = 3,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(637), 1,
      sym_Name,
    STATE(341), 1,
      sym_PEReference,
  [3452] = 3,
    ACTIONS(793), 1,
      anon_sym_GT,
    ACTIONS(795), 1,
      sym__S,
    STATE(267), 1,
      sym_NDataDecl,
  [3462] = 3,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    STATE(286), 1,
      sym_PubidLiteral,
  [3472] = 3,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    ACTIONS(789), 1,
      anon_sym_SQUOTE,
    STATE(287), 1,
      sym_PubidLiteral,
  [3482] = 3,
    ACTIONS(723), 1,
      anon_sym_DQUOTE,
    ACTIONS(725), 1,
      anon_sym_SQUOTE,
    STATE(214), 1,
      sym_SystemLiteral,
  [3492] = 1,
    ACTIONS(797), 2,
      anon_sym_GT,
      sym__S,
  [3497] = 1,
    ACTIONS(799), 2,
      anon_sym_GT,
      sym__S,
  [3502] = 1,
    ACTIONS(801), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3507] = 2,
    ACTIONS(793), 1,
      anon_sym_GT,
    ACTIONS(803), 1,
      sym__S,
  [3514] = 1,
    ACTIONS(805), 2,
      anon_sym_yes,
      anon_sym_no,
  [3519] = 2,
    ACTIONS(807), 1,
      anon_sym_GT,
    ACTIONS(809), 1,
      sym__S,
  [3526] = 1,
    ACTIONS(811), 2,
      anon_sym_yes,
      anon_sym_no,
  [3531] = 2,
    ACTIONS(25), 1,
      anon_sym_LT_SLASH,
    STATE(57), 1,
      sym_ETag,
  [3538] = 2,
    ACTIONS(813), 1,
      sym__S,
    ACTIONS(815), 1,
      anon_sym_QMARK_GT,
  [3545] = 2,
    ACTIONS(817), 1,
      sym__S,
    ACTIONS(819), 1,
      anon_sym_QMARK_GT,
  [3552] = 2,
    ACTIONS(821), 1,
      sym__S,
    STATE(163), 1,
      sym__VersionInfo,
  [3559] = 1,
    ACTIONS(823), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3564] = 1,
    ACTIONS(825), 2,
      anon_sym_PERCENT,
      sym__S,
  [3569] = 1,
    ACTIONS(827), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3574] = 1,
    ACTIONS(829), 2,
      anon_sym_GT,
      sym__S,
  [3579] = 2,
    ACTIONS(831), 1,
      anon_sym_LBRACK,
    ACTIONS(833), 1,
      anon_sym_GT,
  [3586] = 1,
    ACTIONS(835), 2,
      anon_sym_PERCENT,
      sym__S,
  [3591] = 1,
    ACTIONS(837), 2,
      anon_sym_PERCENT,
      sym__S,
  [3596] = 2,
    ACTIONS(31), 1,
      anon_sym_LT_SLASH,
    STATE(154), 1,
      sym_ETag,
  [3603] = 1,
    ACTIONS(839), 2,
      anon_sym_GT,
      sym__S,
  [3608] = 2,
    ACTIONS(833), 1,
      anon_sym_GT,
    ACTIONS(841), 1,
      sym__S,
  [3615] = 1,
    ACTIONS(843), 2,
      anon_sym_PERCENT,
      sym__S,
  [3620] = 2,
    ACTIONS(845), 1,
      sym_Name,
    ACTIONS(847), 1,
      sym__S,
  [3627] = 2,
    ACTIONS(849), 1,
      anon_sym_GT,
    ACTIONS(851), 1,
      anon_sym_NDATA,
  [3634] = 2,
    ACTIONS(849), 1,
      anon_sym_GT,
    ACTIONS(853), 1,
      sym__S,
  [3641] = 2,
    ACTIONS(855), 1,
      anon_sym_GT,
    ACTIONS(857), 1,
      sym__S,
  [3648] = 1,
    ACTIONS(859), 2,
      anon_sym_GT,
      sym__S,
  [3653] = 2,
    ACTIONS(861), 1,
      anon_sym_RPAREN,
    ACTIONS(863), 1,
      sym__S,
  [3660] = 2,
    ACTIONS(669), 1,
      anon_sym_RPAREN,
    ACTIONS(865), 1,
      anon_sym_PIPE,
  [3667] = 1,
    ACTIONS(867), 2,
      anon_sym_GT,
      sym__S,
  [3672] = 1,
    ACTIONS(869), 2,
      anon_sym_GT,
      sym__S,
  [3677] = 1,
    ACTIONS(871), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3682] = 1,
    ACTIONS(873), 2,
      anon_sym_GT,
      sym__S,
  [3687] = 2,
    ACTIONS(875), 1,
      anon_sym_DQUOTE,
    ACTIONS(877), 1,
      anon_sym_SQUOTE,
  [3694] = 2,
    ACTIONS(879), 1,
      anon_sym_DQUOTE,
    ACTIONS(881), 1,
      anon_sym_SQUOTE,
  [3701] = 1,
    ACTIONS(883), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [3706] = 2,
    ACTIONS(711), 1,
      anon_sym_QMARK_GT,
    ACTIONS(885), 1,
      sym__S,
  [3713] = 1,
    ACTIONS(887), 2,
      anon_sym_PERCENT,
      sym__S,
  [3718] = 2,
    ACTIONS(889), 1,
      sym__S,
    ACTIONS(891), 1,
      sym_Nmtoken,
  [3725] = 1,
    ACTIONS(893), 2,
      anon_sym_GT,
      sym__S,
  [3730] = 1,
    ACTIONS(730), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3735] = 2,
    ACTIONS(895), 1,
      anon_sym_GT,
    ACTIONS(897), 1,
      sym__S,
  [3742] = 1,
    ACTIONS(899), 2,
      anon_sym_GT,
      sym__S,
  [3747] = 2,
    ACTIONS(901), 1,
      anon_sym_GT,
    ACTIONS(903), 1,
      sym__S,
  [3754] = 1,
    ACTIONS(901), 2,
      anon_sym_GT,
      sym__S,
  [3759] = 1,
    ACTIONS(905), 2,
      anon_sym_PERCENT,
      sym__S,
  [3764] = 2,
    ACTIONS(907), 1,
      anon_sym_GT,
    ACTIONS(909), 1,
      sym__S,
  [3771] = 1,
    ACTIONS(911), 2,
      anon_sym_GT,
      sym__S,
  [3776] = 2,
    ACTIONS(913), 1,
      anon_sym_RPAREN,
    ACTIONS(915), 1,
      sym__S,
  [3783] = 1,
    ACTIONS(780), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3788] = 1,
    ACTIONS(917), 2,
      anon_sym_PERCENT,
      sym__S,
  [3793] = 1,
    ACTIONS(919), 2,
      anon_sym_GT,
      sym__S,
  [3798] = 1,
    ACTIONS(921), 2,
      anon_sym_GT,
      sym__S,
  [3803] = 2,
    ACTIONS(923), 1,
      anon_sym_GT,
    ACTIONS(925), 1,
      sym__S,
  [3810] = 2,
    ACTIONS(927), 1,
      anon_sym_RPAREN,
    ACTIONS(929), 1,
      sym__S,
  [3817] = 1,
    ACTIONS(770), 2,
      anon_sym_GT,
      sym__S,
  [3822] = 2,
    ACTIONS(931), 1,
      anon_sym_GT,
    ACTIONS(933), 1,
      sym__S,
  [3829] = 2,
    ACTIONS(935), 1,
      anon_sym_GT,
    ACTIONS(937), 1,
      sym__S,
  [3836] = 1,
    ACTIONS(939), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3841] = 1,
    ACTIONS(941), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3846] = 2,
    ACTIONS(943), 1,
      anon_sym_PIPE,
    ACTIONS(945), 1,
      anon_sym_RPAREN,
  [3853] = 2,
    ACTIONS(772), 1,
      anon_sym_RPAREN,
    ACTIONS(865), 1,
      anon_sym_PIPE,
  [3860] = 1,
    ACTIONS(947), 2,
      anon_sym_GT,
      sym__S,
  [3865] = 2,
    ACTIONS(949), 1,
      anon_sym_DQUOTE,
    ACTIONS(951), 1,
      aux_sym_SystemLiteral_token1,
  [3872] = 1,
    ACTIONS(953), 2,
      anon_sym_PERCENT,
      sym__S,
  [3877] = 1,
    ACTIONS(955), 2,
      anon_sym_PERCENT,
      sym__S,
  [3882] = 2,
    ACTIONS(499), 1,
      sym_Name,
    STATE(215), 1,
      sym_Attribute,
  [3889] = 1,
    ACTIONS(957), 2,
      anon_sym_PERCENT,
      sym__S,
  [3894] = 2,
    ACTIONS(687), 1,
      sym_Name,
    STATE(283), 1,
      sym_PseudoAtt,
  [3901] = 2,
    ACTIONS(949), 1,
      anon_sym_SQUOTE,
    ACTIONS(959), 1,
      aux_sym_SystemLiteral_token2,
  [3908] = 2,
    ACTIONS(961), 1,
      anon_sym_DQUOTE,
    ACTIONS(963), 1,
      aux_sym_PubidLiteral_token1,
  [3915] = 2,
    ACTIONS(965), 1,
      sym__S,
    ACTIONS(967), 1,
      sym_Nmtoken,
  [3922] = 2,
    ACTIONS(961), 1,
      anon_sym_SQUOTE,
    ACTIONS(969), 1,
      aux_sym_PubidLiteral_token2,
  [3929] = 1,
    ACTIONS(971), 2,
      anon_sym_PERCENT,
      sym__S,
  [3934] = 2,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
    ACTIONS(943), 1,
      anon_sym_PIPE,
  [3941] = 1,
    ACTIONS(973), 2,
      anon_sym_GT,
      sym__S,
  [3946] = 1,
    ACTIONS(975), 2,
      anon_sym_PERCENT,
      sym__S,
  [3951] = 1,
    ACTIONS(977), 2,
      anon_sym_PERCENT,
      sym__S,
  [3956] = 1,
    ACTIONS(979), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3961] = 2,
    ACTIONS(981), 1,
      anon_sym_GT,
    ACTIONS(983), 1,
      sym__S,
  [3968] = 1,
    ACTIONS(985), 2,
      anon_sym_GT,
      sym__S,
  [3973] = 1,
    ACTIONS(987), 2,
      anon_sym_GT,
      sym__S,
  [3978] = 2,
    ACTIONS(989), 1,
      sym__S,
    ACTIONS(991), 1,
      anon_sym_QMARK_GT,
  [3985] = 2,
    ACTIONS(715), 1,
      anon_sym_standalone,
    ACTIONS(991), 1,
      anon_sym_QMARK_GT,
  [3992] = 1,
    ACTIONS(993), 2,
      anon_sym_GT,
      sym__S,
  [3997] = 2,
    ACTIONS(995), 1,
      anon_sym_GT,
    ACTIONS(997), 1,
      sym__S,
  [4004] = 2,
    ACTIONS(999), 1,
      sym__S,
    ACTIONS(1001), 1,
      sym_Nmtoken,
  [4011] = 1,
    ACTIONS(1003), 2,
      anon_sym_GT,
      sym__S,
  [4016] = 2,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
    ACTIONS(943), 1,
      anon_sym_PIPE,
  [4023] = 2,
    ACTIONS(1005), 1,
      anon_sym_DQUOTE,
    ACTIONS(1007), 1,
      anon_sym_SQUOTE,
  [4030] = 1,
    ACTIONS(1009), 2,
      anon_sym_GT,
      sym__S,
  [4035] = 1,
    ACTIONS(1011), 2,
      anon_sym_GT,
      sym__S,
  [4040] = 1,
    ACTIONS(1013), 2,
      anon_sym_PERCENT,
      sym__S,
  [4045] = 1,
    ACTIONS(1015), 2,
      anon_sym_GT,
      sym__S,
  [4050] = 1,
    ACTIONS(1017), 1,
      sym__S,
  [4054] = 1,
    ACTIONS(1019), 1,
      anon_sym_DOCTYPE,
  [4058] = 1,
    ACTIONS(1021), 1,
      sym__S,
  [4062] = 1,
    ACTIONS(903), 1,
      sym__S,
  [4066] = 1,
    ACTIONS(1023), 1,
      sym__S,
  [4070] = 1,
    ACTIONS(1025), 1,
      anon_sym_EQ,
  [4074] = 1,
    ACTIONS(1027), 1,
      anon_sym_QMARK_GT,
  [4078] = 1,
    ACTIONS(1029), 1,
      anon_sym_GT,
  [4082] = 1,
    ACTIONS(1031), 1,
      anon_sym_GT,
  [4086] = 1,
    ACTIONS(967), 1,
      sym_Nmtoken,
  [4090] = 1,
    ACTIONS(991), 1,
      anon_sym_QMARK_GT,
  [4094] = 1,
    ACTIONS(1033), 1,
      anon_sym_LPAREN,
  [4098] = 1,
    ACTIONS(1035), 1,
      sym_Name,
  [4102] = 1,
    ACTIONS(1037), 1,
      anon_sym_DQUOTE,
  [4106] = 1,
    ACTIONS(1039), 1,
      sym_Nmtoken,
  [4110] = 1,
    ACTIONS(1037), 1,
      anon_sym_SQUOTE,
  [4114] = 1,
    ACTIONS(1041), 1,
      sym__S,
  [4118] = 1,
    ACTIONS(1043), 1,
      sym__S,
  [4122] = 1,
    ACTIONS(1045), 1,
      sym__S,
  [4126] = 1,
    ACTIONS(1047), 1,
      sym__S,
  [4130] = 1,
    ACTIONS(1049), 1,
      sym_Nmtoken,
  [4134] = 1,
    ACTIONS(943), 1,
      anon_sym_PIPE,
  [4138] = 1,
    ACTIONS(865), 1,
      anon_sym_PIPE,
  [4142] = 1,
    ACTIONS(772), 1,
      anon_sym_STAR,
  [4146] = 1,
    ACTIONS(1051), 1,
      anon_sym_PIPE,
  [4150] = 1,
    ACTIONS(1053), 1,
      sym__S,
  [4154] = 1,
    ACTIONS(1055), 1,
      anon_sym_SQUOTE,
  [4158] = 1,
    ACTIONS(1057), 1,
      anon_sym_GT,
  [4162] = 1,
    ACTIONS(1059), 1,
      sym__S,
  [4166] = 1,
    ACTIONS(1061), 1,
      anon_sym_SQUOTE,
  [4170] = 1,
    ACTIONS(849), 1,
      anon_sym_GT,
  [4174] = 1,
    ACTIONS(1063), 1,
      sym__S,
  [4178] = 1,
    ACTIONS(1061), 1,
      anon_sym_DQUOTE,
  [4182] = 1,
    ACTIONS(1065), 1,
      sym_VersionNum,
  [4186] = 1,
    ACTIONS(1067), 1,
      sym_VersionNum,
  [4190] = 1,
    ACTIONS(913), 1,
      anon_sym_RPAREN,
  [4194] = 1,
    ACTIONS(1069), 1,
      sym__S,
  [4198] = 1,
    ACTIONS(1071), 1,
      sym__S,
  [4202] = 1,
    ACTIONS(861), 1,
      anon_sym_RPAREN,
  [4206] = 1,
    ACTIONS(1073), 1,
      sym__S,
  [4210] = 1,
    ACTIONS(1075), 1,
      anon_sym_SQUOTE,
  [4214] = 1,
    ACTIONS(1055), 1,
      anon_sym_DQUOTE,
  [4218] = 1,
    ACTIONS(1077), 1,
      sym__S,
  [4222] = 1,
    ACTIONS(1079), 1,
      sym__S,
  [4226] = 1,
    ACTIONS(1075), 1,
      anon_sym_DQUOTE,
  [4230] = 1,
    ACTIONS(1081), 1,
      anon_sym_QMARK_GT,
  [4234] = 1,
    ACTIONS(923), 1,
      anon_sym_GT,
  [4238] = 1,
    ACTIONS(1083), 1,
      anon_sym_RBRACK_RBRACK_GT,
  [4242] = 1,
    ACTIONS(845), 1,
      sym_Name,
  [4246] = 1,
    ACTIONS(1085), 1,
      anon_sym_SEMI,
  [4250] = 1,
    ACTIONS(1087), 1,
      anon_sym_SEMI,
  [4254] = 1,
    ACTIONS(935), 1,
      anon_sym_GT,
  [4258] = 1,
    ACTIONS(1089), 1,
      anon_sym_RPAREN,
  [4262] = 1,
    ACTIONS(995), 1,
      anon_sym_GT,
  [4266] = 1,
    ACTIONS(1091), 1,
      anon_sym_STAR,
  [4270] = 1,
    ACTIONS(1093), 1,
      anon_sym_version,
  [4274] = 1,
    ACTIONS(1095), 1,
      aux_sym_PI_token1,
  [4278] = 1,
    ACTIONS(1097), 1,
      sym_Name,
  [4282] = 1,
    ACTIONS(1099), 1,
      anon_sym_GT,
  [4286] = 1,
    ACTIONS(1101), 1,
      sym_CData,
  [4290] = 1,
    ACTIONS(1103), 1,
      sym_Name,
  [4294] = 1,
    ACTIONS(1105), 1,
      sym_Name,
  [4298] = 1,
    ACTIONS(1107), 1,
      aux_sym_CharRef_token2,
  [4302] = 1,
    ACTIONS(1107), 1,
      aux_sym_CharRef_token1,
  [4306] = 1,
    ACTIONS(1109), 1,
      sym_Name,
  [4310] = 1,
    ACTIONS(1111), 1,
      anon_sym_SEMI,
  [4314] = 1,
    ACTIONS(1113), 1,
      sym__S,
  [4318] = 1,
    ACTIONS(1115), 1,
      anon_sym_GT,
  [4322] = 1,
    ACTIONS(1117), 1,
      anon_sym_DQUOTE,
  [4326] = 1,
    ACTIONS(1117), 1,
      anon_sym_SQUOTE,
  [4330] = 1,
    ACTIONS(1119), 1,
      sym_EncName,
  [4334] = 1,
    ACTIONS(1121), 1,
      sym_Name,
  [4338] = 1,
    ACTIONS(1123), 1,
      sym_EncName,
  [4342] = 1,
    ACTIONS(1125), 1,
      sym__S,
  [4346] = 1,
    ACTIONS(1127), 1,
      ts_builtin_sym_end,
  [4350] = 1,
    ACTIONS(1129), 1,
      anon_sym_SEMI,
  [4354] = 1,
    ACTIONS(1131), 1,
      anon_sym_SEMI,
  [4358] = 1,
    ACTIONS(1133), 1,
      anon_sym_GT,
  [4362] = 1,
    ACTIONS(1135), 1,
      anon_sym_QMARK_GT,
  [4366] = 1,
    ACTIONS(1137), 1,
      sym_Name,
  [4370] = 1,
    ACTIONS(1139), 1,
      anon_sym_GT,
  [4374] = 1,
    ACTIONS(1141), 1,
      anon_sym_SEMI,
  [4378] = 1,
    ACTIONS(1143), 1,
      anon_sym_SEMI,
  [4382] = 1,
    ACTIONS(1145), 1,
      anon_sym_SEMI,
  [4386] = 1,
    ACTIONS(1147), 1,
      anon_sym_SEMI,
  [4390] = 1,
    ACTIONS(1149), 1,
      anon_sym_SEMI,
  [4394] = 1,
    ACTIONS(1151), 1,
      anon_sym_SEMI,
  [4398] = 1,
    ACTIONS(1153), 1,
      anon_sym_SEMI,
  [4402] = 1,
    ACTIONS(1155), 1,
      anon_sym_SEMI,
  [4406] = 1,
    ACTIONS(1157), 1,
      sym_Name,
  [4410] = 1,
    ACTIONS(1159), 1,
      sym_Name,
  [4414] = 1,
    ACTIONS(1161), 1,
      aux_sym_CharRef_token1,
  [4418] = 1,
    ACTIONS(1161), 1,
      aux_sym_CharRef_token2,
  [4422] = 1,
    ACTIONS(1163), 1,
      sym_Name,
  [4426] = 1,
    ACTIONS(1165), 1,
      aux_sym_PI_token1,
  [4430] = 1,
    ACTIONS(1167), 1,
      sym_Name,
  [4434] = 1,
    ACTIONS(1169), 1,
      sym_Name,
  [4438] = 1,
    ACTIONS(1171), 1,
      aux_sym_CharRef_token1,
  [4442] = 1,
    ACTIONS(1171), 1,
      aux_sym_CharRef_token2,
  [4446] = 1,
    ACTIONS(1173), 1,
      sym_Name,
  [4450] = 1,
    ACTIONS(1175), 1,
      sym_Name,
  [4454] = 1,
    ACTIONS(1177), 1,
      aux_sym_CharRef_token1,
  [4458] = 1,
    ACTIONS(1177), 1,
      aux_sym_CharRef_token2,
  [4462] = 1,
    ACTIONS(1179), 1,
      sym_Name,
  [4466] = 1,
    ACTIONS(1181), 1,
      aux_sym_CharRef_token1,
  [4470] = 1,
    ACTIONS(1181), 1,
      aux_sym_CharRef_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 147,
  [SMALL_STATE(6)] = 192,
  [SMALL_STATE(7)] = 231,
  [SMALL_STATE(8)] = 250,
  [SMALL_STATE(9)] = 283,
  [SMALL_STATE(10)] = 316,
  [SMALL_STATE(11)] = 349,
  [SMALL_STATE(12)] = 382,
  [SMALL_STATE(13)] = 415,
  [SMALL_STATE(14)] = 445,
  [SMALL_STATE(15)] = 475,
  [SMALL_STATE(16)] = 505,
  [SMALL_STATE(17)] = 535,
  [SMALL_STATE(18)] = 563,
  [SMALL_STATE(19)] = 591,
  [SMALL_STATE(20)] = 619,
  [SMALL_STATE(21)] = 643,
  [SMALL_STATE(22)] = 667,
  [SMALL_STATE(23)] = 695,
  [SMALL_STATE(24)] = 719,
  [SMALL_STATE(25)] = 743,
  [SMALL_STATE(26)] = 771,
  [SMALL_STATE(27)] = 793,
  [SMALL_STATE(28)] = 821,
  [SMALL_STATE(29)] = 846,
  [SMALL_STATE(30)] = 860,
  [SMALL_STATE(31)] = 878,
  [SMALL_STATE(32)] = 896,
  [SMALL_STATE(33)] = 914,
  [SMALL_STATE(34)] = 936,
  [SMALL_STATE(35)] = 954,
  [SMALL_STATE(36)] = 978,
  [SMALL_STATE(37)] = 1002,
  [SMALL_STATE(38)] = 1016,
  [SMALL_STATE(39)] = 1040,
  [SMALL_STATE(40)] = 1058,
  [SMALL_STATE(41)] = 1072,
  [SMALL_STATE(42)] = 1090,
  [SMALL_STATE(43)] = 1108,
  [SMALL_STATE(44)] = 1122,
  [SMALL_STATE(45)] = 1136,
  [SMALL_STATE(46)] = 1150,
  [SMALL_STATE(47)] = 1174,
  [SMALL_STATE(48)] = 1188,
  [SMALL_STATE(49)] = 1206,
  [SMALL_STATE(50)] = 1230,
  [SMALL_STATE(51)] = 1244,
  [SMALL_STATE(52)] = 1258,
  [SMALL_STATE(53)] = 1282,
  [SMALL_STATE(54)] = 1296,
  [SMALL_STATE(55)] = 1310,
  [SMALL_STATE(56)] = 1328,
  [SMALL_STATE(57)] = 1346,
  [SMALL_STATE(58)] = 1360,
  [SMALL_STATE(59)] = 1374,
  [SMALL_STATE(60)] = 1388,
  [SMALL_STATE(61)] = 1402,
  [SMALL_STATE(62)] = 1426,
  [SMALL_STATE(63)] = 1450,
  [SMALL_STATE(64)] = 1474,
  [SMALL_STATE(65)] = 1492,
  [SMALL_STATE(66)] = 1506,
  [SMALL_STATE(67)] = 1524,
  [SMALL_STATE(68)] = 1548,
  [SMALL_STATE(69)] = 1562,
  [SMALL_STATE(70)] = 1583,
  [SMALL_STATE(71)] = 1608,
  [SMALL_STATE(72)] = 1619,
  [SMALL_STATE(73)] = 1630,
  [SMALL_STATE(74)] = 1651,
  [SMALL_STATE(75)] = 1662,
  [SMALL_STATE(76)] = 1682,
  [SMALL_STATE(77)] = 1702,
  [SMALL_STATE(78)] = 1714,
  [SMALL_STATE(79)] = 1736,
  [SMALL_STATE(80)] = 1756,
  [SMALL_STATE(81)] = 1768,
  [SMALL_STATE(82)] = 1788,
  [SMALL_STATE(83)] = 1800,
  [SMALL_STATE(84)] = 1811,
  [SMALL_STATE(85)] = 1822,
  [SMALL_STATE(86)] = 1841,
  [SMALL_STATE(87)] = 1852,
  [SMALL_STATE(88)] = 1871,
  [SMALL_STATE(89)] = 1882,
  [SMALL_STATE(90)] = 1893,
  [SMALL_STATE(91)] = 1910,
  [SMALL_STATE(92)] = 1929,
  [SMALL_STATE(93)] = 1940,
  [SMALL_STATE(94)] = 1957,
  [SMALL_STATE(95)] = 1976,
  [SMALL_STATE(96)] = 1987,
  [SMALL_STATE(97)] = 1998,
  [SMALL_STATE(98)] = 2015,
  [SMALL_STATE(99)] = 2026,
  [SMALL_STATE(100)] = 2037,
  [SMALL_STATE(101)] = 2054,
  [SMALL_STATE(102)] = 2065,
  [SMALL_STATE(103)] = 2076,
  [SMALL_STATE(104)] = 2087,
  [SMALL_STATE(105)] = 2098,
  [SMALL_STATE(106)] = 2115,
  [SMALL_STATE(107)] = 2134,
  [SMALL_STATE(108)] = 2150,
  [SMALL_STATE(109)] = 2160,
  [SMALL_STATE(110)] = 2170,
  [SMALL_STATE(111)] = 2180,
  [SMALL_STATE(112)] = 2190,
  [SMALL_STATE(113)] = 2200,
  [SMALL_STATE(114)] = 2210,
  [SMALL_STATE(115)] = 2224,
  [SMALL_STATE(116)] = 2234,
  [SMALL_STATE(117)] = 2244,
  [SMALL_STATE(118)] = 2258,
  [SMALL_STATE(119)] = 2268,
  [SMALL_STATE(120)] = 2278,
  [SMALL_STATE(121)] = 2292,
  [SMALL_STATE(122)] = 2306,
  [SMALL_STATE(123)] = 2316,
  [SMALL_STATE(124)] = 2326,
  [SMALL_STATE(125)] = 2340,
  [SMALL_STATE(126)] = 2354,
  [SMALL_STATE(127)] = 2364,
  [SMALL_STATE(128)] = 2371,
  [SMALL_STATE(129)] = 2384,
  [SMALL_STATE(130)] = 2391,
  [SMALL_STATE(131)] = 2404,
  [SMALL_STATE(132)] = 2411,
  [SMALL_STATE(133)] = 2420,
  [SMALL_STATE(134)] = 2427,
  [SMALL_STATE(135)] = 2434,
  [SMALL_STATE(136)] = 2445,
  [SMALL_STATE(137)] = 2458,
  [SMALL_STATE(138)] = 2471,
  [SMALL_STATE(139)] = 2484,
  [SMALL_STATE(140)] = 2497,
  [SMALL_STATE(141)] = 2510,
  [SMALL_STATE(142)] = 2519,
  [SMALL_STATE(143)] = 2530,
  [SMALL_STATE(144)] = 2537,
  [SMALL_STATE(145)] = 2550,
  [SMALL_STATE(146)] = 2559,
  [SMALL_STATE(147)] = 2566,
  [SMALL_STATE(148)] = 2575,
  [SMALL_STATE(149)] = 2582,
  [SMALL_STATE(150)] = 2595,
  [SMALL_STATE(151)] = 2604,
  [SMALL_STATE(152)] = 2611,
  [SMALL_STATE(153)] = 2624,
  [SMALL_STATE(154)] = 2637,
  [SMALL_STATE(155)] = 2644,
  [SMALL_STATE(156)] = 2657,
  [SMALL_STATE(157)] = 2668,
  [SMALL_STATE(158)] = 2677,
  [SMALL_STATE(159)] = 2684,
  [SMALL_STATE(160)] = 2693,
  [SMALL_STATE(161)] = 2706,
  [SMALL_STATE(162)] = 2719,
  [SMALL_STATE(163)] = 2732,
  [SMALL_STATE(164)] = 2745,
  [SMALL_STATE(165)] = 2752,
  [SMALL_STATE(166)] = 2763,
  [SMALL_STATE(167)] = 2772,
  [SMALL_STATE(168)] = 2785,
  [SMALL_STATE(169)] = 2798,
  [SMALL_STATE(170)] = 2805,
  [SMALL_STATE(171)] = 2818,
  [SMALL_STATE(172)] = 2829,
  [SMALL_STATE(173)] = 2842,
  [SMALL_STATE(174)] = 2851,
  [SMALL_STATE(175)] = 2864,
  [SMALL_STATE(176)] = 2871,
  [SMALL_STATE(177)] = 2884,
  [SMALL_STATE(178)] = 2895,
  [SMALL_STATE(179)] = 2908,
  [SMALL_STATE(180)] = 2921,
  [SMALL_STATE(181)] = 2930,
  [SMALL_STATE(182)] = 2943,
  [SMALL_STATE(183)] = 2956,
  [SMALL_STATE(184)] = 2969,
  [SMALL_STATE(185)] = 2982,
  [SMALL_STATE(186)] = 2988,
  [SMALL_STATE(187)] = 2996,
  [SMALL_STATE(188)] = 3006,
  [SMALL_STATE(189)] = 3016,
  [SMALL_STATE(190)] = 3026,
  [SMALL_STATE(191)] = 3032,
  [SMALL_STATE(192)] = 3038,
  [SMALL_STATE(193)] = 3048,
  [SMALL_STATE(194)] = 3058,
  [SMALL_STATE(195)] = 3068,
  [SMALL_STATE(196)] = 3078,
  [SMALL_STATE(197)] = 3088,
  [SMALL_STATE(198)] = 3098,
  [SMALL_STATE(199)] = 3108,
  [SMALL_STATE(200)] = 3118,
  [SMALL_STATE(201)] = 3124,
  [SMALL_STATE(202)] = 3134,
  [SMALL_STATE(203)] = 3144,
  [SMALL_STATE(204)] = 3154,
  [SMALL_STATE(205)] = 3160,
  [SMALL_STATE(206)] = 3170,
  [SMALL_STATE(207)] = 3180,
  [SMALL_STATE(208)] = 3190,
  [SMALL_STATE(209)] = 3200,
  [SMALL_STATE(210)] = 3206,
  [SMALL_STATE(211)] = 3212,
  [SMALL_STATE(212)] = 3222,
  [SMALL_STATE(213)] = 3232,
  [SMALL_STATE(214)] = 3242,
  [SMALL_STATE(215)] = 3248,
  [SMALL_STATE(216)] = 3254,
  [SMALL_STATE(217)] = 3260,
  [SMALL_STATE(218)] = 3268,
  [SMALL_STATE(219)] = 3274,
  [SMALL_STATE(220)] = 3280,
  [SMALL_STATE(221)] = 3288,
  [SMALL_STATE(222)] = 3298,
  [SMALL_STATE(223)] = 3308,
  [SMALL_STATE(224)] = 3318,
  [SMALL_STATE(225)] = 3328,
  [SMALL_STATE(226)] = 3338,
  [SMALL_STATE(227)] = 3344,
  [SMALL_STATE(228)] = 3352,
  [SMALL_STATE(229)] = 3362,
  [SMALL_STATE(230)] = 3372,
  [SMALL_STATE(231)] = 3382,
  [SMALL_STATE(232)] = 3390,
  [SMALL_STATE(233)] = 3400,
  [SMALL_STATE(234)] = 3408,
  [SMALL_STATE(235)] = 3416,
  [SMALL_STATE(236)] = 3426,
  [SMALL_STATE(237)] = 3436,
  [SMALL_STATE(238)] = 3442,
  [SMALL_STATE(239)] = 3452,
  [SMALL_STATE(240)] = 3462,
  [SMALL_STATE(241)] = 3472,
  [SMALL_STATE(242)] = 3482,
  [SMALL_STATE(243)] = 3492,
  [SMALL_STATE(244)] = 3497,
  [SMALL_STATE(245)] = 3502,
  [SMALL_STATE(246)] = 3507,
  [SMALL_STATE(247)] = 3514,
  [SMALL_STATE(248)] = 3519,
  [SMALL_STATE(249)] = 3526,
  [SMALL_STATE(250)] = 3531,
  [SMALL_STATE(251)] = 3538,
  [SMALL_STATE(252)] = 3545,
  [SMALL_STATE(253)] = 3552,
  [SMALL_STATE(254)] = 3559,
  [SMALL_STATE(255)] = 3564,
  [SMALL_STATE(256)] = 3569,
  [SMALL_STATE(257)] = 3574,
  [SMALL_STATE(258)] = 3579,
  [SMALL_STATE(259)] = 3586,
  [SMALL_STATE(260)] = 3591,
  [SMALL_STATE(261)] = 3596,
  [SMALL_STATE(262)] = 3603,
  [SMALL_STATE(263)] = 3608,
  [SMALL_STATE(264)] = 3615,
  [SMALL_STATE(265)] = 3620,
  [SMALL_STATE(266)] = 3627,
  [SMALL_STATE(267)] = 3634,
  [SMALL_STATE(268)] = 3641,
  [SMALL_STATE(269)] = 3648,
  [SMALL_STATE(270)] = 3653,
  [SMALL_STATE(271)] = 3660,
  [SMALL_STATE(272)] = 3667,
  [SMALL_STATE(273)] = 3672,
  [SMALL_STATE(274)] = 3677,
  [SMALL_STATE(275)] = 3682,
  [SMALL_STATE(276)] = 3687,
  [SMALL_STATE(277)] = 3694,
  [SMALL_STATE(278)] = 3701,
  [SMALL_STATE(279)] = 3706,
  [SMALL_STATE(280)] = 3713,
  [SMALL_STATE(281)] = 3718,
  [SMALL_STATE(282)] = 3725,
  [SMALL_STATE(283)] = 3730,
  [SMALL_STATE(284)] = 3735,
  [SMALL_STATE(285)] = 3742,
  [SMALL_STATE(286)] = 3747,
  [SMALL_STATE(287)] = 3754,
  [SMALL_STATE(288)] = 3759,
  [SMALL_STATE(289)] = 3764,
  [SMALL_STATE(290)] = 3771,
  [SMALL_STATE(291)] = 3776,
  [SMALL_STATE(292)] = 3783,
  [SMALL_STATE(293)] = 3788,
  [SMALL_STATE(294)] = 3793,
  [SMALL_STATE(295)] = 3798,
  [SMALL_STATE(296)] = 3803,
  [SMALL_STATE(297)] = 3810,
  [SMALL_STATE(298)] = 3817,
  [SMALL_STATE(299)] = 3822,
  [SMALL_STATE(300)] = 3829,
  [SMALL_STATE(301)] = 3836,
  [SMALL_STATE(302)] = 3841,
  [SMALL_STATE(303)] = 3846,
  [SMALL_STATE(304)] = 3853,
  [SMALL_STATE(305)] = 3860,
  [SMALL_STATE(306)] = 3865,
  [SMALL_STATE(307)] = 3872,
  [SMALL_STATE(308)] = 3877,
  [SMALL_STATE(309)] = 3882,
  [SMALL_STATE(310)] = 3889,
  [SMALL_STATE(311)] = 3894,
  [SMALL_STATE(312)] = 3901,
  [SMALL_STATE(313)] = 3908,
  [SMALL_STATE(314)] = 3915,
  [SMALL_STATE(315)] = 3922,
  [SMALL_STATE(316)] = 3929,
  [SMALL_STATE(317)] = 3934,
  [SMALL_STATE(318)] = 3941,
  [SMALL_STATE(319)] = 3946,
  [SMALL_STATE(320)] = 3951,
  [SMALL_STATE(321)] = 3956,
  [SMALL_STATE(322)] = 3961,
  [SMALL_STATE(323)] = 3968,
  [SMALL_STATE(324)] = 3973,
  [SMALL_STATE(325)] = 3978,
  [SMALL_STATE(326)] = 3985,
  [SMALL_STATE(327)] = 3992,
  [SMALL_STATE(328)] = 3997,
  [SMALL_STATE(329)] = 4004,
  [SMALL_STATE(330)] = 4011,
  [SMALL_STATE(331)] = 4016,
  [SMALL_STATE(332)] = 4023,
  [SMALL_STATE(333)] = 4030,
  [SMALL_STATE(334)] = 4035,
  [SMALL_STATE(335)] = 4040,
  [SMALL_STATE(336)] = 4045,
  [SMALL_STATE(337)] = 4050,
  [SMALL_STATE(338)] = 4054,
  [SMALL_STATE(339)] = 4058,
  [SMALL_STATE(340)] = 4062,
  [SMALL_STATE(341)] = 4066,
  [SMALL_STATE(342)] = 4070,
  [SMALL_STATE(343)] = 4074,
  [SMALL_STATE(344)] = 4078,
  [SMALL_STATE(345)] = 4082,
  [SMALL_STATE(346)] = 4086,
  [SMALL_STATE(347)] = 4090,
  [SMALL_STATE(348)] = 4094,
  [SMALL_STATE(349)] = 4098,
  [SMALL_STATE(350)] = 4102,
  [SMALL_STATE(351)] = 4106,
  [SMALL_STATE(352)] = 4110,
  [SMALL_STATE(353)] = 4114,
  [SMALL_STATE(354)] = 4118,
  [SMALL_STATE(355)] = 4122,
  [SMALL_STATE(356)] = 4126,
  [SMALL_STATE(357)] = 4130,
  [SMALL_STATE(358)] = 4134,
  [SMALL_STATE(359)] = 4138,
  [SMALL_STATE(360)] = 4142,
  [SMALL_STATE(361)] = 4146,
  [SMALL_STATE(362)] = 4150,
  [SMALL_STATE(363)] = 4154,
  [SMALL_STATE(364)] = 4158,
  [SMALL_STATE(365)] = 4162,
  [SMALL_STATE(366)] = 4166,
  [SMALL_STATE(367)] = 4170,
  [SMALL_STATE(368)] = 4174,
  [SMALL_STATE(369)] = 4178,
  [SMALL_STATE(370)] = 4182,
  [SMALL_STATE(371)] = 4186,
  [SMALL_STATE(372)] = 4190,
  [SMALL_STATE(373)] = 4194,
  [SMALL_STATE(374)] = 4198,
  [SMALL_STATE(375)] = 4202,
  [SMALL_STATE(376)] = 4206,
  [SMALL_STATE(377)] = 4210,
  [SMALL_STATE(378)] = 4214,
  [SMALL_STATE(379)] = 4218,
  [SMALL_STATE(380)] = 4222,
  [SMALL_STATE(381)] = 4226,
  [SMALL_STATE(382)] = 4230,
  [SMALL_STATE(383)] = 4234,
  [SMALL_STATE(384)] = 4238,
  [SMALL_STATE(385)] = 4242,
  [SMALL_STATE(386)] = 4246,
  [SMALL_STATE(387)] = 4250,
  [SMALL_STATE(388)] = 4254,
  [SMALL_STATE(389)] = 4258,
  [SMALL_STATE(390)] = 4262,
  [SMALL_STATE(391)] = 4266,
  [SMALL_STATE(392)] = 4270,
  [SMALL_STATE(393)] = 4274,
  [SMALL_STATE(394)] = 4278,
  [SMALL_STATE(395)] = 4282,
  [SMALL_STATE(396)] = 4286,
  [SMALL_STATE(397)] = 4290,
  [SMALL_STATE(398)] = 4294,
  [SMALL_STATE(399)] = 4298,
  [SMALL_STATE(400)] = 4302,
  [SMALL_STATE(401)] = 4306,
  [SMALL_STATE(402)] = 4310,
  [SMALL_STATE(403)] = 4314,
  [SMALL_STATE(404)] = 4318,
  [SMALL_STATE(405)] = 4322,
  [SMALL_STATE(406)] = 4326,
  [SMALL_STATE(407)] = 4330,
  [SMALL_STATE(408)] = 4334,
  [SMALL_STATE(409)] = 4338,
  [SMALL_STATE(410)] = 4342,
  [SMALL_STATE(411)] = 4346,
  [SMALL_STATE(412)] = 4350,
  [SMALL_STATE(413)] = 4354,
  [SMALL_STATE(414)] = 4358,
  [SMALL_STATE(415)] = 4362,
  [SMALL_STATE(416)] = 4366,
  [SMALL_STATE(417)] = 4370,
  [SMALL_STATE(418)] = 4374,
  [SMALL_STATE(419)] = 4378,
  [SMALL_STATE(420)] = 4382,
  [SMALL_STATE(421)] = 4386,
  [SMALL_STATE(422)] = 4390,
  [SMALL_STATE(423)] = 4394,
  [SMALL_STATE(424)] = 4398,
  [SMALL_STATE(425)] = 4402,
  [SMALL_STATE(426)] = 4406,
  [SMALL_STATE(427)] = 4410,
  [SMALL_STATE(428)] = 4414,
  [SMALL_STATE(429)] = 4418,
  [SMALL_STATE(430)] = 4422,
  [SMALL_STATE(431)] = 4426,
  [SMALL_STATE(432)] = 4430,
  [SMALL_STATE(433)] = 4434,
  [SMALL_STATE(434)] = 4438,
  [SMALL_STATE(435)] = 4442,
  [SMALL_STATE(436)] = 4446,
  [SMALL_STATE(437)] = 4450,
  [SMALL_STATE(438)] = 4454,
  [SMALL_STATE(439)] = 4458,
  [SMALL_STATE(440)] = 4462,
  [SMALL_STATE(441)] = 4466,
  [SMALL_STATE(442)] = 4470,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(401),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(400),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(399),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(398),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(5),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(426),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(5),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(396),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEReference, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEReference, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__intSubset, 2),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(168),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(21),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(408),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(308),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(432),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(17),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(437),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(438),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(439),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 2),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(436),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(25),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(440),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(441),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(442),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(26),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(192),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STag, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STag, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, .production_id = 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(433),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(434),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(435),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(35),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__Reference, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Reference, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, .production_id = 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ETag, 4),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ETag, 4),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3, .production_id = 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3, .production_id = 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EmptyElemTag, 5),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EmptyElemTag, 5),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CDSect, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CDSect, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 5, .production_id = 4),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 5, .production_id = 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ETag, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ETag, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STag, 5),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STag, 5),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EmptyElemTag, 4),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EmptyElemTag, 4),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CharRef, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CharRef, 3),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EntityRef, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityRef, 3),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 4),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EmptyElemTag, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EmptyElemTag, 3),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 3, .production_id = 4),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 3, .production_id = 4),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4, .production_id = 3),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, .production_id = 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(427),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(428),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(429),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(67),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STag, 4),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STag, 4),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 5),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 4),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StyleSheetPI, 3),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StyleSheetPI, 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XmlModelPI, 4),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XmlModelPI, 4),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StyleSheetPI, 4),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StyleSheetPI, 4),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StyleSheetPI, 5),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StyleSheetPI, 5),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XmlModelPI, 5),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XmlModelPI, 5),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XmlModelPI, 3),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XmlModelPI, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__intSubset, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__intSubset, 3),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__intSubset, 3),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(81),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(278),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 7),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 7),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(145),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(361),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 4),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 4),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 5),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 5),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 6),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 6),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 5),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 5),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 4),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EmptyElemTag_repeat1, 2),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EmptyElemTag_repeat1, 2), SHIFT_REPEAT(309),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 12),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 12),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(329),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(358),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1), SHIFT_REPEAT(127),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 3),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(151),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 7),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 7),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 3),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(139),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(359),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2), SHIFT_REPEAT(238),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 11),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 11),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 6),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 6),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 8),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 8),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 9),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 9),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 10),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 10),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 5),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 3),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 2),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 3, .production_id = 5),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SystemLiteral, 2),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 4),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [727] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_StyleSheetPI_repeat1, 2), SHIFT_REPEAT(311),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_StyleSheetPI_repeat1, 2),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 3),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 5),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 3),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4),
  [744] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4), SHIFT_REPEAT(210),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SystemLiteral, 3, .production_id = 5),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 1),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3),
  [761] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3), SHIFT_REPEAT(218),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 4),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 2),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [784] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(226),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Attribute, 3),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 8),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 4),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PseudoAttValue, 2),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 3),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 7),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PseudoAttValue, 3, .production_id = 5),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 7),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 7),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 2),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 7),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 9),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 7),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PubidLiteral, 2),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PseudoAtt, 3),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 6),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 8),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__AttType, 1),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 4),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EnumeratedType, 1),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PublicID, 3),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 8),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 3, .production_id = 5),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 8),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 6),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 3),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EncodingDecl, 6),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__SDDecl, 6),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 5),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EntityDecl, 1),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markupdecl, 1),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 5),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 9),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 6),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 9),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 6),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__VersionInfo, 6),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 5),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PubidLiteral, 3, .production_id = 5),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contentspec, 1),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 3),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NDataDecl, 4),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 1),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 10),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 6),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1127] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
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
