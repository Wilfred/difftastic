#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 441
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
  anon_sym_standalone = 61,
  anon_sym_yes = 62,
  anon_sym_no = 63,
  anon_sym_DOCTYPE = 64,
  anon_sym_RBRACK = 65,
  anon_sym_LT = 66,
  anon_sym_SLASH_GT = 67,
  anon_sym_LT_SLASH = 68,
  sym_CharData = 69,
  anon_sym_LT_BANG_LBRACKCDATA_LBRACK = 70,
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
  [sym_Comment] = "Comment",
  [anon_sym_EQ] = "=",
  [anon_sym_standalone] = "standalone",
  [anon_sym_yes] = "yes",
  [anon_sym_no] = "no",
  [anon_sym_DOCTYPE] = "DOCTYPE",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LT] = "<",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [sym_CharData] = "CharData",
  [anon_sym_LT_BANG_LBRACKCDATA_LBRACK] = "<![CDATA[",
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
  [sym_Comment] = sym_Comment,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_standalone] = anon_sym_standalone,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_DOCTYPE] = anon_sym_DOCTYPE,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [sym_CharData] = sym_CharData,
  [anon_sym_LT_BANG_LBRACKCDATA_LBRACK] = anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
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
  [76] = 35,
  [77] = 42,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 33,
  [85] = 33,
  [86] = 86,
  [87] = 60,
  [88] = 59,
  [89] = 89,
  [90] = 8,
  [91] = 59,
  [92] = 8,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 60,
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
  [112] = 33,
  [113] = 60,
  [114] = 59,
  [115] = 115,
  [116] = 116,
  [117] = 33,
  [118] = 60,
  [119] = 59,
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
  [135] = 43,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 132,
  [141] = 141,
  [142] = 129,
  [143] = 143,
  [144] = 38,
  [145] = 37,
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
  [161] = 31,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 32,
  [169] = 169,
  [170] = 53,
  [171] = 171,
  [172] = 172,
  [173] = 131,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 130,
  [181] = 181,
  [182] = 52,
  [183] = 29,
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
  [252] = 249,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 246,
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
  [309] = 244,
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
  [406] = 387,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 338,
  [411] = 349,
  [412] = 412,
  [413] = 362,
  [414] = 414,
  [415] = 404,
  [416] = 351,
  [417] = 338,
  [418] = 349,
  [419] = 351,
  [420] = 338,
  [421] = 349,
  [422] = 338,
  [423] = 349,
  [424] = 402,
  [425] = 390,
  [426] = 389,
  [427] = 388,
  [428] = 332,
  [429] = 381,
  [430] = 392,
  [431] = 390,
  [432] = 389,
  [433] = 388,
  [434] = 392,
  [435] = 390,
  [436] = 389,
  [437] = 388,
  [438] = 390,
  [439] = 389,
  [440] = 388,
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
      if (lookahead == '<') ADVANCE(153);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(60);
      if (lookahead == '?') ADVANCE(66);
      if (lookahead == 'E') ADVANCE(86);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'N') ADVANCE(85);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == ']') ADVANCE(152);
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
      if (lookahead == '1') ADVANCE(10);
      if (lookahead == '?') ADVANCE(14);
      if (lookahead == 'E') ADVANCE(114);
      if (lookahead == 'I') ADVANCE(97);
      if (lookahead == 'N') ADVANCE(112);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(96);
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
      if (lookahead == '-') ADVANCE(13);
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
      if (lookahead == '>') ADVANCE(156);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(57);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(149);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(145);
      END_STATE();
    case 15:
      if (lookahead == '?') ADVANCE(14);
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
      if (lookahead == '[') ADVANCE(162);
      END_STATE();
    case 45:
      if (lookahead == ']') ADVANCE(12);
      END_STATE();
    case 46:
      if (lookahead == ']') ADVANCE(52);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 47:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(96);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(132);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 50:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 51:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(148);
      END_STATE();
    case 52:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(163);
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
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '<') ADVANCE(154);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(60);
      if (lookahead == '?') ADVANCE(66);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == ']') ADVANCE(151);
      if (lookahead == '|') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
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
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK_GT);
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
      if (lookahead == '>') ADVANCE(156);
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
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token1);
      if (aux_sym_PubidLiteral_token1_character_set_1(lookahead)) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token2);
      if (aux_sym_PubidLiteral_token2_character_set_1(lookahead)) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_VersionNum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_EncName);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_PI_token1);
      if (lookahead == '?') ADVANCE(51);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_Comment);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(12);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(59);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '?') ADVANCE(144);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(58);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '?') ADVANCE(144);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '?') ADVANCE(144);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_CharData);
      if (lookahead == '&') ADVANCE(133);
      if (lookahead == '<') ADVANCE(155);
      if (lookahead == ']') ADVANCE(160);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_CharData);
      if (lookahead == ']') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_CharData);
      if (lookahead == ']') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<') ADVANCE(159);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_CharData);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != ']') ADVANCE(159);
      if (lookahead == ']') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LT_BANG_LBRACKCDATA_LBRACK);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_CData);
      if (lookahead == ']') ADVANCE(46);
      if (lookahead != 0) ADVANCE(163);
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
  [2] = {.lex_state = 158},
  [3] = {.lex_state = 158},
  [4] = {.lex_state = 158},
  [5] = {.lex_state = 158},
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
  [17] = {.lex_state = 53},
  [18] = {.lex_state = 53},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 53},
  [25] = {.lex_state = 53},
  [26] = {.lex_state = 53},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 158},
  [30] = {.lex_state = 53},
  [31] = {.lex_state = 158},
  [32] = {.lex_state = 158},
  [33] = {.lex_state = 158},
  [34] = {.lex_state = 158},
  [35] = {.lex_state = 158},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 158},
  [38] = {.lex_state = 158},
  [39] = {.lex_state = 53},
  [40] = {.lex_state = 53},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 158},
  [43] = {.lex_state = 158},
  [44] = {.lex_state = 158},
  [45] = {.lex_state = 53},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 53},
  [50] = {.lex_state = 53},
  [51] = {.lex_state = 158},
  [52] = {.lex_state = 158},
  [53] = {.lex_state = 158},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 53},
  [56] = {.lex_state = 53},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 158},
  [59] = {.lex_state = 158},
  [60] = {.lex_state = 158},
  [61] = {.lex_state = 53},
  [62] = {.lex_state = 53},
  [63] = {.lex_state = 53},
  [64] = {.lex_state = 53},
  [65] = {.lex_state = 53},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 5},
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
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 53},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 53},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 53},
  [94] = {.lex_state = 53},
  [95] = {.lex_state = 53},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 53},
  [98] = {.lex_state = 53},
  [99] = {.lex_state = 53},
  [100] = {.lex_state = 53},
  [101] = {.lex_state = 53},
  [102] = {.lex_state = 53},
  [103] = {.lex_state = 53},
  [104] = {.lex_state = 53},
  [105] = {.lex_state = 53},
  [106] = {.lex_state = 53},
  [107] = {.lex_state = 53},
  [108] = {.lex_state = 53},
  [109] = {.lex_state = 53},
  [110] = {.lex_state = 53},
  [111] = {.lex_state = 53},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 53},
  [116] = {.lex_state = 53},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 5},
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
  [146] = {.lex_state = 4},
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
  [163] = {.lex_state = 53},
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
  [187] = {.lex_state = 53},
  [188] = {.lex_state = 53},
  [189] = {.lex_state = 53},
  [190] = {.lex_state = 53},
  [191] = {.lex_state = 53},
  [192] = {.lex_state = 53},
  [193] = {.lex_state = 53},
  [194] = {.lex_state = 53},
  [195] = {.lex_state = 53},
  [196] = {.lex_state = 53},
  [197] = {.lex_state = 53},
  [198] = {.lex_state = 53},
  [199] = {.lex_state = 53},
  [200] = {.lex_state = 53},
  [201] = {.lex_state = 53},
  [202] = {.lex_state = 53},
  [203] = {.lex_state = 53},
  [204] = {.lex_state = 53},
  [205] = {.lex_state = 53},
  [206] = {.lex_state = 53},
  [207] = {.lex_state = 53},
  [208] = {.lex_state = 53},
  [209] = {.lex_state = 15},
  [210] = {.lex_state = 53},
  [211] = {.lex_state = 53},
  [212] = {.lex_state = 53},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 15},
  [215] = {.lex_state = 53},
  [216] = {.lex_state = 15},
  [217] = {.lex_state = 53},
  [218] = {.lex_state = 53},
  [219] = {.lex_state = 53},
  [220] = {.lex_state = 4},
  [221] = {.lex_state = 53},
  [222] = {.lex_state = 15},
  [223] = {.lex_state = 53},
  [224] = {.lex_state = 4},
  [225] = {.lex_state = 4},
  [226] = {.lex_state = 15},
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
  [238] = {.lex_state = 4},
  [239] = {.lex_state = 53},
  [240] = {.lex_state = 4},
  [241] = {.lex_state = 53},
  [242] = {.lex_state = 53},
  [243] = {.lex_state = 53},
  [244] = {.lex_state = 53},
  [245] = {.lex_state = 53},
  [246] = {.lex_state = 53},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 53},
  [249] = {.lex_state = 4},
  [250] = {.lex_state = 53},
  [251] = {.lex_state = 53},
  [252] = {.lex_state = 4},
  [253] = {.lex_state = 53},
  [254] = {.lex_state = 53},
  [255] = {.lex_state = 53},
  [256] = {.lex_state = 53},
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
  [272] = {.lex_state = 4},
  [273] = {.lex_state = 53},
  [274] = {.lex_state = 15},
  [275] = {.lex_state = 4},
  [276] = {.lex_state = 53},
  [277] = {.lex_state = 53},
  [278] = {.lex_state = 53},
  [279] = {.lex_state = 47},
  [280] = {.lex_state = 53},
  [281] = {.lex_state = 53},
  [282] = {.lex_state = 53},
  [283] = {.lex_state = 53},
  [284] = {.lex_state = 53},
  [285] = {.lex_state = 53},
  [286] = {.lex_state = 53},
  [287] = {.lex_state = 53},
  [288] = {.lex_state = 53},
  [289] = {.lex_state = 53},
  [290] = {.lex_state = 4},
  [291] = {.lex_state = 53},
  [292] = {.lex_state = 53},
  [293] = {.lex_state = 53},
  [294] = {.lex_state = 4},
  [295] = {.lex_state = 4},
  [296] = {.lex_state = 53},
  [297] = {.lex_state = 53},
  [298] = {.lex_state = 53},
  [299] = {.lex_state = 53},
  [300] = {.lex_state = 53},
  [301] = {.lex_state = 53},
  [302] = {.lex_state = 53},
  [303] = {.lex_state = 53},
  [304] = {.lex_state = 53},
  [305] = {.lex_state = 53},
  [306] = {.lex_state = 4},
  [307] = {.lex_state = 53},
  [308] = {.lex_state = 53},
  [309] = {.lex_state = 53},
  [310] = {.lex_state = 53},
  [311] = {.lex_state = 53},
  [312] = {.lex_state = 53},
  [313] = {.lex_state = 47},
  [314] = {.lex_state = 53},
  [315] = {.lex_state = 53},
  [316] = {.lex_state = 53},
  [317] = {.lex_state = 53},
  [318] = {.lex_state = 53},
  [319] = {.lex_state = 53},
  [320] = {.lex_state = 53},
  [321] = {.lex_state = 53},
  [322] = {.lex_state = 53},
  [323] = {.lex_state = 4},
  [324] = {.lex_state = 4},
  [325] = {.lex_state = 53},
  [326] = {.lex_state = 53},
  [327] = {.lex_state = 47},
  [328] = {.lex_state = 53},
  [329] = {.lex_state = 53},
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
  [343] = {.lex_state = 143},
  [344] = {.lex_state = 47},
  [345] = {.lex_state = 142},
  [346] = {.lex_state = 53},
  [347] = {.lex_state = 141},
  [348] = {.lex_state = 140},
  [349] = {.lex_state = 53},
  [350] = {.lex_state = 53},
  [351] = {.lex_state = 53},
  [352] = {.lex_state = 53},
  [353] = {.lex_state = 53},
  [354] = {.lex_state = 47},
  [355] = {.lex_state = 47},
  [356] = {.lex_state = 53},
  [357] = {.lex_state = 4},
  [358] = {.lex_state = 53},
  [359] = {.lex_state = 53},
  [360] = {.lex_state = 53},
  [361] = {.lex_state = 53},
  [362] = {.lex_state = 4},
  [363] = {.lex_state = 53},
  [364] = {.lex_state = 53},
  [365] = {.lex_state = 53},
  [366] = {.lex_state = 50},
  [367] = {.lex_state = 50},
  [368] = {.lex_state = 53},
  [369] = {.lex_state = 53},
  [370] = {.lex_state = 53},
  [371] = {.lex_state = 53},
  [372] = {.lex_state = 4},
  [373] = {.lex_state = 53},
  [374] = {.lex_state = 53},
  [375] = {.lex_state = 53},
  [376] = {.lex_state = 53},
  [377] = {.lex_state = 53},
  [378] = {.lex_state = 53},
  [379] = {.lex_state = 53},
  [380] = {.lex_state = 53},
  [381] = {.lex_state = 148},
  [382] = {.lex_state = 53},
  [383] = {.lex_state = 53},
  [384] = {.lex_state = 53},
  [385] = {.lex_state = 163},
  [386] = {.lex_state = 53},
  [387] = {.lex_state = 53},
  [388] = {.lex_state = 49},
  [389] = {.lex_state = 53},
  [390] = {.lex_state = 53},
  [391] = {.lex_state = 53},
  [392] = {.lex_state = 53},
  [393] = {.lex_state = 53},
  [394] = {.lex_state = 53},
  [395] = {.lex_state = 53},
  [396] = {.lex_state = 53},
  [397] = {.lex_state = 53},
  [398] = {.lex_state = 53},
  [399] = {.lex_state = 53},
  [400] = {.lex_state = 53},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 53},
  [403] = {.lex_state = 4},
  [404] = {.lex_state = 53},
  [405] = {.lex_state = 53},
  [406] = {.lex_state = 53},
  [407] = {.lex_state = 53},
  [408] = {.lex_state = 4},
  [409] = {.lex_state = 53},
  [410] = {.lex_state = 53},
  [411] = {.lex_state = 53},
  [412] = {.lex_state = 53},
  [413] = {.lex_state = 4},
  [414] = {.lex_state = 4},
  [415] = {.lex_state = 53},
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
  [427] = {.lex_state = 49},
  [428] = {.lex_state = 53},
  [429] = {.lex_state = 148},
  [430] = {.lex_state = 53},
  [431] = {.lex_state = 53},
  [432] = {.lex_state = 53},
  [433] = {.lex_state = 49},
  [434] = {.lex_state = 53},
  [435] = {.lex_state = 53},
  [436] = {.lex_state = 53},
  [437] = {.lex_state = 49},
  [438] = {.lex_state = 53},
  [439] = {.lex_state = 53},
  [440] = {.lex_state = 49},
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
    [anon_sym_standalone] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_DOCTYPE] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_LT_BANG_LBRACKCDATA_LBRACK] = ACTIONS(1),
    [anon_sym_xml_DASHstylesheet] = ACTIONS(1),
    [anon_sym_xml_DASHmodel] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(401),
    [sym_XMLDecl] = STATE(25),
    [sym_PI] = STATE(17),
    [sym_prolog] = STATE(134),
    [sym__Misc] = STATE(17),
    [sym_doctypedecl] = STATE(65),
    [sym_element] = STATE(63),
    [sym_EmptyElemTag] = STATE(135),
    [sym_STag] = STATE(2),
    [sym_StyleSheetPI] = STATE(17),
    [sym_XmlModelPI] = STATE(17),
    [aux_sym_document_repeat1] = STATE(17),
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
    STATE(3), 1,
      sym_STag,
    STATE(43), 1,
      sym_EmptyElemTag,
    STATE(144), 1,
      sym_ETag,
    STATE(261), 1,
      sym_content,
    STATE(33), 2,
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
    STATE(3), 1,
      sym_STag,
    STATE(38), 1,
      sym_ETag,
    STATE(43), 1,
      sym_EmptyElemTag,
    STATE(246), 1,
      sym_content,
    STATE(33), 2,
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
    STATE(3), 1,
      sym_STag,
    STATE(43), 1,
      sym_EmptyElemTag,
    STATE(33), 2,
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
    STATE(3), 1,
      sym_STag,
    STATE(43), 1,
      sym_EmptyElemTag,
    STATE(33), 2,
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
    STATE(2), 1,
      sym_STag,
    STATE(25), 1,
      sym_XMLDecl,
    STATE(62), 1,
      sym_element,
    STATE(65), 1,
      sym_doctypedecl,
    STATE(135), 1,
      sym_EmptyElemTag,
    STATE(137), 1,
      sym_prolog,
    ACTIONS(9), 2,
      sym__S,
      sym_Comment,
    STATE(17), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [231] = 9,
    ACTIONS(65), 1,
      anon_sym_LT_BANG,
    ACTIONS(67), 1,
      sym__S,
    ACTIONS(69), 1,
      anon_sym_LT_QMARK,
    ACTIONS(71), 1,
      sym_Comment,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__intSubset,
    STATE(162), 1,
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
  [264] = 2,
    ACTIONS(77), 1,
      anon_sym_LT_BANG,
    ACTIONS(75), 13,
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
      anon_sym_RBRACK,
  [283] = 9,
    ACTIONS(65), 1,
      anon_sym_LT_BANG,
    ACTIONS(67), 1,
      sym__S,
    ACTIONS(69), 1,
      anon_sym_LT_QMARK,
    ACTIONS(71), 1,
      sym_Comment,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__intSubset,
    STATE(162), 1,
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
    ACTIONS(65), 1,
      anon_sym_LT_BANG,
    ACTIONS(67), 1,
      sym__S,
    ACTIONS(69), 1,
      anon_sym_LT_QMARK,
    ACTIONS(71), 1,
      sym_Comment,
    ACTIONS(81), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__intSubset,
    STATE(162), 1,
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
    ACTIONS(65), 1,
      anon_sym_LT_BANG,
    ACTIONS(67), 1,
      sym__S,
    ACTIONS(69), 1,
      anon_sym_LT_QMARK,
    ACTIONS(71), 1,
      sym_Comment,
    ACTIONS(83), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__intSubset,
    STATE(162), 1,
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
    ACTIONS(85), 1,
      anon_sym_LT_BANG,
    ACTIONS(88), 1,
      sym__S,
    ACTIONS(91), 1,
      anon_sym_LT_QMARK,
    ACTIONS(94), 1,
      sym_Comment,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__intSubset,
    STATE(162), 1,
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
    ACTIONS(65), 1,
      anon_sym_LT_BANG,
    ACTIONS(67), 1,
      sym__S,
    ACTIONS(69), 1,
      anon_sym_LT_QMARK,
    ACTIONS(71), 1,
      sym_Comment,
    STATE(9), 1,
      aux_sym__intSubset,
    STATE(162), 1,
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
    ACTIONS(65), 1,
      anon_sym_LT_BANG,
    ACTIONS(67), 1,
      sym__S,
    ACTIONS(69), 1,
      anon_sym_LT_QMARK,
    ACTIONS(71), 1,
      sym_Comment,
    STATE(11), 1,
      aux_sym__intSubset,
    STATE(162), 1,
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
    ACTIONS(65), 1,
      anon_sym_LT_BANG,
    ACTIONS(67), 1,
      sym__S,
    ACTIONS(69), 1,
      anon_sym_LT_QMARK,
    ACTIONS(71), 1,
      sym_Comment,
    STATE(7), 1,
      aux_sym__intSubset,
    STATE(162), 1,
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
    ACTIONS(65), 1,
      anon_sym_LT_BANG,
    ACTIONS(67), 1,
      sym__S,
    ACTIONS(69), 1,
      anon_sym_LT_QMARK,
    ACTIONS(71), 1,
      sym_Comment,
    STATE(10), 1,
      aux_sym__intSubset,
    STATE(162), 1,
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
  [535] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_BANG,
    ACTIONS(101), 1,
      anon_sym_LT_QMARK,
    ACTIONS(103), 1,
      anon_sym_LT,
    STATE(49), 1,
      sym_doctypedecl,
    ACTIONS(99), 2,
      sym__S,
      sym_Comment,
    STATE(26), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [559] = 6,
    ACTIONS(65), 1,
      anon_sym_LT_BANG,
    ACTIONS(69), 1,
      anon_sym_LT_QMARK,
    ACTIONS(71), 1,
      sym_Comment,
    STATE(141), 1,
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
  [583] = 8,
    ACTIONS(105), 1,
      anon_sym_PERCENT,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_AMP_POUND,
    ACTIONS(115), 1,
      anon_sym_AMP_POUNDx,
    STATE(84), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(27), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [611] = 8,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_PERCENT,
    ACTIONS(119), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(121), 1,
      anon_sym_AMP,
    ACTIONS(123), 1,
      anon_sym_AMP_POUND,
    ACTIONS(125), 1,
      anon_sym_AMP_POUNDx,
    STATE(85), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(21), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [639] = 8,
    ACTIONS(117), 1,
      anon_sym_PERCENT,
    ACTIONS(121), 1,
      anon_sym_AMP,
    ACTIONS(123), 1,
      anon_sym_AMP_POUND,
    ACTIONS(125), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      aux_sym_EntityValue_token1,
    STATE(85), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(23), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [667] = 8,
    ACTIONS(131), 1,
      anon_sym_PERCENT,
    ACTIONS(134), 1,
      anon_sym_SQUOTE,
    ACTIONS(136), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(142), 1,
      anon_sym_AMP_POUND,
    ACTIONS(145), 1,
      anon_sym_AMP_POUNDx,
    STATE(84), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(22), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [695] = 8,
    ACTIONS(148), 1,
      anon_sym_PERCENT,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(156), 1,
      anon_sym_AMP,
    ACTIONS(159), 1,
      anon_sym_AMP_POUND,
    ACTIONS(162), 1,
      anon_sym_AMP_POUNDx,
    STATE(85), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(23), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [723] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_BANG,
    ACTIONS(101), 1,
      anon_sym_LT_QMARK,
    ACTIONS(165), 1,
      anon_sym_LT,
    STATE(56), 1,
      sym_doctypedecl,
    ACTIONS(99), 2,
      sym__S,
      sym_Comment,
    STATE(26), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [747] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_BANG,
    ACTIONS(101), 1,
      anon_sym_LT_QMARK,
    ACTIONS(103), 1,
      anon_sym_LT,
    STATE(49), 1,
      sym_doctypedecl,
    ACTIONS(167), 2,
      sym__S,
      sym_Comment,
    STATE(24), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
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
    ACTIONS(105), 1,
      anon_sym_PERCENT,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_AMP_POUND,
    ACTIONS(115), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      aux_sym_EntityValue_token2,
    STATE(84), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(22), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [821] = 7,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_NOTATION,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    STATE(282), 1,
      sym__AttType,
    ACTIONS(183), 2,
      sym_StringType,
      sym_TokenizedType,
    STATE(280), 2,
      sym__EnumeratedType,
      sym_PEReference,
    STATE(283), 2,
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
    ACTIONS(101), 1,
      anon_sym_LT_QMARK,
    ACTIONS(165), 1,
      anon_sym_LT,
    ACTIONS(99), 2,
      sym__S,
      sym_Comment,
    STATE(26), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [878] = 2,
    ACTIONS(193), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(195), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [892] = 2,
    ACTIONS(197), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(199), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [906] = 2,
    ACTIONS(201), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(203), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [920] = 2,
    ACTIONS(205), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(207), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [934] = 2,
    ACTIONS(209), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(211), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [948] = 7,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      anon_sym_AMP,
    ACTIONS(217), 1,
      anon_sym_AMP_POUND,
    ACTIONS(219), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(221), 1,
      aux_sym_AttValue_token1,
    STATE(57), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(112), 2,
      sym_EntityRef,
      sym_CharRef,
  [972] = 2,
    ACTIONS(223), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(225), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [986] = 2,
    ACTIONS(227), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(229), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1000] = 4,
    ACTIONS(101), 1,
      anon_sym_LT_QMARK,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    ACTIONS(233), 2,
      sym__S,
      sym_Comment,
    STATE(64), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1018] = 4,
    ACTIONS(101), 1,
      anon_sym_LT_QMARK,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 2,
      sym__S,
      sym_Comment,
    STATE(26), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1036] = 7,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_AMP,
    ACTIONS(241), 1,
      anon_sym_AMP_POUND,
    ACTIONS(243), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(245), 1,
      aux_sym_AttValue_token2,
    STATE(47), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(117), 2,
      sym_EntityRef,
      sym_CharRef,
  [1060] = 2,
    ACTIONS(247), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(249), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1074] = 2,
    ACTIONS(251), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(253), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1088] = 2,
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
  [1102] = 4,
    ACTIONS(101), 1,
      anon_sym_LT_QMARK,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 2,
      sym__S,
      sym_Comment,
    STATE(26), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1120] = 7,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      anon_sym_AMP,
    ACTIONS(266), 1,
      anon_sym_AMP_POUND,
    ACTIONS(269), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(272), 1,
      aux_sym_AttValue_token1,
    STATE(46), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(112), 2,
      sym_EntityRef,
      sym_CharRef,
  [1144] = 7,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_AMP,
    ACTIONS(280), 1,
      anon_sym_AMP_POUND,
    ACTIONS(283), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(286), 1,
      aux_sym_AttValue_token2,
    STATE(47), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(117), 2,
      sym_EntityRef,
      sym_CharRef,
  [1168] = 7,
    ACTIONS(215), 1,
      anon_sym_AMP,
    ACTIONS(217), 1,
      anon_sym_AMP_POUND,
    ACTIONS(219), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      aux_sym_AttValue_token1,
    STATE(46), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(112), 2,
      sym_EntityRef,
      sym_CharRef,
  [1192] = 4,
    ACTIONS(101), 1,
      anon_sym_LT_QMARK,
    ACTIONS(165), 1,
      anon_sym_LT,
    ACTIONS(291), 2,
      sym__S,
      sym_Comment,
    STATE(55), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1210] = 6,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym__choice,
    STATE(266), 1,
      sym_contentspec,
    ACTIONS(293), 2,
      anon_sym_EMPTY,
      anon_sym_ANY,
    STATE(267), 3,
      sym_Mixed,
      sym_children,
      sym_PEReference,
  [1232] = 2,
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
  [1246] = 2,
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
  [1260] = 2,
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
  [1274] = 7,
    ACTIONS(239), 1,
      anon_sym_AMP,
    ACTIONS(241), 1,
      anon_sym_AMP_POUND,
    ACTIONS(243), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(245), 1,
      aux_sym_AttValue_token2,
    ACTIONS(309), 1,
      anon_sym_SQUOTE,
    STATE(47), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(117), 2,
      sym_EntityRef,
      sym_CharRef,
  [1298] = 4,
    ACTIONS(101), 1,
      anon_sym_LT_QMARK,
    ACTIONS(311), 1,
      anon_sym_LT,
    ACTIONS(99), 2,
      sym__S,
      sym_Comment,
    STATE(26), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1316] = 4,
    ACTIONS(101), 1,
      anon_sym_LT_QMARK,
    ACTIONS(311), 1,
      anon_sym_LT,
    ACTIONS(313), 2,
      sym__S,
      sym_Comment,
    STATE(61), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1334] = 7,
    ACTIONS(215), 1,
      anon_sym_AMP,
    ACTIONS(217), 1,
      anon_sym_AMP_POUND,
    ACTIONS(219), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(289), 1,
      aux_sym_AttValue_token1,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    STATE(46), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(112), 2,
      sym_EntityRef,
      sym_CharRef,
  [1358] = 2,
    ACTIONS(315), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(317), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1372] = 2,
    ACTIONS(319), 4,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
      sym_CharData,
    ACTIONS(321), 5,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [1386] = 2,
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
  [1400] = 4,
    ACTIONS(101), 1,
      anon_sym_LT_QMARK,
    ACTIONS(327), 1,
      anon_sym_LT,
    ACTIONS(99), 2,
      sym__S,
      sym_Comment,
    STATE(26), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1418] = 4,
    ACTIONS(101), 1,
      anon_sym_LT_QMARK,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
    ACTIONS(331), 2,
      sym__S,
      sym_Comment,
    STATE(40), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1436] = 4,
    ACTIONS(101), 1,
      anon_sym_LT_QMARK,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 2,
      sym__S,
      sym_Comment,
    STATE(45), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1454] = 4,
    ACTIONS(101), 1,
      anon_sym_LT_QMARK,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 2,
      sym__S,
      sym_Comment,
    STATE(26), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1472] = 4,
    ACTIONS(101), 1,
      anon_sym_LT_QMARK,
    ACTIONS(103), 1,
      anon_sym_LT,
    ACTIONS(339), 2,
      sym__S,
      sym_Comment,
    STATE(30), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1490] = 7,
    ACTIONS(239), 1,
      anon_sym_AMP,
    ACTIONS(241), 1,
      anon_sym_AMP_POUND,
    ACTIONS(243), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(343), 1,
      aux_sym_AttValue_token2,
    STATE(41), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(117), 2,
      sym_EntityRef,
      sym_CharRef,
  [1514] = 7,
    ACTIONS(215), 1,
      anon_sym_AMP,
    ACTIONS(217), 1,
      anon_sym_AMP_POUND,
    ACTIONS(219), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(341), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      aux_sym_AttValue_token1,
    STATE(48), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(112), 2,
      sym_EntityRef,
      sym_CharRef,
  [1538] = 7,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(239), 1,
      anon_sym_AMP,
    ACTIONS(241), 1,
      anon_sym_AMP_POUND,
    ACTIONS(243), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(347), 1,
      aux_sym_AttValue_token2,
    STATE(54), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(117), 2,
      sym_EntityRef,
      sym_CharRef,
  [1562] = 1,
    ACTIONS(349), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [1573] = 6,
    ACTIONS(351), 1,
      anon_sym_PIPE,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(359), 1,
      sym__S,
    STATE(167), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(355), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [1594] = 8,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(361), 1,
      sym_Name,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(365), 1,
      anon_sym_POUNDPCDATA,
    ACTIONS(367), 1,
      sym__S,
    STATE(74), 1,
      sym_PEReference,
    STATE(75), 1,
      sym__choice,
    STATE(124), 1,
      sym__cp,
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
  [1630] = 1,
    ACTIONS(371), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [1641] = 6,
    ACTIONS(351), 1,
      anon_sym_PIPE,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    ACTIONS(375), 1,
      sym__S,
    STATE(155), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(355), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [1662] = 2,
    ACTIONS(355), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
    ACTIONS(357), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1674] = 2,
    ACTIONS(209), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(211), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1686] = 2,
    ACTIONS(247), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(249), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1698] = 6,
    ACTIONS(379), 1,
      anon_sym_POUNDFIXED,
    ACTIONS(381), 1,
      anon_sym_DQUOTE,
    ACTIONS(383), 1,
      anon_sym_SQUOTE,
    STATE(243), 1,
      sym_DefaultDecl,
    STATE(330), 1,
      sym_AttValue,
    ACTIONS(377), 2,
      anon_sym_POUNDREQUIRED,
      anon_sym_POUNDIMPLIED,
  [1718] = 6,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(361), 1,
      sym_Name,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      sym__S,
    STATE(177), 1,
      sym__cp,
    STATE(75), 2,
      sym__choice,
      sym_PEReference,
  [1738] = 6,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(361), 1,
      sym_Name,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      sym__S,
    STATE(124), 1,
      sym__cp,
    STATE(75), 2,
      sym__choice,
      sym_PEReference,
  [1758] = 7,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(361), 1,
      sym_Name,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      anon_sym_POUNDPCDATA,
    STATE(70), 1,
      sym_PEReference,
    STATE(75), 1,
      sym__choice,
    STATE(108), 1,
      sym__cp,
  [1780] = 6,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(361), 1,
      sym_Name,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      sym__S,
    STATE(171), 1,
      sym__cp,
    STATE(75), 2,
      sym__choice,
      sym_PEReference,
  [1800] = 5,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(397), 1,
      anon_sym_SYSTEM,
    ACTIONS(399), 1,
      anon_sym_PUBLIC,
    STATE(287), 2,
      sym_EntityValue,
      sym_ExternalID,
  [1817] = 2,
    ACTIONS(201), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(203), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1828] = 2,
    ACTIONS(201), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(203), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1839] = 5,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(361), 1,
      sym_Name,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    STATE(177), 1,
      sym__cp,
    STATE(75), 2,
      sym__choice,
      sym_PEReference,
  [1856] = 2,
    ACTIONS(323), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(325), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1867] = 2,
    ACTIONS(319), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(321), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1878] = 2,
    ACTIONS(403), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(401), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1889] = 2,
    ACTIONS(77), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(75), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1900] = 2,
    ACTIONS(319), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(321), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1911] = 2,
    ACTIONS(77), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(75), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1922] = 2,
    ACTIONS(407), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(405), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1933] = 2,
    ACTIONS(411), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(409), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1944] = 5,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(361), 1,
      sym_Name,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    STATE(108), 1,
      sym__cp,
    STATE(75), 2,
      sym__choice,
      sym_PEReference,
  [1961] = 2,
    ACTIONS(323), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(325), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1972] = 6,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(413), 1,
      sym_Name,
    ACTIONS(415), 1,
      anon_sym_PIPE,
    ACTIONS(417), 1,
      sym__S,
    STATE(109), 1,
      aux_sym_NotationType_repeat1,
    STATE(292), 1,
      sym_PEReference,
  [1991] = 6,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(397), 1,
      anon_sym_SYSTEM,
    ACTIONS(399), 1,
      anon_sym_PUBLIC,
    STATE(237), 1,
      sym_ExternalID,
    STATE(248), 1,
      sym_EntityValue,
  [2010] = 5,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(397), 1,
      anon_sym_SYSTEM,
    ACTIONS(419), 1,
      anon_sym_PUBLIC,
    STATE(335), 1,
      sym_PEReference,
    STATE(245), 2,
      sym_ExternalID,
      sym_PublicID,
  [2027] = 5,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(361), 1,
      sym_Name,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    STATE(179), 1,
      sym__cp,
    STATE(75), 2,
      sym__choice,
      sym_PEReference,
  [2044] = 6,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(415), 1,
      anon_sym_PIPE,
    ACTIONS(417), 1,
      sym__S,
    ACTIONS(421), 1,
      sym_Name,
    STATE(105), 1,
      aux_sym_NotationType_repeat1,
    STATE(305), 1,
      sym_PEReference,
  [2063] = 2,
    ACTIONS(425), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(423), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2074] = 6,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(415), 1,
      anon_sym_PIPE,
    ACTIONS(417), 1,
      sym__S,
    ACTIONS(427), 1,
      sym_Name,
    STATE(97), 1,
      aux_sym_NotationType_repeat1,
    STATE(298), 1,
      sym_PEReference,
  [2093] = 2,
    ACTIONS(431), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(429), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2104] = 6,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(415), 1,
      anon_sym_PIPE,
    ACTIONS(417), 1,
      sym__S,
    ACTIONS(427), 1,
      sym_Name,
    STATE(109), 1,
      aux_sym_NotationType_repeat1,
    STATE(298), 1,
      sym_PEReference,
  [2123] = 2,
    ACTIONS(435), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(433), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2134] = 2,
    ACTIONS(437), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(439), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2144] = 4,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
    ACTIONS(445), 1,
      sym__S,
    STATE(123), 1,
      aux_sym__choice_repeat1,
    ACTIONS(441), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2158] = 4,
    ACTIONS(449), 1,
      anon_sym_PIPE,
    ACTIONS(452), 1,
      sym__S,
    STATE(109), 1,
      aux_sym_NotationType_repeat1,
    ACTIONS(447), 2,
      anon_sym_PERCENT,
      sym_Name,
  [2172] = 2,
    ACTIONS(455), 1,
      anon_sym_LT_BANG,
    ACTIONS(457), 4,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_RBRACK,
  [2182] = 2,
    ACTIONS(459), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(461), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2192] = 2,
    ACTIONS(201), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(203), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2202] = 2,
    ACTIONS(323), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(325), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2212] = 2,
    ACTIONS(319), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(321), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2222] = 2,
    ACTIONS(463), 2,
      anon_sym_GT,
      sym__S,
    ACTIONS(465), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [2232] = 2,
    ACTIONS(467), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(469), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2242] = 2,
    ACTIONS(201), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(203), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [2252] = 2,
    ACTIONS(323), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(325), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [2262] = 2,
    ACTIONS(319), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(321), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [2272] = 5,
    ACTIONS(397), 1,
      anon_sym_SYSTEM,
    ACTIONS(399), 1,
      anon_sym_PUBLIC,
    ACTIONS(471), 1,
      anon_sym_LBRACK,
    ACTIONS(473), 1,
      anon_sym_GT,
    STATE(230), 1,
      sym_ExternalID,
  [2288] = 4,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    ACTIONS(480), 1,
      sym__S,
    STATE(121), 1,
      aux_sym__choice_repeat1,
    ACTIONS(475), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2302] = 2,
    ACTIONS(483), 1,
      anon_sym_LT_BANG,
    ACTIONS(97), 4,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_RBRACK,
  [2312] = 4,
    ACTIONS(445), 1,
      sym__S,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym__choice_repeat1,
    ACTIONS(441), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2326] = 4,
    ACTIONS(445), 1,
      sym__S,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      aux_sym__choice_repeat1,
    ACTIONS(441), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2340] = 2,
    ACTIONS(489), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(491), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2350] = 4,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
    ACTIONS(445), 1,
      sym__S,
    STATE(121), 1,
      aux_sym__choice_repeat1,
    ACTIONS(441), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2364] = 4,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(493), 1,
      sym_Name,
    ACTIONS(495), 1,
      sym__S,
    STATE(101), 1,
      sym_PEReference,
  [2377] = 3,
    ACTIONS(497), 1,
      anon_sym_GT,
    ACTIONS(499), 1,
      sym__S,
    STATE(147), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2388] = 4,
    ACTIONS(501), 1,
      sym_Name,
    ACTIONS(503), 1,
      anon_sym_GT,
    ACTIONS(505), 1,
      anon_sym_SLASH_GT,
    STATE(239), 1,
      sym_Attribute,
  [2401] = 4,
    ACTIONS(507), 1,
      anon_sym_GT,
    ACTIONS(509), 1,
      sym__S,
    ACTIONS(511), 1,
      anon_sym_SLASH_GT,
    STATE(143), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2414] = 4,
    ACTIONS(501), 1,
      sym_Name,
    ACTIONS(507), 1,
      anon_sym_GT,
    ACTIONS(511), 1,
      anon_sym_SLASH_GT,
    STATE(239), 1,
      sym_Attribute,
  [2427] = 4,
    ACTIONS(513), 1,
      anon_sym_GT,
    ACTIONS(515), 1,
      sym__S,
    ACTIONS(517), 1,
      anon_sym_SLASH_GT,
    STATE(130), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2440] = 4,
    ACTIONS(519), 1,
      sym_Name,
    ACTIONS(521), 1,
      anon_sym_xml,
    ACTIONS(523), 1,
      anon_sym_xml_DASHstylesheet,
    ACTIONS(525), 1,
      anon_sym_xml_DASHmodel,
  [2453] = 4,
    ACTIONS(527), 1,
      anon_sym_LT,
    STATE(2), 1,
      sym_STag,
    STATE(62), 1,
      sym_element,
    STATE(135), 1,
      sym_EmptyElemTag,
  [2466] = 1,
    ACTIONS(253), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2473] = 4,
    ACTIONS(351), 1,
      anon_sym_PIPE,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    ACTIONS(375), 1,
      sym__S,
    STATE(155), 1,
      aux_sym_Mixed_repeat1,
  [2486] = 4,
    ACTIONS(527), 1,
      anon_sym_LT,
    STATE(2), 1,
      sym_STag,
    STATE(39), 1,
      sym_element,
    STATE(135), 1,
      sym_EmptyElemTag,
  [2499] = 2,
    ACTIONS(531), 1,
      anon_sym_LT,
    ACTIONS(529), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2508] = 2,
    ACTIONS(535), 1,
      anon_sym_LT,
    ACTIONS(533), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2517] = 4,
    ACTIONS(513), 1,
      anon_sym_GT,
    ACTIONS(537), 1,
      sym__S,
    ACTIONS(539), 1,
      anon_sym_SLASH_GT,
    STATE(180), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2530] = 3,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(541), 1,
      sym__S,
    STATE(110), 2,
      sym__DeclSep,
      sym_PEReference,
  [2541] = 4,
    ACTIONS(501), 1,
      sym_Name,
    ACTIONS(503), 1,
      anon_sym_GT,
    ACTIONS(543), 1,
      anon_sym_SLASH_GT,
    STATE(239), 1,
      sym_Attribute,
  [2554] = 3,
    ACTIONS(547), 1,
      sym__S,
    STATE(143), 1,
      aux_sym_EmptyElemTag_repeat1,
    ACTIONS(545), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
  [2565] = 1,
    ACTIONS(229), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2572] = 1,
    ACTIONS(225), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2579] = 4,
    ACTIONS(550), 1,
      sym__S,
    ACTIONS(552), 1,
      anon_sym_QMARK_GT,
    STATE(225), 1,
      sym__EncodingDecl,
    STATE(275), 1,
      sym__SDDecl,
  [2592] = 3,
    ACTIONS(554), 1,
      anon_sym_GT,
    ACTIONS(556), 1,
      sym__S,
    STATE(147), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2603] = 4,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(559), 1,
      sym_Name,
    ACTIONS(561), 1,
      anon_sym_GT,
    STATE(395), 1,
      sym_PEReference,
  [2616] = 2,
    ACTIONS(565), 1,
      anon_sym_LT,
    ACTIONS(563), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2625] = 2,
    ACTIONS(569), 1,
      anon_sym_LT,
    ACTIONS(567), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2634] = 1,
    ACTIONS(571), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [2641] = 4,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(573), 1,
      sym_Name,
    ACTIONS(575), 1,
      sym__S,
    STATE(206), 1,
      sym_PEReference,
  [2654] = 2,
    ACTIONS(577), 1,
      sym__S,
    ACTIONS(447), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [2663] = 1,
    ACTIONS(447), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [2670] = 4,
    ACTIONS(351), 1,
      anon_sym_PIPE,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    ACTIONS(582), 1,
      sym__S,
    STATE(166), 1,
      aux_sym_Mixed_repeat1,
  [2683] = 4,
    ACTIONS(351), 1,
      anon_sym_PIPE,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
    ACTIONS(359), 1,
      sym__S,
    STATE(167), 1,
      aux_sym_Mixed_repeat1,
  [2696] = 2,
    ACTIONS(586), 1,
      anon_sym_LT,
    ACTIONS(584), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2705] = 2,
    ACTIONS(590), 1,
      sym__S,
    ACTIONS(588), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [2714] = 2,
    ACTIONS(595), 1,
      anon_sym_LT,
    ACTIONS(593), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2723] = 1,
    ACTIONS(597), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2730] = 1,
    ACTIONS(195), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2737] = 3,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(599), 1,
      sym__S,
    STATE(122), 2,
      sym__DeclSep,
      sym_PEReference,
  [2748] = 4,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(497), 1,
      anon_sym_GT,
    ACTIONS(559), 1,
      sym_Name,
    STATE(395), 1,
      sym_PEReference,
  [2761] = 4,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(601), 1,
      sym_Name,
    ACTIONS(603), 1,
      sym__S,
    STATE(192), 1,
      sym_PEReference,
  [2774] = 4,
    ACTIONS(605), 1,
      anon_sym_ELEMENT,
    ACTIONS(607), 1,
      anon_sym_ATTLIST,
    ACTIONS(609), 1,
      anon_sym_NOTATION,
    ACTIONS(611), 1,
      anon_sym_ENTITY,
  [2787] = 4,
    ACTIONS(613), 1,
      anon_sym_PIPE,
    ACTIONS(616), 1,
      anon_sym_RPAREN,
    ACTIONS(618), 1,
      sym__S,
    STATE(166), 1,
      aux_sym_Mixed_repeat1,
  [2800] = 4,
    ACTIONS(351), 1,
      anon_sym_PIPE,
    ACTIONS(582), 1,
      sym__S,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      aux_sym_Mixed_repeat1,
  [2813] = 1,
    ACTIONS(199), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2820] = 2,
    ACTIONS(625), 1,
      anon_sym_LT,
    ACTIONS(623), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2829] = 1,
    ACTIONS(307), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2836] = 1,
    ACTIONS(478), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2843] = 2,
    ACTIONS(629), 1,
      anon_sym_LT,
    ACTIONS(627), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2852] = 4,
    ACTIONS(501), 1,
      sym_Name,
    ACTIONS(507), 1,
      anon_sym_GT,
    ACTIONS(631), 1,
      anon_sym_SLASH_GT,
    STATE(239), 1,
      sym_Attribute,
  [2865] = 4,
    ACTIONS(633), 1,
      anon_sym_PIPE,
    ACTIONS(635), 1,
      anon_sym_RPAREN,
    ACTIONS(637), 1,
      sym__S,
    STATE(184), 1,
      aux_sym_Enumeration_repeat1,
  [2878] = 4,
    ACTIONS(639), 1,
      anon_sym_PIPE,
    ACTIONS(642), 1,
      anon_sym_RPAREN,
    ACTIONS(644), 1,
      sym__S,
    STATE(175), 1,
      aux_sym_Enumeration_repeat1,
  [2891] = 3,
    ACTIONS(647), 1,
      anon_sym_GT,
    ACTIONS(649), 1,
      sym__S,
    STATE(128), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2902] = 1,
    ACTIONS(651), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2909] = 4,
    ACTIONS(633), 1,
      anon_sym_PIPE,
    ACTIONS(653), 1,
      anon_sym_RPAREN,
    ACTIONS(655), 1,
      sym__S,
    STATE(175), 1,
      aux_sym_Enumeration_repeat1,
  [2922] = 1,
    ACTIONS(657), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2929] = 4,
    ACTIONS(507), 1,
      anon_sym_GT,
    ACTIONS(631), 1,
      anon_sym_SLASH_GT,
    ACTIONS(659), 1,
      sym__S,
    STATE(143), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2942] = 4,
    ACTIONS(633), 1,
      anon_sym_PIPE,
    ACTIONS(661), 1,
      anon_sym_RPAREN,
    ACTIONS(663), 1,
      sym__S,
    STATE(178), 1,
      aux_sym_Enumeration_repeat1,
  [2955] = 1,
    ACTIONS(303), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2962] = 1,
    ACTIONS(191), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2969] = 4,
    ACTIONS(633), 1,
      anon_sym_PIPE,
    ACTIONS(661), 1,
      anon_sym_RPAREN,
    ACTIONS(663), 1,
      sym__S,
    STATE(175), 1,
      aux_sym_Enumeration_repeat1,
  [2982] = 1,
    ACTIONS(665), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2988] = 2,
    ACTIONS(667), 1,
      sym__S,
    ACTIONS(665), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [2996] = 1,
    ACTIONS(670), 3,
      anon_sym_LBRACK,
      anon_sym_GT,
      sym__S,
  [3002] = 3,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(672), 1,
      sym_Name,
    STATE(186), 1,
      sym_PEReference,
  [3012] = 3,
    ACTIONS(381), 1,
      anon_sym_DQUOTE,
    ACTIONS(383), 1,
      anon_sym_SQUOTE,
    STATE(241), 1,
      sym_AttValue,
  [3022] = 1,
    ACTIONS(674), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3028] = 1,
    ACTIONS(676), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3034] = 2,
    ACTIONS(678), 1,
      sym__S,
    ACTIONS(674), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [3042] = 1,
    ACTIONS(642), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3048] = 3,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(681), 1,
      sym_Name,
    STATE(325), 1,
      sym_PEReference,
  [3058] = 3,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(683), 1,
      sym_Name,
    STATE(103), 1,
      sym_PEReference,
  [3068] = 3,
    ACTIONS(381), 1,
      anon_sym_DQUOTE,
    ACTIONS(383), 1,
      anon_sym_SQUOTE,
    STATE(303), 1,
      sym_AttValue,
  [3078] = 3,
    ACTIONS(685), 1,
      anon_sym_DQUOTE,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    STATE(247), 1,
      sym_PseudoAttValue,
  [3088] = 3,
    ACTIONS(689), 1,
      sym_Name,
    ACTIONS(691), 1,
      anon_sym_PERCENT,
    STATE(353), 1,
      sym_PEReference,
  [3098] = 3,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(693), 1,
      sym_Name,
    STATE(342), 1,
      sym_PEReference,
  [3108] = 3,
    ACTIONS(695), 1,
      anon_sym_LBRACK,
    ACTIONS(697), 1,
      anon_sym_GT,
    ACTIONS(699), 1,
      sym__S,
  [3118] = 3,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(701), 1,
      sym_Name,
    STATE(176), 1,
      sym_PEReference,
  [3128] = 2,
    ACTIONS(705), 1,
      anon_sym_STAR,
    ACTIONS(703), 2,
      anon_sym_GT,
      sym__S,
  [3136] = 3,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(707), 1,
      sym_Name,
    STATE(341), 1,
      sym_PEReference,
  [3146] = 3,
    ACTIONS(709), 1,
      anon_sym_DQUOTE,
    ACTIONS(711), 1,
      anon_sym_SQUOTE,
    STATE(219), 1,
      sym_SystemLiteral,
  [3156] = 1,
    ACTIONS(713), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3162] = 2,
    ACTIONS(715), 1,
      sym__S,
    ACTIONS(616), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [3170] = 3,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(601), 1,
      sym_Name,
    STATE(192), 1,
      sym_PEReference,
  [3180] = 3,
    ACTIONS(718), 1,
      sym__S,
    ACTIONS(720), 1,
      anon_sym_EQ,
    STATE(265), 1,
      sym__Eq,
  [3190] = 3,
    ACTIONS(722), 1,
      anon_sym_QMARK_GT,
    ACTIONS(724), 1,
      anon_sym_encoding,
    ACTIONS(726), 1,
      anon_sym_standalone,
  [3200] = 3,
    ACTIONS(718), 1,
      sym__S,
    ACTIONS(720), 1,
      anon_sym_EQ,
    STATE(197), 1,
      sym__Eq,
  [3210] = 1,
    ACTIONS(728), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3216] = 1,
    ACTIONS(730), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3222] = 3,
    ACTIONS(732), 1,
      sym__S,
    ACTIONS(734), 1,
      anon_sym_QMARK_GT,
    STATE(224), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3232] = 3,
    ACTIONS(736), 1,
      sym_Name,
    ACTIONS(738), 1,
      anon_sym_QMARK_GT,
    STATE(272), 1,
      sym_PseudoAtt,
  [3242] = 3,
    ACTIONS(718), 1,
      sym__S,
    ACTIONS(720), 1,
      anon_sym_EQ,
    STATE(289), 1,
      sym__Eq,
  [3252] = 3,
    ACTIONS(734), 1,
      anon_sym_QMARK_GT,
    ACTIONS(736), 1,
      sym_Name,
    STATE(272), 1,
      sym_PseudoAtt,
  [3262] = 1,
    ACTIONS(740), 3,
      anon_sym_LBRACK,
      anon_sym_GT,
      sym__S,
  [3268] = 1,
    ACTIONS(742), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3274] = 1,
    ACTIONS(744), 3,
      anon_sym_LBRACK,
      anon_sym_GT,
      sym__S,
  [3280] = 3,
    ACTIONS(746), 1,
      sym__S,
    ACTIONS(748), 1,
      anon_sym_QMARK_GT,
    STATE(224), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3290] = 2,
    ACTIONS(752), 1,
      anon_sym_STAR,
    ACTIONS(750), 2,
      anon_sym_GT,
      sym__S,
  [3298] = 3,
    ACTIONS(736), 1,
      sym_Name,
    ACTIONS(748), 1,
      anon_sym_QMARK_GT,
    STATE(272), 1,
      sym_PseudoAtt,
  [3308] = 3,
    ACTIONS(718), 1,
      sym__S,
    ACTIONS(720), 1,
      anon_sym_EQ,
    STATE(284), 1,
      sym__Eq,
  [3318] = 3,
    ACTIONS(754), 1,
      sym__S,
    ACTIONS(757), 1,
      anon_sym_QMARK_GT,
    STATE(224), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3328] = 3,
    ACTIONS(722), 1,
      anon_sym_QMARK_GT,
    ACTIONS(759), 1,
      sym__S,
    STATE(290), 1,
      sym__SDDecl,
  [3338] = 3,
    ACTIONS(736), 1,
      sym_Name,
    ACTIONS(761), 1,
      anon_sym_QMARK_GT,
    STATE(272), 1,
      sym_PseudoAtt,
  [3348] = 3,
    ACTIONS(718), 1,
      sym__S,
    ACTIONS(720), 1,
      anon_sym_EQ,
    STATE(189), 1,
      sym__Eq,
  [3358] = 3,
    ACTIONS(763), 1,
      anon_sym_DQUOTE,
    ACTIONS(765), 1,
      anon_sym_SQUOTE,
    STATE(340), 1,
      sym_PubidLiteral,
  [3368] = 3,
    ACTIONS(709), 1,
      anon_sym_DQUOTE,
    ACTIONS(711), 1,
      anon_sym_SQUOTE,
    STATE(187), 1,
      sym_SystemLiteral,
  [3378] = 3,
    ACTIONS(767), 1,
      anon_sym_LBRACK,
    ACTIONS(769), 1,
      anon_sym_GT,
    ACTIONS(771), 1,
      sym__S,
  [3388] = 2,
    ACTIONS(775), 1,
      sym__S,
    ACTIONS(773), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3396] = 3,
    ACTIONS(519), 1,
      sym_Name,
    ACTIONS(523), 1,
      anon_sym_xml_DASHstylesheet,
    ACTIONS(525), 1,
      anon_sym_xml_DASHmodel,
  [3406] = 3,
    ACTIONS(187), 1,
      anon_sym_PERCENT,
    ACTIONS(559), 1,
      sym_Name,
    STATE(395), 1,
      sym_PEReference,
  [3416] = 2,
    ACTIONS(779), 1,
      sym__S,
    ACTIONS(777), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3424] = 3,
    ACTIONS(763), 1,
      anon_sym_DQUOTE,
    ACTIONS(765), 1,
      anon_sym_SQUOTE,
    STATE(242), 1,
      sym_PubidLiteral,
  [3434] = 3,
    ACTIONS(763), 1,
      anon_sym_DQUOTE,
    ACTIONS(765), 1,
      anon_sym_SQUOTE,
    STATE(285), 1,
      sym_PubidLiteral,
  [3444] = 3,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(783), 1,
      sym__S,
    STATE(263), 1,
      sym_NDataDecl,
  [3454] = 3,
    ACTIONS(785), 1,
      sym__S,
    ACTIONS(787), 1,
      anon_sym_QMARK_GT,
    STATE(213), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3464] = 1,
    ACTIONS(545), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3470] = 3,
    ACTIONS(789), 1,
      sym__S,
    ACTIONS(791), 1,
      anon_sym_QMARK_GT,
    STATE(220), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3480] = 1,
    ACTIONS(793), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3486] = 2,
    ACTIONS(795), 1,
      anon_sym_GT,
    ACTIONS(797), 1,
      sym__S,
  [3493] = 1,
    ACTIONS(799), 2,
      anon_sym_GT,
      sym__S,
  [3498] = 2,
    ACTIONS(801), 1,
      anon_sym_GT,
    ACTIONS(803), 1,
      sym__S,
  [3505] = 2,
    ACTIONS(805), 1,
      anon_sym_GT,
    ACTIONS(807), 1,
      sym__S,
  [3512] = 2,
    ACTIONS(31), 1,
      anon_sym_LT_SLASH,
    STATE(32), 1,
      sym_ETag,
  [3519] = 1,
    ACTIONS(809), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3524] = 2,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(811), 1,
      sym__S,
  [3531] = 2,
    ACTIONS(813), 1,
      sym__S,
    ACTIONS(815), 1,
      anon_sym_QMARK_GT,
  [3538] = 1,
    ACTIONS(773), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3543] = 1,
    ACTIONS(817), 2,
      anon_sym_PERCENT,
      sym__S,
  [3548] = 2,
    ACTIONS(819), 1,
      sym__S,
    ACTIONS(821), 1,
      anon_sym_QMARK_GT,
  [3555] = 1,
    ACTIONS(823), 2,
      anon_sym_GT,
      sym__S,
  [3560] = 1,
    ACTIONS(825), 2,
      anon_sym_PERCENT,
      sym__S,
  [3565] = 1,
    ACTIONS(827), 2,
      anon_sym_PERCENT,
      sym__S,
  [3570] = 2,
    ACTIONS(829), 1,
      sym__S,
    STATE(146), 1,
      sym__VersionInfo,
  [3577] = 1,
    ACTIONS(831), 2,
      anon_sym_GT,
      sym__S,
  [3582] = 1,
    ACTIONS(833), 2,
      anon_sym_PERCENT,
      sym__S,
  [3587] = 2,
    ACTIONS(835), 1,
      anon_sym_GT,
    ACTIONS(837), 1,
      sym__S,
  [3594] = 1,
    ACTIONS(839), 2,
      anon_sym_PERCENT,
      sym__S,
  [3599] = 2,
    ACTIONS(25), 1,
      anon_sym_LT_SLASH,
    STATE(168), 1,
      sym_ETag,
  [3606] = 2,
    ACTIONS(841), 1,
      anon_sym_GT,
    ACTIONS(843), 1,
      anon_sym_NDATA,
  [3613] = 2,
    ACTIONS(841), 1,
      anon_sym_GT,
    ACTIONS(845), 1,
      sym__S,
  [3620] = 1,
    ACTIONS(847), 2,
      anon_sym_PERCENT,
      sym__S,
  [3625] = 2,
    ACTIONS(849), 1,
      anon_sym_DQUOTE,
    ACTIONS(851), 1,
      anon_sym_SQUOTE,
  [3632] = 2,
    ACTIONS(853), 1,
      anon_sym_GT,
    ACTIONS(855), 1,
      sym__S,
  [3639] = 1,
    ACTIONS(857), 2,
      anon_sym_GT,
      sym__S,
  [3644] = 2,
    ACTIONS(752), 1,
      anon_sym_RPAREN,
    ACTIONS(859), 1,
      anon_sym_PIPE,
  [3651] = 2,
    ACTIONS(861), 1,
      anon_sym_GT,
    ACTIONS(863), 1,
      sym__S,
  [3658] = 2,
    ACTIONS(835), 1,
      anon_sym_GT,
    ACTIONS(865), 1,
      anon_sym_LBRACK,
  [3665] = 1,
    ACTIONS(867), 2,
      anon_sym_GT,
      sym__S,
  [3670] = 1,
    ACTIONS(757), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3675] = 1,
    ACTIONS(869), 2,
      anon_sym_GT,
      sym__S,
  [3680] = 2,
    ACTIONS(726), 1,
      anon_sym_standalone,
    ACTIONS(871), 1,
      anon_sym_QMARK_GT,
  [3687] = 2,
    ACTIONS(722), 1,
      anon_sym_QMARK_GT,
    ACTIONS(873), 1,
      sym__S,
  [3694] = 1,
    ACTIONS(875), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [3699] = 1,
    ACTIONS(877), 2,
      anon_sym_GT,
      sym__S,
  [3704] = 1,
    ACTIONS(879), 2,
      anon_sym_PERCENT,
      sym__S,
  [3709] = 2,
    ACTIONS(881), 1,
      sym__S,
    ACTIONS(883), 1,
      sym_Nmtoken,
  [3716] = 1,
    ACTIONS(885), 2,
      anon_sym_GT,
      sym__S,
  [3721] = 1,
    ACTIONS(887), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3726] = 2,
    ACTIONS(889), 1,
      anon_sym_GT,
    ACTIONS(891), 1,
      sym__S,
  [3733] = 1,
    ACTIONS(893), 2,
      anon_sym_GT,
      sym__S,
  [3738] = 2,
    ACTIONS(895), 1,
      anon_sym_DQUOTE,
    ACTIONS(897), 1,
      anon_sym_SQUOTE,
  [3745] = 1,
    ACTIONS(795), 2,
      anon_sym_GT,
      sym__S,
  [3750] = 1,
    ACTIONS(899), 2,
      anon_sym_PERCENT,
      sym__S,
  [3755] = 2,
    ACTIONS(901), 1,
      anon_sym_GT,
    ACTIONS(903), 1,
      sym__S,
  [3762] = 1,
    ACTIONS(905), 2,
      anon_sym_GT,
      sym__S,
  [3767] = 2,
    ACTIONS(907), 1,
      anon_sym_DQUOTE,
    ACTIONS(909), 1,
      anon_sym_SQUOTE,
  [3774] = 2,
    ACTIONS(871), 1,
      anon_sym_QMARK_GT,
    ACTIONS(911), 1,
      sym__S,
  [3781] = 1,
    ACTIONS(913), 2,
      anon_sym_PERCENT,
      sym__S,
  [3786] = 2,
    ACTIONS(915), 1,
      anon_sym_RPAREN,
    ACTIONS(917), 1,
      sym__S,
  [3793] = 1,
    ACTIONS(919), 2,
      anon_sym_GT,
      sym__S,
  [3798] = 1,
    ACTIONS(921), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3803] = 1,
    ACTIONS(923), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3808] = 1,
    ACTIONS(703), 2,
      anon_sym_GT,
      sym__S,
  [3813] = 1,
    ACTIONS(925), 2,
      anon_sym_GT,
      sym__S,
  [3818] = 2,
    ACTIONS(927), 1,
      anon_sym_RPAREN,
    ACTIONS(929), 1,
      sym__S,
  [3825] = 1,
    ACTIONS(931), 2,
      anon_sym_yes,
      anon_sym_no,
  [3830] = 2,
    ACTIONS(933), 1,
      anon_sym_GT,
    ACTIONS(935), 1,
      sym__S,
  [3837] = 1,
    ACTIONS(937), 2,
      anon_sym_GT,
      sym__S,
  [3842] = 2,
    ACTIONS(705), 1,
      anon_sym_RPAREN,
    ACTIONS(859), 1,
      anon_sym_PIPE,
  [3849] = 1,
    ACTIONS(939), 2,
      anon_sym_GT,
      sym__S,
  [3854] = 1,
    ACTIONS(941), 2,
      anon_sym_yes,
      anon_sym_no,
  [3859] = 2,
    ACTIONS(943), 1,
      anon_sym_RPAREN,
    ACTIONS(945), 1,
      sym__S,
  [3866] = 1,
    ACTIONS(947), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3871] = 1,
    ACTIONS(949), 2,
      anon_sym_PERCENT,
      sym__S,
  [3876] = 1,
    ACTIONS(951), 2,
      anon_sym_PERCENT,
      sym__S,
  [3881] = 2,
    ACTIONS(953), 1,
      anon_sym_GT,
    ACTIONS(955), 1,
      sym__S,
  [3888] = 2,
    ACTIONS(957), 1,
      anon_sym_PIPE,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
  [3895] = 1,
    ACTIONS(961), 2,
      anon_sym_GT,
      sym__S,
  [3900] = 2,
    ACTIONS(963), 1,
      anon_sym_GT,
    ACTIONS(965), 1,
      sym__S,
  [3907] = 2,
    ACTIONS(967), 1,
      sym__S,
    ACTIONS(969), 1,
      sym_Nmtoken,
  [3914] = 1,
    ACTIONS(971), 2,
      anon_sym_PERCENT,
      sym__S,
  [3919] = 2,
    ACTIONS(653), 1,
      anon_sym_RPAREN,
    ACTIONS(957), 1,
      anon_sym_PIPE,
  [3926] = 2,
    ACTIONS(973), 1,
      sym_Name,
    ACTIONS(975), 1,
      sym__S,
  [3933] = 1,
    ACTIONS(977), 2,
      anon_sym_PERCENT,
      sym__S,
  [3938] = 1,
    ACTIONS(979), 2,
      anon_sym_GT,
      sym__S,
  [3943] = 1,
    ACTIONS(981), 2,
      anon_sym_GT,
      sym__S,
  [3948] = 2,
    ACTIONS(736), 1,
      sym_Name,
    STATE(272), 1,
      sym_PseudoAtt,
  [3955] = 1,
    ACTIONS(983), 2,
      anon_sym_GT,
      sym__S,
  [3960] = 2,
    ACTIONS(501), 1,
      sym_Name,
    STATE(239), 1,
      sym_Attribute,
  [3967] = 1,
    ACTIONS(985), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3972] = 1,
    ACTIONS(987), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3977] = 1,
    ACTIONS(989), 2,
      anon_sym_GT,
      sym__S,
  [3982] = 1,
    ACTIONS(991), 2,
      anon_sym_PERCENT,
      sym__S,
  [3987] = 2,
    ACTIONS(993), 1,
      sym__S,
    ACTIONS(995), 1,
      sym_Nmtoken,
  [3994] = 1,
    ACTIONS(997), 2,
      anon_sym_GT,
      sym__S,
  [3999] = 2,
    ACTIONS(661), 1,
      anon_sym_RPAREN,
    ACTIONS(957), 1,
      anon_sym_PIPE,
  [4006] = 1,
    ACTIONS(999), 2,
      anon_sym_GT,
      sym__S,
  [4011] = 1,
    ACTIONS(1001), 1,
      sym__S,
  [4015] = 1,
    ACTIONS(1003), 1,
      sym_Name,
  [4019] = 1,
    ACTIONS(1005), 1,
      sym__S,
  [4023] = 1,
    ACTIONS(1007), 1,
      anon_sym_DQUOTE,
  [4027] = 1,
    ACTIONS(1009), 1,
      sym__S,
  [4031] = 1,
    ACTIONS(1011), 1,
      anon_sym_DQUOTE,
  [4035] = 1,
    ACTIONS(1011), 1,
      anon_sym_SQUOTE,
  [4039] = 1,
    ACTIONS(1013), 1,
      anon_sym_SEMI,
  [4043] = 1,
    ACTIONS(1015), 1,
      anon_sym_STAR,
  [4047] = 1,
    ACTIONS(797), 1,
      sym__S,
  [4051] = 1,
    ACTIONS(1017), 1,
      sym__S,
  [4055] = 1,
    ACTIONS(1019), 1,
      sym__S,
  [4059] = 1,
    ACTIONS(1021), 1,
      aux_sym_PubidLiteral_token2,
  [4063] = 1,
    ACTIONS(969), 1,
      sym_Nmtoken,
  [4067] = 1,
    ACTIONS(1023), 1,
      aux_sym_PubidLiteral_token1,
  [4071] = 1,
    ACTIONS(1025), 1,
      anon_sym_GT,
  [4075] = 1,
    ACTIONS(1027), 1,
      aux_sym_SystemLiteral_token2,
  [4079] = 1,
    ACTIONS(1029), 1,
      aux_sym_SystemLiteral_token1,
  [4083] = 1,
    ACTIONS(1031), 1,
      anon_sym_SEMI,
  [4087] = 1,
    ACTIONS(963), 1,
      anon_sym_GT,
  [4091] = 1,
    ACTIONS(1033), 1,
      anon_sym_SEMI,
  [4095] = 1,
    ACTIONS(1035), 1,
      anon_sym_LPAREN,
  [4099] = 1,
    ACTIONS(1037), 1,
      sym__S,
  [4103] = 1,
    ACTIONS(1039), 1,
      sym_Nmtoken,
  [4107] = 1,
    ACTIONS(1041), 1,
      sym_Nmtoken,
  [4111] = 1,
    ACTIONS(957), 1,
      anon_sym_PIPE,
  [4115] = 1,
    ACTIONS(1043), 1,
      anon_sym_RBRACK_RBRACK_GT,
  [4119] = 1,
    ACTIONS(933), 1,
      anon_sym_GT,
  [4123] = 1,
    ACTIONS(1045), 1,
      anon_sym_PIPE,
  [4127] = 1,
    ACTIONS(1047), 1,
      anon_sym_DQUOTE,
  [4131] = 1,
    ACTIONS(1047), 1,
      anon_sym_SQUOTE,
  [4135] = 1,
    ACTIONS(1049), 1,
      anon_sym_QMARK_GT,
  [4139] = 1,
    ACTIONS(1051), 1,
      anon_sym_DQUOTE,
  [4143] = 1,
    ACTIONS(1051), 1,
      anon_sym_SQUOTE,
  [4147] = 1,
    ACTIONS(859), 1,
      anon_sym_PIPE,
  [4151] = 1,
    ACTIONS(1053), 1,
      sym_EncName,
  [4155] = 1,
    ACTIONS(1055), 1,
      sym_EncName,
  [4159] = 1,
    ACTIONS(1057), 1,
      anon_sym_SQUOTE,
  [4163] = 1,
    ACTIONS(705), 1,
      anon_sym_STAR,
  [4167] = 1,
    ACTIONS(927), 1,
      anon_sym_RPAREN,
  [4171] = 1,
    ACTIONS(1057), 1,
      anon_sym_DQUOTE,
  [4175] = 1,
    ACTIONS(871), 1,
      anon_sym_QMARK_GT,
  [4179] = 1,
    ACTIONS(915), 1,
      anon_sym_RPAREN,
  [4183] = 1,
    ACTIONS(1059), 1,
      anon_sym_GT,
  [4187] = 1,
    ACTIONS(1061), 1,
      sym__S,
  [4191] = 1,
    ACTIONS(1063), 1,
      sym__S,
  [4195] = 1,
    ACTIONS(1065), 1,
      anon_sym_RPAREN,
  [4199] = 1,
    ACTIONS(1067), 1,
      anon_sym_DOCTYPE,
  [4203] = 1,
    ACTIONS(1069), 1,
      sym_Name,
  [4207] = 1,
    ACTIONS(1071), 1,
      anon_sym_version,
  [4211] = 1,
    ACTIONS(1073), 1,
      aux_sym_PI_token1,
  [4215] = 1,
    ACTIONS(1075), 1,
      sym_Name,
  [4219] = 1,
    ACTIONS(861), 1,
      anon_sym_GT,
  [4223] = 1,
    ACTIONS(1077), 1,
      sym__S,
  [4227] = 1,
    ACTIONS(1079), 1,
      sym_CData,
  [4231] = 1,
    ACTIONS(1007), 1,
      anon_sym_SQUOTE,
  [4235] = 1,
    ACTIONS(1081), 1,
      sym_Name,
  [4239] = 1,
    ACTIONS(1083), 1,
      aux_sym_CharRef_token2,
  [4243] = 1,
    ACTIONS(1083), 1,
      aux_sym_CharRef_token1,
  [4247] = 1,
    ACTIONS(1085), 1,
      sym_Name,
  [4251] = 1,
    ACTIONS(841), 1,
      anon_sym_GT,
  [4255] = 1,
    ACTIONS(973), 1,
      sym_Name,
  [4259] = 1,
    ACTIONS(1087), 1,
      sym__S,
  [4263] = 1,
    ACTIONS(1089), 1,
      sym__S,
  [4267] = 1,
    ACTIONS(1091), 1,
      sym__S,
  [4271] = 1,
    ACTIONS(1093), 1,
      anon_sym_GT,
  [4275] = 1,
    ACTIONS(1095), 1,
      sym__S,
  [4279] = 1,
    ACTIONS(1097), 1,
      sym__S,
  [4283] = 1,
    ACTIONS(1099), 1,
      sym__S,
  [4287] = 1,
    ACTIONS(1101), 1,
      anon_sym_GT,
  [4291] = 1,
    ACTIONS(1103), 1,
      ts_builtin_sym_end,
  [4295] = 1,
    ACTIONS(1105), 1,
      sym_Name,
  [4299] = 1,
    ACTIONS(1107), 1,
      sym_VersionNum,
  [4303] = 1,
    ACTIONS(1109), 1,
      anon_sym_GT,
  [4307] = 1,
    ACTIONS(1111), 1,
      anon_sym_GT,
  [4311] = 1,
    ACTIONS(1113), 1,
      sym_Name,
  [4315] = 1,
    ACTIONS(1115), 1,
      anon_sym_EQ,
  [4319] = 1,
    ACTIONS(1117), 1,
      sym_VersionNum,
  [4323] = 1,
    ACTIONS(1119), 1,
      sym__S,
  [4327] = 1,
    ACTIONS(1121), 1,
      anon_sym_SEMI,
  [4331] = 1,
    ACTIONS(1123), 1,
      anon_sym_SEMI,
  [4335] = 1,
    ACTIONS(1125), 1,
      sym__S,
  [4339] = 1,
    ACTIONS(1127), 1,
      anon_sym_QMARK_GT,
  [4343] = 1,
    ACTIONS(1129), 1,
      anon_sym_QMARK_GT,
  [4347] = 1,
    ACTIONS(1131), 1,
      anon_sym_GT,
  [4351] = 1,
    ACTIONS(1133), 1,
      anon_sym_SEMI,
  [4355] = 1,
    ACTIONS(1135), 1,
      anon_sym_SEMI,
  [4359] = 1,
    ACTIONS(1137), 1,
      anon_sym_SEMI,
  [4363] = 1,
    ACTIONS(1139), 1,
      anon_sym_SEMI,
  [4367] = 1,
    ACTIONS(1141), 1,
      anon_sym_SEMI,
  [4371] = 1,
    ACTIONS(1143), 1,
      anon_sym_SEMI,
  [4375] = 1,
    ACTIONS(1145), 1,
      anon_sym_SEMI,
  [4379] = 1,
    ACTIONS(1147), 1,
      anon_sym_SEMI,
  [4383] = 1,
    ACTIONS(1149), 1,
      sym_Name,
  [4387] = 1,
    ACTIONS(1151), 1,
      sym_Name,
  [4391] = 1,
    ACTIONS(1153), 1,
      aux_sym_CharRef_token1,
  [4395] = 1,
    ACTIONS(1153), 1,
      aux_sym_CharRef_token2,
  [4399] = 1,
    ACTIONS(1155), 1,
      sym_Name,
  [4403] = 1,
    ACTIONS(1157), 1,
      aux_sym_PI_token1,
  [4407] = 1,
    ACTIONS(1159), 1,
      sym_Name,
  [4411] = 1,
    ACTIONS(1161), 1,
      sym_Name,
  [4415] = 1,
    ACTIONS(1163), 1,
      aux_sym_CharRef_token1,
  [4419] = 1,
    ACTIONS(1163), 1,
      aux_sym_CharRef_token2,
  [4423] = 1,
    ACTIONS(1165), 1,
      sym_Name,
  [4427] = 1,
    ACTIONS(1167), 1,
      sym_Name,
  [4431] = 1,
    ACTIONS(1169), 1,
      aux_sym_CharRef_token1,
  [4435] = 1,
    ACTIONS(1169), 1,
      aux_sym_CharRef_token2,
  [4439] = 1,
    ACTIONS(1171), 1,
      sym_Name,
  [4443] = 1,
    ACTIONS(1173), 1,
      aux_sym_CharRef_token1,
  [4447] = 1,
    ACTIONS(1173), 1,
      aux_sym_CharRef_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 147,
  [SMALL_STATE(6)] = 192,
  [SMALL_STATE(7)] = 231,
  [SMALL_STATE(8)] = 264,
  [SMALL_STATE(9)] = 283,
  [SMALL_STATE(10)] = 316,
  [SMALL_STATE(11)] = 349,
  [SMALL_STATE(12)] = 382,
  [SMALL_STATE(13)] = 415,
  [SMALL_STATE(14)] = 445,
  [SMALL_STATE(15)] = 475,
  [SMALL_STATE(16)] = 505,
  [SMALL_STATE(17)] = 535,
  [SMALL_STATE(18)] = 559,
  [SMALL_STATE(19)] = 583,
  [SMALL_STATE(20)] = 611,
  [SMALL_STATE(21)] = 639,
  [SMALL_STATE(22)] = 667,
  [SMALL_STATE(23)] = 695,
  [SMALL_STATE(24)] = 723,
  [SMALL_STATE(25)] = 747,
  [SMALL_STATE(26)] = 771,
  [SMALL_STATE(27)] = 793,
  [SMALL_STATE(28)] = 821,
  [SMALL_STATE(29)] = 846,
  [SMALL_STATE(30)] = 860,
  [SMALL_STATE(31)] = 878,
  [SMALL_STATE(32)] = 892,
  [SMALL_STATE(33)] = 906,
  [SMALL_STATE(34)] = 920,
  [SMALL_STATE(35)] = 934,
  [SMALL_STATE(36)] = 948,
  [SMALL_STATE(37)] = 972,
  [SMALL_STATE(38)] = 986,
  [SMALL_STATE(39)] = 1000,
  [SMALL_STATE(40)] = 1018,
  [SMALL_STATE(41)] = 1036,
  [SMALL_STATE(42)] = 1060,
  [SMALL_STATE(43)] = 1074,
  [SMALL_STATE(44)] = 1088,
  [SMALL_STATE(45)] = 1102,
  [SMALL_STATE(46)] = 1120,
  [SMALL_STATE(47)] = 1144,
  [SMALL_STATE(48)] = 1168,
  [SMALL_STATE(49)] = 1192,
  [SMALL_STATE(50)] = 1210,
  [SMALL_STATE(51)] = 1232,
  [SMALL_STATE(52)] = 1246,
  [SMALL_STATE(53)] = 1260,
  [SMALL_STATE(54)] = 1274,
  [SMALL_STATE(55)] = 1298,
  [SMALL_STATE(56)] = 1316,
  [SMALL_STATE(57)] = 1334,
  [SMALL_STATE(58)] = 1358,
  [SMALL_STATE(59)] = 1372,
  [SMALL_STATE(60)] = 1386,
  [SMALL_STATE(61)] = 1400,
  [SMALL_STATE(62)] = 1418,
  [SMALL_STATE(63)] = 1436,
  [SMALL_STATE(64)] = 1454,
  [SMALL_STATE(65)] = 1472,
  [SMALL_STATE(66)] = 1490,
  [SMALL_STATE(67)] = 1514,
  [SMALL_STATE(68)] = 1538,
  [SMALL_STATE(69)] = 1562,
  [SMALL_STATE(70)] = 1573,
  [SMALL_STATE(71)] = 1594,
  [SMALL_STATE(72)] = 1619,
  [SMALL_STATE(73)] = 1630,
  [SMALL_STATE(74)] = 1641,
  [SMALL_STATE(75)] = 1662,
  [SMALL_STATE(76)] = 1674,
  [SMALL_STATE(77)] = 1686,
  [SMALL_STATE(78)] = 1698,
  [SMALL_STATE(79)] = 1718,
  [SMALL_STATE(80)] = 1738,
  [SMALL_STATE(81)] = 1758,
  [SMALL_STATE(82)] = 1780,
  [SMALL_STATE(83)] = 1800,
  [SMALL_STATE(84)] = 1817,
  [SMALL_STATE(85)] = 1828,
  [SMALL_STATE(86)] = 1839,
  [SMALL_STATE(87)] = 1856,
  [SMALL_STATE(88)] = 1867,
  [SMALL_STATE(89)] = 1878,
  [SMALL_STATE(90)] = 1889,
  [SMALL_STATE(91)] = 1900,
  [SMALL_STATE(92)] = 1911,
  [SMALL_STATE(93)] = 1922,
  [SMALL_STATE(94)] = 1933,
  [SMALL_STATE(95)] = 1944,
  [SMALL_STATE(96)] = 1961,
  [SMALL_STATE(97)] = 1972,
  [SMALL_STATE(98)] = 1991,
  [SMALL_STATE(99)] = 2010,
  [SMALL_STATE(100)] = 2027,
  [SMALL_STATE(101)] = 2044,
  [SMALL_STATE(102)] = 2063,
  [SMALL_STATE(103)] = 2074,
  [SMALL_STATE(104)] = 2093,
  [SMALL_STATE(105)] = 2104,
  [SMALL_STATE(106)] = 2123,
  [SMALL_STATE(107)] = 2134,
  [SMALL_STATE(108)] = 2144,
  [SMALL_STATE(109)] = 2158,
  [SMALL_STATE(110)] = 2172,
  [SMALL_STATE(111)] = 2182,
  [SMALL_STATE(112)] = 2192,
  [SMALL_STATE(113)] = 2202,
  [SMALL_STATE(114)] = 2212,
  [SMALL_STATE(115)] = 2222,
  [SMALL_STATE(116)] = 2232,
  [SMALL_STATE(117)] = 2242,
  [SMALL_STATE(118)] = 2252,
  [SMALL_STATE(119)] = 2262,
  [SMALL_STATE(120)] = 2272,
  [SMALL_STATE(121)] = 2288,
  [SMALL_STATE(122)] = 2302,
  [SMALL_STATE(123)] = 2312,
  [SMALL_STATE(124)] = 2326,
  [SMALL_STATE(125)] = 2340,
  [SMALL_STATE(126)] = 2350,
  [SMALL_STATE(127)] = 2364,
  [SMALL_STATE(128)] = 2377,
  [SMALL_STATE(129)] = 2388,
  [SMALL_STATE(130)] = 2401,
  [SMALL_STATE(131)] = 2414,
  [SMALL_STATE(132)] = 2427,
  [SMALL_STATE(133)] = 2440,
  [SMALL_STATE(134)] = 2453,
  [SMALL_STATE(135)] = 2466,
  [SMALL_STATE(136)] = 2473,
  [SMALL_STATE(137)] = 2486,
  [SMALL_STATE(138)] = 2499,
  [SMALL_STATE(139)] = 2508,
  [SMALL_STATE(140)] = 2517,
  [SMALL_STATE(141)] = 2530,
  [SMALL_STATE(142)] = 2541,
  [SMALL_STATE(143)] = 2554,
  [SMALL_STATE(144)] = 2565,
  [SMALL_STATE(145)] = 2572,
  [SMALL_STATE(146)] = 2579,
  [SMALL_STATE(147)] = 2592,
  [SMALL_STATE(148)] = 2603,
  [SMALL_STATE(149)] = 2616,
  [SMALL_STATE(150)] = 2625,
  [SMALL_STATE(151)] = 2634,
  [SMALL_STATE(152)] = 2641,
  [SMALL_STATE(153)] = 2654,
  [SMALL_STATE(154)] = 2663,
  [SMALL_STATE(155)] = 2670,
  [SMALL_STATE(156)] = 2683,
  [SMALL_STATE(157)] = 2696,
  [SMALL_STATE(158)] = 2705,
  [SMALL_STATE(159)] = 2714,
  [SMALL_STATE(160)] = 2723,
  [SMALL_STATE(161)] = 2730,
  [SMALL_STATE(162)] = 2737,
  [SMALL_STATE(163)] = 2748,
  [SMALL_STATE(164)] = 2761,
  [SMALL_STATE(165)] = 2774,
  [SMALL_STATE(166)] = 2787,
  [SMALL_STATE(167)] = 2800,
  [SMALL_STATE(168)] = 2813,
  [SMALL_STATE(169)] = 2820,
  [SMALL_STATE(170)] = 2829,
  [SMALL_STATE(171)] = 2836,
  [SMALL_STATE(172)] = 2843,
  [SMALL_STATE(173)] = 2852,
  [SMALL_STATE(174)] = 2865,
  [SMALL_STATE(175)] = 2878,
  [SMALL_STATE(176)] = 2891,
  [SMALL_STATE(177)] = 2902,
  [SMALL_STATE(178)] = 2909,
  [SMALL_STATE(179)] = 2922,
  [SMALL_STATE(180)] = 2929,
  [SMALL_STATE(181)] = 2942,
  [SMALL_STATE(182)] = 2955,
  [SMALL_STATE(183)] = 2962,
  [SMALL_STATE(184)] = 2969,
  [SMALL_STATE(185)] = 2982,
  [SMALL_STATE(186)] = 2988,
  [SMALL_STATE(187)] = 2996,
  [SMALL_STATE(188)] = 3002,
  [SMALL_STATE(189)] = 3012,
  [SMALL_STATE(190)] = 3022,
  [SMALL_STATE(191)] = 3028,
  [SMALL_STATE(192)] = 3034,
  [SMALL_STATE(193)] = 3042,
  [SMALL_STATE(194)] = 3048,
  [SMALL_STATE(195)] = 3058,
  [SMALL_STATE(196)] = 3068,
  [SMALL_STATE(197)] = 3078,
  [SMALL_STATE(198)] = 3088,
  [SMALL_STATE(199)] = 3098,
  [SMALL_STATE(200)] = 3108,
  [SMALL_STATE(201)] = 3118,
  [SMALL_STATE(202)] = 3128,
  [SMALL_STATE(203)] = 3136,
  [SMALL_STATE(204)] = 3146,
  [SMALL_STATE(205)] = 3156,
  [SMALL_STATE(206)] = 3162,
  [SMALL_STATE(207)] = 3170,
  [SMALL_STATE(208)] = 3180,
  [SMALL_STATE(209)] = 3190,
  [SMALL_STATE(210)] = 3200,
  [SMALL_STATE(211)] = 3210,
  [SMALL_STATE(212)] = 3216,
  [SMALL_STATE(213)] = 3222,
  [SMALL_STATE(214)] = 3232,
  [SMALL_STATE(215)] = 3242,
  [SMALL_STATE(216)] = 3252,
  [SMALL_STATE(217)] = 3262,
  [SMALL_STATE(218)] = 3268,
  [SMALL_STATE(219)] = 3274,
  [SMALL_STATE(220)] = 3280,
  [SMALL_STATE(221)] = 3290,
  [SMALL_STATE(222)] = 3298,
  [SMALL_STATE(223)] = 3308,
  [SMALL_STATE(224)] = 3318,
  [SMALL_STATE(225)] = 3328,
  [SMALL_STATE(226)] = 3338,
  [SMALL_STATE(227)] = 3348,
  [SMALL_STATE(228)] = 3358,
  [SMALL_STATE(229)] = 3368,
  [SMALL_STATE(230)] = 3378,
  [SMALL_STATE(231)] = 3388,
  [SMALL_STATE(232)] = 3396,
  [SMALL_STATE(233)] = 3406,
  [SMALL_STATE(234)] = 3416,
  [SMALL_STATE(235)] = 3424,
  [SMALL_STATE(236)] = 3434,
  [SMALL_STATE(237)] = 3444,
  [SMALL_STATE(238)] = 3454,
  [SMALL_STATE(239)] = 3464,
  [SMALL_STATE(240)] = 3470,
  [SMALL_STATE(241)] = 3480,
  [SMALL_STATE(242)] = 3486,
  [SMALL_STATE(243)] = 3493,
  [SMALL_STATE(244)] = 3498,
  [SMALL_STATE(245)] = 3505,
  [SMALL_STATE(246)] = 3512,
  [SMALL_STATE(247)] = 3519,
  [SMALL_STATE(248)] = 3524,
  [SMALL_STATE(249)] = 3531,
  [SMALL_STATE(250)] = 3538,
  [SMALL_STATE(251)] = 3543,
  [SMALL_STATE(252)] = 3548,
  [SMALL_STATE(253)] = 3555,
  [SMALL_STATE(254)] = 3560,
  [SMALL_STATE(255)] = 3565,
  [SMALL_STATE(256)] = 3570,
  [SMALL_STATE(257)] = 3577,
  [SMALL_STATE(258)] = 3582,
  [SMALL_STATE(259)] = 3587,
  [SMALL_STATE(260)] = 3594,
  [SMALL_STATE(261)] = 3599,
  [SMALL_STATE(262)] = 3606,
  [SMALL_STATE(263)] = 3613,
  [SMALL_STATE(264)] = 3620,
  [SMALL_STATE(265)] = 3625,
  [SMALL_STATE(266)] = 3632,
  [SMALL_STATE(267)] = 3639,
  [SMALL_STATE(268)] = 3644,
  [SMALL_STATE(269)] = 3651,
  [SMALL_STATE(270)] = 3658,
  [SMALL_STATE(271)] = 3665,
  [SMALL_STATE(272)] = 3670,
  [SMALL_STATE(273)] = 3675,
  [SMALL_STATE(274)] = 3680,
  [SMALL_STATE(275)] = 3687,
  [SMALL_STATE(276)] = 3694,
  [SMALL_STATE(277)] = 3699,
  [SMALL_STATE(278)] = 3704,
  [SMALL_STATE(279)] = 3709,
  [SMALL_STATE(280)] = 3716,
  [SMALL_STATE(281)] = 3721,
  [SMALL_STATE(282)] = 3726,
  [SMALL_STATE(283)] = 3733,
  [SMALL_STATE(284)] = 3738,
  [SMALL_STATE(285)] = 3745,
  [SMALL_STATE(286)] = 3750,
  [SMALL_STATE(287)] = 3755,
  [SMALL_STATE(288)] = 3762,
  [SMALL_STATE(289)] = 3767,
  [SMALL_STATE(290)] = 3774,
  [SMALL_STATE(291)] = 3781,
  [SMALL_STATE(292)] = 3786,
  [SMALL_STATE(293)] = 3793,
  [SMALL_STATE(294)] = 3798,
  [SMALL_STATE(295)] = 3803,
  [SMALL_STATE(296)] = 3808,
  [SMALL_STATE(297)] = 3813,
  [SMALL_STATE(298)] = 3818,
  [SMALL_STATE(299)] = 3825,
  [SMALL_STATE(300)] = 3830,
  [SMALL_STATE(301)] = 3837,
  [SMALL_STATE(302)] = 3842,
  [SMALL_STATE(303)] = 3849,
  [SMALL_STATE(304)] = 3854,
  [SMALL_STATE(305)] = 3859,
  [SMALL_STATE(306)] = 3866,
  [SMALL_STATE(307)] = 3871,
  [SMALL_STATE(308)] = 3876,
  [SMALL_STATE(309)] = 3881,
  [SMALL_STATE(310)] = 3888,
  [SMALL_STATE(311)] = 3895,
  [SMALL_STATE(312)] = 3900,
  [SMALL_STATE(313)] = 3907,
  [SMALL_STATE(314)] = 3914,
  [SMALL_STATE(315)] = 3919,
  [SMALL_STATE(316)] = 3926,
  [SMALL_STATE(317)] = 3933,
  [SMALL_STATE(318)] = 3938,
  [SMALL_STATE(319)] = 3943,
  [SMALL_STATE(320)] = 3948,
  [SMALL_STATE(321)] = 3955,
  [SMALL_STATE(322)] = 3960,
  [SMALL_STATE(323)] = 3967,
  [SMALL_STATE(324)] = 3972,
  [SMALL_STATE(325)] = 3977,
  [SMALL_STATE(326)] = 3982,
  [SMALL_STATE(327)] = 3987,
  [SMALL_STATE(328)] = 3994,
  [SMALL_STATE(329)] = 3999,
  [SMALL_STATE(330)] = 4006,
  [SMALL_STATE(331)] = 4011,
  [SMALL_STATE(332)] = 4015,
  [SMALL_STATE(333)] = 4019,
  [SMALL_STATE(334)] = 4023,
  [SMALL_STATE(335)] = 4027,
  [SMALL_STATE(336)] = 4031,
  [SMALL_STATE(337)] = 4035,
  [SMALL_STATE(338)] = 4039,
  [SMALL_STATE(339)] = 4043,
  [SMALL_STATE(340)] = 4047,
  [SMALL_STATE(341)] = 4051,
  [SMALL_STATE(342)] = 4055,
  [SMALL_STATE(343)] = 4059,
  [SMALL_STATE(344)] = 4063,
  [SMALL_STATE(345)] = 4067,
  [SMALL_STATE(346)] = 4071,
  [SMALL_STATE(347)] = 4075,
  [SMALL_STATE(348)] = 4079,
  [SMALL_STATE(349)] = 4083,
  [SMALL_STATE(350)] = 4087,
  [SMALL_STATE(351)] = 4091,
  [SMALL_STATE(352)] = 4095,
  [SMALL_STATE(353)] = 4099,
  [SMALL_STATE(354)] = 4103,
  [SMALL_STATE(355)] = 4107,
  [SMALL_STATE(356)] = 4111,
  [SMALL_STATE(357)] = 4115,
  [SMALL_STATE(358)] = 4119,
  [SMALL_STATE(359)] = 4123,
  [SMALL_STATE(360)] = 4127,
  [SMALL_STATE(361)] = 4131,
  [SMALL_STATE(362)] = 4135,
  [SMALL_STATE(363)] = 4139,
  [SMALL_STATE(364)] = 4143,
  [SMALL_STATE(365)] = 4147,
  [SMALL_STATE(366)] = 4151,
  [SMALL_STATE(367)] = 4155,
  [SMALL_STATE(368)] = 4159,
  [SMALL_STATE(369)] = 4163,
  [SMALL_STATE(370)] = 4167,
  [SMALL_STATE(371)] = 4171,
  [SMALL_STATE(372)] = 4175,
  [SMALL_STATE(373)] = 4179,
  [SMALL_STATE(374)] = 4183,
  [SMALL_STATE(375)] = 4187,
  [SMALL_STATE(376)] = 4191,
  [SMALL_STATE(377)] = 4195,
  [SMALL_STATE(378)] = 4199,
  [SMALL_STATE(379)] = 4203,
  [SMALL_STATE(380)] = 4207,
  [SMALL_STATE(381)] = 4211,
  [SMALL_STATE(382)] = 4215,
  [SMALL_STATE(383)] = 4219,
  [SMALL_STATE(384)] = 4223,
  [SMALL_STATE(385)] = 4227,
  [SMALL_STATE(386)] = 4231,
  [SMALL_STATE(387)] = 4235,
  [SMALL_STATE(388)] = 4239,
  [SMALL_STATE(389)] = 4243,
  [SMALL_STATE(390)] = 4247,
  [SMALL_STATE(391)] = 4251,
  [SMALL_STATE(392)] = 4255,
  [SMALL_STATE(393)] = 4259,
  [SMALL_STATE(394)] = 4263,
  [SMALL_STATE(395)] = 4267,
  [SMALL_STATE(396)] = 4271,
  [SMALL_STATE(397)] = 4275,
  [SMALL_STATE(398)] = 4279,
  [SMALL_STATE(399)] = 4283,
  [SMALL_STATE(400)] = 4287,
  [SMALL_STATE(401)] = 4291,
  [SMALL_STATE(402)] = 4295,
  [SMALL_STATE(403)] = 4299,
  [SMALL_STATE(404)] = 4303,
  [SMALL_STATE(405)] = 4307,
  [SMALL_STATE(406)] = 4311,
  [SMALL_STATE(407)] = 4315,
  [SMALL_STATE(408)] = 4319,
  [SMALL_STATE(409)] = 4323,
  [SMALL_STATE(410)] = 4327,
  [SMALL_STATE(411)] = 4331,
  [SMALL_STATE(412)] = 4335,
  [SMALL_STATE(413)] = 4339,
  [SMALL_STATE(414)] = 4343,
  [SMALL_STATE(415)] = 4347,
  [SMALL_STATE(416)] = 4351,
  [SMALL_STATE(417)] = 4355,
  [SMALL_STATE(418)] = 4359,
  [SMALL_STATE(419)] = 4363,
  [SMALL_STATE(420)] = 4367,
  [SMALL_STATE(421)] = 4371,
  [SMALL_STATE(422)] = 4375,
  [SMALL_STATE(423)] = 4379,
  [SMALL_STATE(424)] = 4383,
  [SMALL_STATE(425)] = 4387,
  [SMALL_STATE(426)] = 4391,
  [SMALL_STATE(427)] = 4395,
  [SMALL_STATE(428)] = 4399,
  [SMALL_STATE(429)] = 4403,
  [SMALL_STATE(430)] = 4407,
  [SMALL_STATE(431)] = 4411,
  [SMALL_STATE(432)] = 4415,
  [SMALL_STATE(433)] = 4419,
  [SMALL_STATE(434)] = 4423,
  [SMALL_STATE(435)] = 4427,
  [SMALL_STATE(436)] = 4431,
  [SMALL_STATE(437)] = 4435,
  [SMALL_STATE(438)] = 4439,
  [SMALL_STATE(439)] = 4443,
  [SMALL_STATE(440)] = 4447,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(390),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(389),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(388),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(387),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(5),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(424),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(5),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(385),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEReference, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEReference, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(165),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(18),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(406),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(308),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__intSubset, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(434),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(22),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(438),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(439),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(440),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(430),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(23),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(435),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(436),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(437),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(26),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(232),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EmptyElemTag, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EmptyElemTag, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EmptyElemTag, 4),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EmptyElemTag, 4),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__Reference, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Reference, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STag, 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STag, 4),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 3, .production_id = 4),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 3, .production_id = 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ETag, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ETag, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3, .production_id = 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3, .production_id = 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 5, .production_id = 4),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 5, .production_id = 4),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STag, 5),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STag, 5),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, .production_id = 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(425),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(426),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(427),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(46),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(431),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(432),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(433),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(47),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STag, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STag, 3),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EmptyElemTag, 5),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EmptyElemTag, 5),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ETag, 4),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ETag, 4),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CDSect, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CDSect, 3),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CharRef, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CharRef, 3),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EntityRef, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityRef, 3),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, .production_id = 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, .production_id = 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4, .production_id = 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 4),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 5),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StyleSheetPI, 3),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StyleSheetPI, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XmlModelPI, 4),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XmlModelPI, 4),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StyleSheetPI, 4),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StyleSheetPI, 4),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XmlModelPI, 3),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XmlModelPI, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StyleSheetPI, 5),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StyleSheetPI, 5),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XmlModelPI, 5),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XmlModelPI, 5),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 6),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 6),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(158),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(359),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__intSubset, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__intSubset, 3),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 5),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 5),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 1),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 7),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 7),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(82),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(276),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__intSubset, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 4),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 4),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 5),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 5),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 11),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 11),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EmptyElemTag_repeat1, 2),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EmptyElemTag_repeat1, 2), SHIFT_REPEAT(322),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2), SHIFT_REPEAT(233),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 12),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 12),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 7),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 7),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(151),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 10),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 10),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1),
  [590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1), SHIFT_REPEAT(154),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 6),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 6),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(152),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(365),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 9),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 9),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 8),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 8),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [639] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(327),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(356),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 3),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 4),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4),
  [667] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4), SHIFT_REPEAT(205),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 3),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 3, .production_id = 5),
  [678] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3), SHIFT_REPEAT(185),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 4),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 5),
  [715] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(190),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 2),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 3),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SystemLiteral, 3),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 4),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 5),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 3),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_StyleSheetPI_repeat1, 2), SHIFT_REPEAT(320),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_StyleSheetPI_repeat1, 2),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 2),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 1),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Attribute, 3),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PublicID, 3),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 6),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PseudoAtt, 3),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 7),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 7),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 7),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 2),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 5),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 7),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 6),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contentspec, 1),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PubidLiteral, 3),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 9),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 8),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 8),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__AttType, 1),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 3),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 4),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EnumeratedType, 1),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 8),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 3, .production_id = 5),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 8),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 7),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__SDDecl, 6),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EncodingDecl, 6),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 6),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 6),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 3),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PseudoAttValue, 2),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EntityDecl, 1),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markupdecl, 1),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 5),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 9),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 9),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 4),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 6),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 5),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__VersionInfo, 6),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PseudoAttValue, 3, .production_id = 5),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NDataDecl, 4),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 10),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 3),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 1),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1103] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
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
