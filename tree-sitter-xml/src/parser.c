#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 445
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 140
#define ALIAS_COUNT 0
#define TOKEN_COUNT 73
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 5

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
  anon_sym_CDATA = 21,
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
  anon_sym_standalone = 59,
  anon_sym_yes = 60,
  anon_sym_no = 61,
  anon_sym_DOCTYPE = 62,
  anon_sym_RBRACK = 63,
  anon_sym_LT = 64,
  anon_sym_SLASH_GT = 65,
  anon_sym_LT_SLASH = 66,
  sym_CData = 67,
  anon_sym_xml_DASHstylesheet = 68,
  anon_sym_xml_DASHmodel = 69,
  sym_PITarget = 70,
  sym__pi_content = 71,
  sym_CharData = 72,
  sym_document = 73,
  sym__markupdecl = 74,
  sym__DeclSep = 75,
  sym_elementdecl = 76,
  sym_contentspec = 77,
  sym_Mixed = 78,
  sym_children = 79,
  sym__cp = 80,
  sym__choice = 81,
  sym_AttlistDecl = 82,
  sym_AttDef = 83,
  sym__AttType = 84,
  sym_StringType = 85,
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
  sym_CDStart = 122,
  sym_StyleSheetPI = 123,
  sym_XmlModelPI = 124,
  sym_PseudoAtt = 125,
  sym_PseudoAttValue = 126,
  aux_sym_document_repeat1 = 127,
  aux_sym_Mixed_repeat1 = 128,
  aux_sym__choice_repeat1 = 129,
  aux_sym_AttlistDecl_repeat1 = 130,
  aux_sym_NotationType_repeat1 = 131,
  aux_sym_Enumeration_repeat1 = 132,
  aux_sym_EntityValue_repeat1 = 133,
  aux_sym_EntityValue_repeat2 = 134,
  aux_sym_AttValue_repeat1 = 135,
  aux_sym_AttValue_repeat2 = 136,
  aux_sym_EmptyElemTag_repeat1 = 137,
  aux_sym_content_repeat1 = 138,
  aux_sym_StyleSheetPI_repeat1 = 139,
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
  [anon_sym_CDATA] = "CDATA",
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
  [anon_sym_standalone] = "standalone",
  [anon_sym_yes] = "yes",
  [anon_sym_no] = "no",
  [anon_sym_DOCTYPE] = "DOCTYPE",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LT] = "<",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [sym_CData] = "CData",
  [anon_sym_xml_DASHstylesheet] = "xml-stylesheet",
  [anon_sym_xml_DASHmodel] = "xml-model",
  [sym_PITarget] = "PITarget",
  [sym__pi_content] = "_pi_content",
  [sym_CharData] = "CharData",
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
  [sym_StringType] = "StringType",
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
  [sym_CDStart] = "CDStart",
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
  [anon_sym_CDATA] = anon_sym_CDATA,
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
  [anon_sym_standalone] = anon_sym_standalone,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_DOCTYPE] = anon_sym_DOCTYPE,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [sym_CData] = sym_CData,
  [anon_sym_xml_DASHstylesheet] = anon_sym_xml_DASHstylesheet,
  [anon_sym_xml_DASHmodel] = anon_sym_xml_DASHmodel,
  [sym_PITarget] = sym_PITarget,
  [sym__pi_content] = sym__pi_content,
  [sym_CharData] = sym_CharData,
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
  [sym_StringType] = sym_StringType,
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
  [sym_CDStart] = sym_CDStart,
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
  [anon_sym_CDATA] = {
    .visible = true,
    .named = false,
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
  [sym_PITarget] = {
    .visible = true,
    .named = true,
  },
  [sym__pi_content] = {
    .visible = false,
    .named = true,
  },
  [sym_CharData] = {
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
  [sym_StringType] = {
    .visible = true,
    .named = true,
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
  [sym_CDStart] = {
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
  [4] = {.index = 3, .length = 1},
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
  [76] = 63,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 55,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 39,
  [86] = 67,
  [87] = 66,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 66,
  [94] = 94,
  [95] = 95,
  [96] = 67,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 39,
  [101] = 9,
  [102] = 102,
  [103] = 103,
  [104] = 9,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 39,
  [112] = 67,
  [113] = 66,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 39,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 66,
  [124] = 67,
  [125] = 125,
  [126] = 126,
  [127] = 30,
  [128] = 29,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 59,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 47,
  [143] = 132,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 139,
  [150] = 150,
  [151] = 151,
  [152] = 51,
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
  [163] = 48,
  [164] = 62,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 53,
  [170] = 170,
  [171] = 148,
  [172] = 146,
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
  [250] = 248,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 247,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 246,
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
  [408] = 408,
  [409] = 409,
  [410] = 402,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 394,
  [415] = 393,
  [416] = 416,
  [417] = 390,
  [418] = 418,
  [419] = 386,
  [420] = 342,
  [421] = 394,
  [422] = 393,
  [423] = 342,
  [424] = 394,
  [425] = 393,
  [426] = 394,
  [427] = 393,
  [428] = 418,
  [429] = 405,
  [430] = 404,
  [431] = 403,
  [432] = 401,
  [433] = 397,
  [434] = 341,
  [435] = 405,
  [436] = 404,
  [437] = 403,
  [438] = 341,
  [439] = 405,
  [440] = 404,
  [441] = 403,
  [442] = 405,
  [443] = 404,
  [444] = 403,
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
      if (eof) ADVANCE(50);
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(89);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '*') ADVANCE(61);
      if (lookahead == '+') ADVANCE(63);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '1') ADVANCE(77);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '<') ADVANCE(148);
      if (lookahead == '=') ADVANCE(145);
      if (lookahead == '>') ADVANCE(56);
      if (lookahead == '?') ADVANCE(62);
      if (lookahead == 'E') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(79);
      if (lookahead == 'N') ADVANCE(81);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == ']') ADVANCE(147);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == '|') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == 183) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(76);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(134);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(89);
      if (lookahead == '<') ADVANCE(150);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == 'E') ADVANCE(110);
      if (lookahead == 'I') ADVANCE(93);
      if (lookahead == 'N') ADVANCE(108);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(135);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '[') ADVANCE(51);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '>') ADVANCE(144);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(16);
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
      if (lookahead == '.') ADVANCE(45);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(151);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(53);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(144);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(141);
      END_STATE();
    case 18:
      if (lookahead == '?') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(58);
      END_STATE();
    case 21:
      if (lookahead == 'C') ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'D') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'D') ADVANCE(73);
      END_STATE();
    case 24:
      if (lookahead == 'D') ADVANCE(72);
      END_STATE();
    case 25:
      if (lookahead == 'D') ADVANCE(71);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(23);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(24);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(25);
      END_STATE();
    case 30:
      if (lookahead == 'F') ADVANCE(31);
      if (lookahead == 'I') ADVANCE(35);
      if (lookahead == 'P') ADVANCE(21);
      if (lookahead == 'R') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 'I') ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == 'I') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'I') ADVANCE(28);
      END_STATE();
    case 34:
      if (lookahead == 'L') ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == 'M') ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'P') ADVANCE(34);
      END_STATE();
    case 37:
      if (lookahead == 'Q') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 'R') ADVANCE(29);
      END_STATE();
    case 39:
      if (lookahead == 'T') ADVANCE(20);
      END_STATE();
    case 40:
      if (lookahead == 'U') ADVANCE(32);
      END_STATE();
    case 41:
      if (lookahead == 'X') ADVANCE(27);
      END_STATE();
    case 42:
      if (lookahead == ']') ADVANCE(15);
      END_STATE();
    case 43:
      if (lookahead == ']') ADVANCE(154);
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(128);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 47:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 48:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '>' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(43);
      END_STATE();
    case 49:
      if (eof) ADVANCE(50);
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(89);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '*') ADVANCE(61);
      if (lookahead == '+') ADVANCE(63);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '1') ADVANCE(13);
      if (lookahead == ';') ADVANCE(91);
      if (lookahead == '<') ADVANCE(149);
      if (lookahead == '=') ADVANCE(145);
      if (lookahead == '>') ADVANCE(56);
      if (lookahead == '?') ADVANCE(62);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == ']') ADVANCE(146);
      if (lookahead == '|') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT_BANG_LBRACK);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK_GT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '[') ADVANCE(51);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_POUNDPCDATA);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'R') ADVANCE(94);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'R') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(124);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(69);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(70);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(124);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(124);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_POUNDREQUIRED);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_POUNDIMPLIED);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_POUNDFIXED);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '.') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(128);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '>') ADVANCE(151);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'D') ADVANCE(65);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'F') ADVANCE(31);
      if (lookahead == 'I') ADVANCE(35);
      if (lookahead == 'P') ADVANCE(21);
      if (lookahead == 'R') ADVANCE(26);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'M') ADVANCE(117);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'N') ADVANCE(116);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(128);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(128);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(124);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_EntityValue_token2);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__S);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'D') ADVANCE(66);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(124);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(100);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(109);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(114);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(124);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(124);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(124);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'F') ADVANCE(67);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'F') ADVANCE(68);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(124);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(118);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(96);
      if (lookahead == 'Y') ADVANCE(69);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(121);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(124);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(98);
      if (lookahead == 'Y') ADVANCE(70);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(124);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'K') ADVANCE(95);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'K') ADVANCE(99);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(124);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'M') ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(124);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(67);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(119);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(124);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(68);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(124);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'O') ADVANCE(106);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'O') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(124);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'S') ADVANCE(69);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'S') ADVANCE(70);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(124);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(102);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(112);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(103);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(124);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(124);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(124);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(128);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(128);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(128);
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
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token1);
      if (aux_sym_PubidLiteral_token1_character_set_1(lookahead)) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token2);
      if (aux_sym_PubidLiteral_token2_character_set_1(lookahead)) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_VersionNum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_EncName);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_Comment);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(15);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(55);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead == '?') ADVANCE(140);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '?') ADVANCE(140);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead == '?') ADVANCE(140);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_CData);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_CData);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_CData);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(155);
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
      ACCEPT_TOKEN(anon_sym_CDATA);
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
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 49},
  [2] = {.lex_state = 3, .external_lex_state = 2},
  [3] = {.lex_state = 3, .external_lex_state = 2},
  [4] = {.lex_state = 3, .external_lex_state = 2},
  [5] = {.lex_state = 3, .external_lex_state = 2},
  [6] = {.lex_state = 49},
  [7] = {.lex_state = 49},
  [8] = {.lex_state = 49},
  [9] = {.lex_state = 49},
  [10] = {.lex_state = 49},
  [11] = {.lex_state = 49},
  [12] = {.lex_state = 49},
  [13] = {.lex_state = 49},
  [14] = {.lex_state = 49},
  [15] = {.lex_state = 49},
  [16] = {.lex_state = 49},
  [17] = {.lex_state = 49},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 49},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 49},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 49},
  [27] = {.lex_state = 49},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 3, .external_lex_state = 2},
  [30] = {.lex_state = 3, .external_lex_state = 2},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 49},
  [33] = {.lex_state = 49},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 49},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 3, .external_lex_state = 2},
  [40] = {.lex_state = 3, .external_lex_state = 2},
  [41] = {.lex_state = 3, .external_lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 49},
  [45] = {.lex_state = 49},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 3, .external_lex_state = 2},
  [48] = {.lex_state = 3, .external_lex_state = 2},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 49},
  [51] = {.lex_state = 3, .external_lex_state = 2},
  [52] = {.lex_state = 49},
  [53] = {.lex_state = 3, .external_lex_state = 2},
  [54] = {.lex_state = 49},
  [55] = {.lex_state = 3, .external_lex_state = 2},
  [56] = {.lex_state = 3, .external_lex_state = 2},
  [57] = {.lex_state = 49},
  [58] = {.lex_state = 3, .external_lex_state = 2},
  [59] = {.lex_state = 3, .external_lex_state = 2},
  [60] = {.lex_state = 49},
  [61] = {.lex_state = 49},
  [62] = {.lex_state = 3, .external_lex_state = 2},
  [63] = {.lex_state = 3, .external_lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 49},
  [66] = {.lex_state = 3, .external_lex_state = 2},
  [67] = {.lex_state = 3, .external_lex_state = 2},
  [68] = {.lex_state = 49},
  [69] = {.lex_state = 49},
  [70] = {.lex_state = 49},
  [71] = {.lex_state = 49},
  [72] = {.lex_state = 49},
  [73] = {.lex_state = 49},
  [74] = {.lex_state = 49},
  [75] = {.lex_state = 49},
  [76] = {.lex_state = 49},
  [77] = {.lex_state = 49},
  [78] = {.lex_state = 49},
  [79] = {.lex_state = 49},
  [80] = {.lex_state = 49},
  [81] = {.lex_state = 49},
  [82] = {.lex_state = 49},
  [83] = {.lex_state = 49},
  [84] = {.lex_state = 49},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 49},
  [89] = {.lex_state = 49},
  [90] = {.lex_state = 49},
  [91] = {.lex_state = 49},
  [92] = {.lex_state = 49},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 49},
  [95] = {.lex_state = 49},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 49},
  [98] = {.lex_state = 49},
  [99] = {.lex_state = 49},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 49},
  [103] = {.lex_state = 49},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 49},
  [106] = {.lex_state = 49},
  [107] = {.lex_state = 49},
  [108] = {.lex_state = 49},
  [109] = {.lex_state = 49},
  [110] = {.lex_state = 49},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 49},
  [115] = {.lex_state = 49},
  [116] = {.lex_state = 49},
  [117] = {.lex_state = 49},
  [118] = {.lex_state = 49},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 49},
  [121] = {.lex_state = 49},
  [122] = {.lex_state = 49},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 49},
  [126] = {.lex_state = 49},
  [127] = {.lex_state = 49},
  [128] = {.lex_state = 49},
  [129] = {.lex_state = 49},
  [130] = {.lex_state = 49},
  [131] = {.lex_state = 49, .external_lex_state = 3},
  [132] = {.lex_state = 49},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 49},
  [135] = {.lex_state = 49},
  [136] = {.lex_state = 49},
  [137] = {.lex_state = 49},
  [138] = {.lex_state = 49},
  [139] = {.lex_state = 49},
  [140] = {.lex_state = 49},
  [141] = {.lex_state = 49},
  [142] = {.lex_state = 49},
  [143] = {.lex_state = 49},
  [144] = {.lex_state = 49},
  [145] = {.lex_state = 49},
  [146] = {.lex_state = 49},
  [147] = {.lex_state = 49},
  [148] = {.lex_state = 49},
  [149] = {.lex_state = 49},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 49},
  [152] = {.lex_state = 49},
  [153] = {.lex_state = 49},
  [154] = {.lex_state = 49},
  [155] = {.lex_state = 49},
  [156] = {.lex_state = 49},
  [157] = {.lex_state = 49},
  [158] = {.lex_state = 49},
  [159] = {.lex_state = 49},
  [160] = {.lex_state = 49},
  [161] = {.lex_state = 49},
  [162] = {.lex_state = 49},
  [163] = {.lex_state = 49},
  [164] = {.lex_state = 49},
  [165] = {.lex_state = 49},
  [166] = {.lex_state = 49},
  [167] = {.lex_state = 49},
  [168] = {.lex_state = 49},
  [169] = {.lex_state = 49},
  [170] = {.lex_state = 49},
  [171] = {.lex_state = 49},
  [172] = {.lex_state = 49},
  [173] = {.lex_state = 49},
  [174] = {.lex_state = 49},
  [175] = {.lex_state = 49},
  [176] = {.lex_state = 49},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 49},
  [179] = {.lex_state = 49},
  [180] = {.lex_state = 49},
  [181] = {.lex_state = 49},
  [182] = {.lex_state = 49},
  [183] = {.lex_state = 49},
  [184] = {.lex_state = 49},
  [185] = {.lex_state = 49},
  [186] = {.lex_state = 49},
  [187] = {.lex_state = 49},
  [188] = {.lex_state = 49},
  [189] = {.lex_state = 49},
  [190] = {.lex_state = 49},
  [191] = {.lex_state = 49},
  [192] = {.lex_state = 49},
  [193] = {.lex_state = 49},
  [194] = {.lex_state = 49},
  [195] = {.lex_state = 49},
  [196] = {.lex_state = 49},
  [197] = {.lex_state = 49},
  [198] = {.lex_state = 18},
  [199] = {.lex_state = 4},
  [200] = {.lex_state = 49},
  [201] = {.lex_state = 49},
  [202] = {.lex_state = 49},
  [203] = {.lex_state = 18},
  [204] = {.lex_state = 49},
  [205] = {.lex_state = 49},
  [206] = {.lex_state = 49},
  [207] = {.lex_state = 49},
  [208] = {.lex_state = 49},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 49},
  [211] = {.lex_state = 49},
  [212] = {.lex_state = 18},
  [213] = {.lex_state = 49},
  [214] = {.lex_state = 49},
  [215] = {.lex_state = 49},
  [216] = {.lex_state = 49},
  [217] = {.lex_state = 49},
  [218] = {.lex_state = 4},
  [219] = {.lex_state = 49},
  [220] = {.lex_state = 49},
  [221] = {.lex_state = 49},
  [222] = {.lex_state = 49},
  [223] = {.lex_state = 4},
  [224] = {.lex_state = 49},
  [225] = {.lex_state = 49},
  [226] = {.lex_state = 49},
  [227] = {.lex_state = 49, .external_lex_state = 3},
  [228] = {.lex_state = 4},
  [229] = {.lex_state = 18},
  [230] = {.lex_state = 4},
  [231] = {.lex_state = 49},
  [232] = {.lex_state = 49},
  [233] = {.lex_state = 18},
  [234] = {.lex_state = 49},
  [235] = {.lex_state = 49},
  [236] = {.lex_state = 49},
  [237] = {.lex_state = 49},
  [238] = {.lex_state = 49},
  [239] = {.lex_state = 49},
  [240] = {.lex_state = 49},
  [241] = {.lex_state = 49},
  [242] = {.lex_state = 49},
  [243] = {.lex_state = 49},
  [244] = {.lex_state = 49},
  [245] = {.lex_state = 49},
  [246] = {.lex_state = 49},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 4},
  [249] = {.lex_state = 49},
  [250] = {.lex_state = 4},
  [251] = {.lex_state = 49},
  [252] = {.lex_state = 49},
  [253] = {.lex_state = 49},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 49},
  [256] = {.lex_state = 49},
  [257] = {.lex_state = 49},
  [258] = {.lex_state = 49},
  [259] = {.lex_state = 4},
  [260] = {.lex_state = 49},
  [261] = {.lex_state = 49},
  [262] = {.lex_state = 4},
  [263] = {.lex_state = 49},
  [264] = {.lex_state = 49},
  [265] = {.lex_state = 49},
  [266] = {.lex_state = 49},
  [267] = {.lex_state = 18},
  [268] = {.lex_state = 49},
  [269] = {.lex_state = 4},
  [270] = {.lex_state = 4},
  [271] = {.lex_state = 49},
  [272] = {.lex_state = 49},
  [273] = {.lex_state = 49},
  [274] = {.lex_state = 49},
  [275] = {.lex_state = 4},
  [276] = {.lex_state = 49},
  [277] = {.lex_state = 49},
  [278] = {.lex_state = 49},
  [279] = {.lex_state = 49},
  [280] = {.lex_state = 49},
  [281] = {.lex_state = 49},
  [282] = {.lex_state = 44},
  [283] = {.lex_state = 49},
  [284] = {.lex_state = 49},
  [285] = {.lex_state = 49},
  [286] = {.lex_state = 49},
  [287] = {.lex_state = 49},
  [288] = {.lex_state = 49},
  [289] = {.lex_state = 49},
  [290] = {.lex_state = 49},
  [291] = {.lex_state = 49},
  [292] = {.lex_state = 49},
  [293] = {.lex_state = 49},
  [294] = {.lex_state = 49},
  [295] = {.lex_state = 49},
  [296] = {.lex_state = 49},
  [297] = {.lex_state = 49},
  [298] = {.lex_state = 4},
  [299] = {.lex_state = 49},
  [300] = {.lex_state = 49},
  [301] = {.lex_state = 49},
  [302] = {.lex_state = 49},
  [303] = {.lex_state = 49},
  [304] = {.lex_state = 49},
  [305] = {.lex_state = 49},
  [306] = {.lex_state = 49},
  [307] = {.lex_state = 4},
  [308] = {.lex_state = 49},
  [309] = {.lex_state = 49},
  [310] = {.lex_state = 4},
  [311] = {.lex_state = 44},
  [312] = {.lex_state = 49},
  [313] = {.lex_state = 49},
  [314] = {.lex_state = 49},
  [315] = {.lex_state = 49},
  [316] = {.lex_state = 49},
  [317] = {.lex_state = 49},
  [318] = {.lex_state = 49},
  [319] = {.lex_state = 49},
  [320] = {.lex_state = 4},
  [321] = {.lex_state = 49},
  [322] = {.lex_state = 49},
  [323] = {.lex_state = 49},
  [324] = {.lex_state = 49},
  [325] = {.lex_state = 49},
  [326] = {.lex_state = 49},
  [327] = {.lex_state = 49},
  [328] = {.lex_state = 49},
  [329] = {.lex_state = 49},
  [330] = {.lex_state = 49},
  [331] = {.lex_state = 44},
  [332] = {.lex_state = 49},
  [333] = {.lex_state = 49},
  [334] = {.lex_state = 49},
  [335] = {.lex_state = 49},
  [336] = {.lex_state = 47},
  [337] = {.lex_state = 49},
  [338] = {.lex_state = 49},
  [339] = {.lex_state = 47},
  [340] = {.lex_state = 49},
  [341] = {.lex_state = 49},
  [342] = {.lex_state = 49},
  [343] = {.lex_state = 49},
  [344] = {.lex_state = 49},
  [345] = {.lex_state = 49},
  [346] = {.lex_state = 44},
  [347] = {.lex_state = 49},
  [348] = {.lex_state = 44},
  [349] = {.lex_state = 49},
  [350] = {.lex_state = 136},
  [351] = {.lex_state = 137},
  [352] = {.lex_state = 4},
  [353] = {.lex_state = 138},
  [354] = {.lex_state = 49},
  [355] = {.lex_state = 49},
  [356] = {.lex_state = 139},
  [357] = {.lex_state = 49},
  [358] = {.lex_state = 49},
  [359] = {.lex_state = 44},
  [360] = {.lex_state = 49},
  [361] = {.lex_state = 49},
  [362] = {.lex_state = 49},
  [363] = {.lex_state = 49},
  [364] = {.lex_state = 49},
  [365] = {.lex_state = 49},
  [366] = {.lex_state = 49},
  [367] = {.lex_state = 49},
  [368] = {.lex_state = 49},
  [369] = {.lex_state = 49},
  [370] = {.lex_state = 49},
  [371] = {.lex_state = 49},
  [372] = {.lex_state = 49},
  [373] = {.lex_state = 49},
  [374] = {.lex_state = 49},
  [375] = {.lex_state = 4},
  [376] = {.lex_state = 49},
  [377] = {.lex_state = 49},
  [378] = {.lex_state = 49},
  [379] = {.lex_state = 49},
  [380] = {.lex_state = 49},
  [381] = {.lex_state = 49},
  [382] = {.lex_state = 49},
  [383] = {.lex_state = 49},
  [384] = {.lex_state = 49},
  [385] = {.lex_state = 49},
  [386] = {.lex_state = 49},
  [387] = {.lex_state = 153},
  [388] = {.lex_state = 49},
  [389] = {.lex_state = 49},
  [390] = {.lex_state = 4},
  [391] = {.lex_state = 4},
  [392] = {.lex_state = 49},
  [393] = {.lex_state = 49},
  [394] = {.lex_state = 49},
  [395] = {.lex_state = 49},
  [396] = {.lex_state = 49},
  [397] = {.lex_state = 0, .external_lex_state = 4},
  [398] = {.lex_state = 49},
  [399] = {.lex_state = 153},
  [400] = {.lex_state = 49},
  [401] = {.lex_state = 49},
  [402] = {.lex_state = 0, .external_lex_state = 3},
  [403] = {.lex_state = 46},
  [404] = {.lex_state = 4},
  [405] = {.lex_state = 49},
  [406] = {.lex_state = 49},
  [407] = {.lex_state = 49},
  [408] = {.lex_state = 49},
  [409] = {.lex_state = 49},
  [410] = {.lex_state = 0, .external_lex_state = 3},
  [411] = {.lex_state = 49},
  [412] = {.lex_state = 49},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 49},
  [415] = {.lex_state = 49},
  [416] = {.lex_state = 49},
  [417] = {.lex_state = 4},
  [418] = {.lex_state = 49},
  [419] = {.lex_state = 49},
  [420] = {.lex_state = 49},
  [421] = {.lex_state = 49},
  [422] = {.lex_state = 49},
  [423] = {.lex_state = 49},
  [424] = {.lex_state = 49},
  [425] = {.lex_state = 49},
  [426] = {.lex_state = 49},
  [427] = {.lex_state = 49},
  [428] = {.lex_state = 49},
  [429] = {.lex_state = 49},
  [430] = {.lex_state = 4},
  [431] = {.lex_state = 46},
  [432] = {.lex_state = 49},
  [433] = {.lex_state = 0, .external_lex_state = 4},
  [434] = {.lex_state = 49},
  [435] = {.lex_state = 49},
  [436] = {.lex_state = 4},
  [437] = {.lex_state = 46},
  [438] = {.lex_state = 49},
  [439] = {.lex_state = 49},
  [440] = {.lex_state = 4},
  [441] = {.lex_state = 46},
  [442] = {.lex_state = 49},
  [443] = {.lex_state = 4},
  [444] = {.lex_state = 46},
};

enum {
  ts_external_token_PITarget = 0,
  ts_external_token__pi_content = 1,
  ts_external_token_CharData = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_PITarget] = sym_PITarget,
  [ts_external_token__pi_content] = sym__pi_content,
  [ts_external_token_CharData] = sym_CharData,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_PITarget] = true,
    [ts_external_token__pi_content] = true,
    [ts_external_token_CharData] = true,
  },
  [2] = {
    [ts_external_token_CharData] = true,
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
    [anon_sym_CDATA] = ACTIONS(1),
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
    [anon_sym_standalone] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_DOCTYPE] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_xml_DASHstylesheet] = ACTIONS(1),
    [anon_sym_xml_DASHmodel] = ACTIONS(1),
    [sym_PITarget] = ACTIONS(1),
    [sym__pi_content] = ACTIONS(1),
    [sym_CharData] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(413),
    [sym_XMLDecl] = STATE(17),
    [sym_PI] = STATE(20),
    [sym_prolog] = STATE(150),
    [sym__Misc] = STATE(20),
    [sym_doctypedecl] = STATE(65),
    [sym_element] = STATE(54),
    [sym_EmptyElemTag] = STATE(169),
    [sym_STag] = STATE(2),
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
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_POUND,
    ACTIONS(19), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(21), 1,
      anon_sym_LT_QMARK,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_LT_SLASH,
    STATE(3), 1,
      sym_STag,
    STATE(53), 1,
      sym_EmptyElemTag,
    STATE(137), 1,
      sym_ETag,
    STATE(254), 1,
      sym_content,
    STATE(399), 1,
      sym_CDStart,
    ACTIONS(23), 2,
      sym_CharData,
      sym_Comment,
    STATE(39), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(4), 5,
      sym__Reference,
      sym_PI,
      sym_element,
      sym_CDSect,
      aux_sym_content_repeat1,
  [52] = 15,
    ACTIONS(13), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_POUND,
    ACTIONS(19), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(21), 1,
      anon_sym_LT_QMARK,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      anon_sym_LT_SLASH,
    STATE(3), 1,
      sym_STag,
    STATE(53), 1,
      sym_EmptyElemTag,
    STATE(59), 1,
      sym_ETag,
    STATE(247), 1,
      sym_content,
    STATE(399), 1,
      sym_CDStart,
    ACTIONS(23), 2,
      sym_CharData,
      sym_Comment,
    STATE(39), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(4), 5,
      sym__Reference,
      sym_PI,
      sym_element,
      sym_CDSect,
      aux_sym_content_repeat1,
  [104] = 13,
    ACTIONS(13), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_POUND,
    ACTIONS(19), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(21), 1,
      anon_sym_LT_QMARK,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(33), 1,
      anon_sym_LT_SLASH,
    STATE(3), 1,
      sym_STag,
    STATE(53), 1,
      sym_EmptyElemTag,
    STATE(399), 1,
      sym_CDStart,
    ACTIONS(31), 2,
      sym_CharData,
      sym_Comment,
    STATE(39), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(5), 5,
      sym__Reference,
      sym_PI,
      sym_element,
      sym_CDSect,
      aux_sym_content_repeat1,
  [150] = 13,
    ACTIONS(35), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(38), 1,
      anon_sym_AMP,
    ACTIONS(41), 1,
      anon_sym_AMP_POUND,
    ACTIONS(44), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(47), 1,
      anon_sym_LT_QMARK,
    ACTIONS(53), 1,
      anon_sym_LT,
    ACTIONS(56), 1,
      anon_sym_LT_SLASH,
    STATE(3), 1,
      sym_STag,
    STATE(53), 1,
      sym_EmptyElemTag,
    STATE(399), 1,
      sym_CDStart,
    ACTIONS(50), 2,
      sym_CharData,
      sym_Comment,
    STATE(39), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(5), 5,
      sym__Reference,
      sym_PI,
      sym_element,
      sym_CDSect,
      aux_sym_content_repeat1,
  [196] = 11,
    ACTIONS(3), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT_QMARK,
    ACTIONS(11), 1,
      anon_sym_LT,
    STATE(2), 1,
      sym_STag,
    STATE(17), 1,
      sym_XMLDecl,
    STATE(50), 1,
      sym_element,
    STATE(65), 1,
      sym_doctypedecl,
    STATE(169), 1,
      sym_EmptyElemTag,
    STATE(177), 1,
      sym_prolog,
    ACTIONS(9), 2,
      sym__S,
      sym_Comment,
    STATE(20), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [235] = 9,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(60), 1,
      sym__S,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(64), 1,
      sym_Comment,
    ACTIONS(66), 1,
      anon_sym_RBRACK,
    STATE(10), 1,
      aux_sym__intSubset,
    STATE(155), 1,
      sym__markupdecl,
    STATE(299), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(296), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [268] = 9,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(60), 1,
      sym__S,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(64), 1,
      sym_Comment,
    ACTIONS(68), 1,
      anon_sym_RBRACK,
    STATE(10), 1,
      aux_sym__intSubset,
    STATE(155), 1,
      sym__markupdecl,
    STATE(299), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(296), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [301] = 2,
    ACTIONS(72), 1,
      anon_sym_LT_BANG,
    ACTIONS(70), 13,
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
  [320] = 9,
    ACTIONS(74), 1,
      anon_sym_LT_BANG,
    ACTIONS(77), 1,
      sym__S,
    ACTIONS(80), 1,
      anon_sym_LT_QMARK,
    ACTIONS(83), 1,
      sym_Comment,
    ACTIONS(86), 1,
      anon_sym_RBRACK,
    STATE(10), 1,
      aux_sym__intSubset,
    STATE(155), 1,
      sym__markupdecl,
    STATE(299), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(296), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [353] = 9,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(60), 1,
      sym__S,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(64), 1,
      sym_Comment,
    ACTIONS(88), 1,
      anon_sym_RBRACK,
    STATE(10), 1,
      aux_sym__intSubset,
    STATE(155), 1,
      sym__markupdecl,
    STATE(299), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(296), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [386] = 9,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(60), 1,
      sym__S,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(64), 1,
      sym_Comment,
    ACTIONS(90), 1,
      anon_sym_RBRACK,
    STATE(10), 1,
      aux_sym__intSubset,
    STATE(155), 1,
      sym__markupdecl,
    STATE(299), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(296), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [419] = 8,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(60), 1,
      sym__S,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(64), 1,
      sym_Comment,
    STATE(12), 1,
      aux_sym__intSubset,
    STATE(155), 1,
      sym__markupdecl,
    STATE(299), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(296), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [449] = 8,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(60), 1,
      sym__S,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(64), 1,
      sym_Comment,
    STATE(7), 1,
      aux_sym__intSubset,
    STATE(155), 1,
      sym__markupdecl,
    STATE(299), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(296), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [479] = 8,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(60), 1,
      sym__S,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(64), 1,
      sym_Comment,
    STATE(11), 1,
      aux_sym__intSubset,
    STATE(155), 1,
      sym__markupdecl,
    STATE(299), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(296), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [509] = 8,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(60), 1,
      sym__S,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(64), 1,
      sym_Comment,
    STATE(8), 1,
      aux_sym__intSubset,
    STATE(155), 1,
      sym__markupdecl,
    STATE(299), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(296), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [539] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_BANG,
    ACTIONS(94), 1,
      anon_sym_LT_QMARK,
    ACTIONS(96), 1,
      anon_sym_LT,
    STATE(37), 1,
      sym_doctypedecl,
    ACTIONS(92), 2,
      sym__S,
      sym_Comment,
    STATE(24), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [563] = 8,
    ACTIONS(98), 1,
      anon_sym_PERCENT,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(106), 1,
      anon_sym_AMP,
    ACTIONS(109), 1,
      anon_sym_AMP_POUND,
    ACTIONS(112), 1,
      anon_sym_AMP_POUNDx,
    STATE(85), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(18), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [591] = 8,
    ACTIONS(115), 1,
      anon_sym_PERCENT,
    ACTIONS(117), 1,
      anon_sym_SQUOTE,
    ACTIONS(119), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(121), 1,
      anon_sym_AMP,
    ACTIONS(123), 1,
      anon_sym_AMP_POUND,
    ACTIONS(125), 1,
      anon_sym_AMP_POUNDx,
    STATE(85), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(22), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [619] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_BANG,
    ACTIONS(94), 1,
      anon_sym_LT_QMARK,
    ACTIONS(96), 1,
      anon_sym_LT,
    STATE(37), 1,
      sym_doctypedecl,
    ACTIONS(127), 2,
      sym__S,
      sym_Comment,
    STATE(26), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [643] = 8,
    ACTIONS(129), 1,
      anon_sym_PERCENT,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(137), 1,
      anon_sym_AMP,
    ACTIONS(140), 1,
      anon_sym_AMP_POUND,
    ACTIONS(143), 1,
      anon_sym_AMP_POUNDx,
    STATE(100), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(21), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [671] = 8,
    ACTIONS(115), 1,
      anon_sym_PERCENT,
    ACTIONS(121), 1,
      anon_sym_AMP,
    ACTIONS(123), 1,
      anon_sym_AMP_POUND,
    ACTIONS(125), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(146), 1,
      anon_sym_SQUOTE,
    ACTIONS(148), 1,
      aux_sym_EntityValue_token2,
    STATE(85), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(18), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [699] = 8,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      anon_sym_PERCENT,
    ACTIONS(152), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(154), 1,
      anon_sym_AMP,
    ACTIONS(156), 1,
      anon_sym_AMP_POUND,
    ACTIONS(158), 1,
      anon_sym_AMP_POUNDx,
    STATE(100), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(21), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [727] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_BANG,
    ACTIONS(94), 1,
      anon_sym_LT_QMARK,
    ACTIONS(160), 1,
      anon_sym_LT,
    STATE(61), 1,
      sym_doctypedecl,
    ACTIONS(127), 2,
      sym__S,
      sym_Comment,
    STATE(26), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [751] = 8,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      anon_sym_PERCENT,
    ACTIONS(154), 1,
      anon_sym_AMP,
    ACTIONS(156), 1,
      anon_sym_AMP_POUND,
    ACTIONS(158), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(162), 1,
      aux_sym_EntityValue_token1,
    STATE(100), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(23), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [779] = 5,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 1,
      anon_sym_LT_QMARK,
    ACTIONS(166), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(168), 2,
      sym__S,
      sym_Comment,
    STATE(26), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [801] = 6,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(64), 1,
      sym_Comment,
    STATE(144), 1,
      sym__markupdecl,
    STATE(299), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(296), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [825] = 8,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_CDATA,
    ACTIONS(178), 1,
      sym_TokenizedType,
    ACTIONS(180), 1,
      anon_sym_NOTATION,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    STATE(286), 1,
      sym__AttType,
    STATE(287), 2,
      sym_NotationType,
      sym_Enumeration,
    STATE(284), 3,
      sym_StringType,
      sym__EnumeratedType,
      sym_PEReference,
  [853] = 2,
    ACTIONS(186), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(184), 6,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
  [867] = 2,
    ACTIONS(190), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(188), 6,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
  [881] = 7,
    ACTIONS(192), 1,
      anon_sym_SQUOTE,
    ACTIONS(194), 1,
      anon_sym_AMP,
    ACTIONS(196), 1,
      anon_sym_AMP_POUND,
    ACTIONS(198), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(200), 1,
      aux_sym_AttValue_token2,
    STATE(43), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(111), 2,
      sym_EntityRef,
      sym_CharRef,
  [905] = 4,
    ACTIONS(94), 1,
      anon_sym_LT_QMARK,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 2,
      sym__S,
      sym_Comment,
    STATE(26), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [923] = 4,
    ACTIONS(94), 1,
      anon_sym_LT_QMARK,
    ACTIONS(160), 1,
      anon_sym_LT,
    ACTIONS(127), 2,
      sym__S,
      sym_Comment,
    STATE(26), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [941] = 7,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_AMP,
    ACTIONS(206), 1,
      anon_sym_AMP_POUND,
    ACTIONS(208), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(210), 1,
      aux_sym_AttValue_token1,
    STATE(42), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(119), 2,
      sym_EntityRef,
      sym_CharRef,
  [965] = 7,
    ACTIONS(194), 1,
      anon_sym_AMP,
    ACTIONS(196), 1,
      anon_sym_AMP_POUND,
    ACTIONS(198), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(212), 1,
      anon_sym_SQUOTE,
    ACTIONS(214), 1,
      aux_sym_AttValue_token2,
    STATE(49), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(111), 2,
      sym_EntityRef,
      sym_CharRef,
  [989] = 7,
    ACTIONS(204), 1,
      anon_sym_AMP,
    ACTIONS(206), 1,
      anon_sym_AMP_POUND,
    ACTIONS(208), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(216), 1,
      aux_sym_AttValue_token1,
    STATE(46), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(119), 2,
      sym_EntityRef,
      sym_CharRef,
  [1013] = 4,
    ACTIONS(94), 1,
      anon_sym_LT_QMARK,
    ACTIONS(160), 1,
      anon_sym_LT,
    ACTIONS(218), 2,
      sym__S,
      sym_Comment,
    STATE(60), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1031] = 7,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_AMP,
    ACTIONS(225), 1,
      anon_sym_AMP_POUND,
    ACTIONS(228), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(231), 1,
      aux_sym_AttValue_token2,
    STATE(38), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(111), 2,
      sym_EntityRef,
      sym_CharRef,
  [1055] = 2,
    ACTIONS(236), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(234), 6,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
  [1069] = 2,
    ACTIONS(240), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(238), 6,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
  [1083] = 2,
    ACTIONS(244), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(242), 6,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
  [1097] = 7,
    ACTIONS(204), 1,
      anon_sym_AMP,
    ACTIONS(206), 1,
      anon_sym_AMP_POUND,
    ACTIONS(208), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      aux_sym_AttValue_token1,
    STATE(64), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(119), 2,
      sym_EntityRef,
      sym_CharRef,
  [1121] = 7,
    ACTIONS(194), 1,
      anon_sym_AMP,
    ACTIONS(196), 1,
      anon_sym_AMP_POUND,
    ACTIONS(198), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(246), 1,
      anon_sym_SQUOTE,
    ACTIONS(250), 1,
      aux_sym_AttValue_token2,
    STATE(38), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(111), 2,
      sym_EntityRef,
      sym_CharRef,
  [1145] = 4,
    ACTIONS(94), 1,
      anon_sym_LT_QMARK,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    ACTIONS(254), 2,
      sym__S,
      sym_Comment,
    STATE(68), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1163] = 4,
    ACTIONS(94), 1,
      anon_sym_LT_QMARK,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 2,
      sym__S,
      sym_Comment,
    STATE(26), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1181] = 7,
    ACTIONS(204), 1,
      anon_sym_AMP,
    ACTIONS(206), 1,
      anon_sym_AMP_POUND,
    ACTIONS(208), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(248), 1,
      aux_sym_AttValue_token1,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    STATE(64), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(119), 2,
      sym_EntityRef,
      sym_CharRef,
  [1205] = 2,
    ACTIONS(262), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(260), 6,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
  [1219] = 2,
    ACTIONS(266), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(264), 6,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
  [1233] = 7,
    ACTIONS(194), 1,
      anon_sym_AMP,
    ACTIONS(196), 1,
      anon_sym_AMP_POUND,
    ACTIONS(198), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(250), 1,
      aux_sym_AttValue_token2,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    STATE(38), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(111), 2,
      sym_EntityRef,
      sym_CharRef,
  [1257] = 4,
    ACTIONS(94), 1,
      anon_sym_LT_QMARK,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    ACTIONS(270), 2,
      sym__S,
      sym_Comment,
    STATE(45), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1275] = 2,
    ACTIONS(274), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(272), 6,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
  [1289] = 4,
    ACTIONS(94), 1,
      anon_sym_LT_QMARK,
    ACTIONS(276), 1,
      anon_sym_LT,
    ACTIONS(127), 2,
      sym__S,
      sym_Comment,
    STATE(26), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1307] = 2,
    ACTIONS(280), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(278), 6,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
  [1321] = 4,
    ACTIONS(94), 1,
      anon_sym_LT_QMARK,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 2,
      sym__S,
      sym_Comment,
    STATE(32), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1339] = 2,
    ACTIONS(288), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(286), 6,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
  [1353] = 2,
    ACTIONS(292), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(290), 6,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
  [1367] = 6,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym__choice,
    STATE(244), 1,
      sym_contentspec,
    ACTIONS(294), 2,
      anon_sym_EMPTY,
      anon_sym_ANY,
    STATE(316), 3,
      sym_Mixed,
      sym_children,
      sym_PEReference,
  [1389] = 2,
    ACTIONS(300), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(298), 6,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
  [1403] = 2,
    ACTIONS(304), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(302), 6,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
  [1417] = 4,
    ACTIONS(94), 1,
      anon_sym_LT_QMARK,
    ACTIONS(306), 1,
      anon_sym_LT,
    ACTIONS(127), 2,
      sym__S,
      sym_Comment,
    STATE(26), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1435] = 4,
    ACTIONS(94), 1,
      anon_sym_LT_QMARK,
    ACTIONS(306), 1,
      anon_sym_LT,
    ACTIONS(308), 2,
      sym__S,
      sym_Comment,
    STATE(52), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1453] = 2,
    ACTIONS(312), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(310), 6,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
  [1467] = 2,
    ACTIONS(316), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(314), 6,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
  [1481] = 7,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    ACTIONS(320), 1,
      anon_sym_AMP,
    ACTIONS(323), 1,
      anon_sym_AMP_POUND,
    ACTIONS(326), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(329), 1,
      aux_sym_AttValue_token1,
    STATE(64), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(119), 2,
      sym_EntityRef,
      sym_CharRef,
  [1505] = 4,
    ACTIONS(94), 1,
      anon_sym_LT_QMARK,
    ACTIONS(96), 1,
      anon_sym_LT,
    ACTIONS(332), 2,
      sym__S,
      sym_Comment,
    STATE(33), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1523] = 2,
    ACTIONS(336), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(334), 6,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
  [1537] = 2,
    ACTIONS(340), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(338), 6,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_LT_SLASH,
  [1551] = 4,
    ACTIONS(94), 1,
      anon_sym_LT_QMARK,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 2,
      sym__S,
      sym_Comment,
    STATE(26), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1569] = 1,
    ACTIONS(344), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [1580] = 8,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(346), 1,
      sym_Name,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_POUNDPCDATA,
    ACTIONS(352), 1,
      sym__S,
    STATE(73), 1,
      sym_PEReference,
    STATE(79), 1,
      sym__choice,
    STATE(107), 1,
      sym__cp,
  [1605] = 6,
    ACTIONS(354), 1,
      anon_sym_PIPE,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(362), 1,
      sym__S,
    STATE(183), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(358), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [1626] = 1,
    ACTIONS(364), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [1637] = 6,
    ACTIONS(354), 1,
      anon_sym_PIPE,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    ACTIONS(368), 1,
      sym__S,
    STATE(161), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(358), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [1658] = 1,
    ACTIONS(370), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [1669] = 6,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(346), 1,
      sym_Name,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      sym__S,
    STATE(107), 1,
      sym__cp,
    STATE(79), 2,
      sym__choice,
      sym_PEReference,
  [1689] = 2,
    ACTIONS(316), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(314), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1701] = 7,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(346), 1,
      sym_Name,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_POUNDPCDATA,
    STATE(71), 1,
      sym_PEReference,
    STATE(79), 1,
      sym__choice,
    STATE(125), 1,
      sym__cp,
  [1723] = 6,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(346), 1,
      sym_Name,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      sym__S,
    STATE(156), 1,
      sym__cp,
    STATE(79), 2,
      sym__choice,
      sym_PEReference,
  [1743] = 2,
    ACTIONS(358), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
    ACTIONS(360), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1755] = 2,
    ACTIONS(288), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(286), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1767] = 6,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(346), 1,
      sym_Name,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    ACTIONS(378), 1,
      sym__S,
    STATE(178), 1,
      sym__cp,
    STATE(79), 2,
      sym__choice,
      sym_PEReference,
  [1787] = 6,
    ACTIONS(382), 1,
      anon_sym_POUNDFIXED,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    ACTIONS(386), 1,
      anon_sym_SQUOTE,
    STATE(324), 1,
      sym_DefaultDecl,
    STATE(326), 1,
      sym_AttValue,
    ACTIONS(380), 2,
      anon_sym_POUNDREQUIRED,
      anon_sym_POUNDIMPLIED,
  [1807] = 2,
    ACTIONS(390), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(388), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1818] = 6,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(392), 1,
      sym_Name,
    ACTIONS(394), 1,
      anon_sym_PIPE,
    ACTIONS(396), 1,
      sym__S,
    STATE(108), 1,
      aux_sym_NotationType_repeat1,
    STATE(276), 1,
      sym_PEReference,
  [1837] = 2,
    ACTIONS(236), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(234), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1848] = 2,
    ACTIONS(340), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(338), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1859] = 2,
    ACTIONS(336), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(334), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1870] = 2,
    ACTIONS(400), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(398), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1881] = 6,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(394), 1,
      anon_sym_PIPE,
    ACTIONS(396), 1,
      sym__S,
    ACTIONS(402), 1,
      sym_Name,
    STATE(98), 1,
      aux_sym_NotationType_repeat1,
    STATE(303), 1,
      sym_PEReference,
  [1900] = 5,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(346), 1,
      sym_Name,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    STATE(125), 1,
      sym__cp,
    STATE(79), 2,
      sym__choice,
      sym_PEReference,
  [1917] = 5,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(404), 1,
      anon_sym_SYSTEM,
    ACTIONS(406), 1,
      anon_sym_PUBLIC,
    STATE(411), 1,
      sym_PEReference,
    STATE(249), 2,
      sym_ExternalID,
      sym_PublicID,
  [1934] = 6,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(394), 1,
      anon_sym_PIPE,
    ACTIONS(396), 1,
      sym__S,
    ACTIONS(408), 1,
      sym_Name,
    STATE(84), 1,
      aux_sym_NotationType_repeat1,
    STATE(297), 1,
      sym_PEReference,
  [1953] = 2,
    ACTIONS(336), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(334), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1964] = 6,
    ACTIONS(404), 1,
      anon_sym_SYSTEM,
    ACTIONS(410), 1,
      anon_sym_DQUOTE,
    ACTIONS(412), 1,
      anon_sym_SQUOTE,
    ACTIONS(414), 1,
      anon_sym_PUBLIC,
    STATE(240), 1,
      sym_ExternalID,
    STATE(251), 1,
      sym_EntityValue,
  [1983] = 5,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(346), 1,
      sym_Name,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    STATE(141), 1,
      sym__cp,
    STATE(79), 2,
      sym__choice,
      sym_PEReference,
  [2000] = 2,
    ACTIONS(340), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(338), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [2011] = 5,
    ACTIONS(404), 1,
      anon_sym_SYSTEM,
    ACTIONS(410), 1,
      anon_sym_DQUOTE,
    ACTIONS(412), 1,
      anon_sym_SQUOTE,
    ACTIONS(414), 1,
      anon_sym_PUBLIC,
    STATE(291), 2,
      sym_EntityValue,
      sym_ExternalID,
  [2028] = 6,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(394), 1,
      anon_sym_PIPE,
    ACTIONS(396), 1,
      sym__S,
    ACTIONS(408), 1,
      sym_Name,
    STATE(108), 1,
      aux_sym_NotationType_repeat1,
    STATE(297), 1,
      sym_PEReference,
  [2047] = 5,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(346), 1,
      sym_Name,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    STATE(156), 1,
      sym__cp,
    STATE(79), 2,
      sym__choice,
      sym_PEReference,
  [2064] = 2,
    ACTIONS(236), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(234), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [2075] = 2,
    ACTIONS(72), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(70), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [2086] = 2,
    ACTIONS(418), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(416), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2097] = 2,
    ACTIONS(422), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(420), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2108] = 2,
    ACTIONS(72), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(70), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [2119] = 2,
    ACTIONS(426), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(424), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2130] = 2,
    ACTIONS(430), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(428), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2141] = 4,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    ACTIONS(436), 1,
      sym__S,
    STATE(126), 1,
      aux_sym__choice_repeat1,
    ACTIONS(432), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2155] = 4,
    ACTIONS(440), 1,
      anon_sym_PIPE,
    ACTIONS(443), 1,
      sym__S,
    STATE(108), 1,
      aux_sym_NotationType_repeat1,
    ACTIONS(438), 2,
      anon_sym_PERCENT,
      sym_Name,
  [2169] = 2,
    ACTIONS(446), 1,
      anon_sym_LT_BANG,
    ACTIONS(448), 4,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_RBRACK,
  [2179] = 4,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    ACTIONS(455), 1,
      sym__S,
    STATE(110), 1,
      aux_sym__choice_repeat1,
    ACTIONS(450), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2193] = 2,
    ACTIONS(236), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(234), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [2203] = 2,
    ACTIONS(340), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(338), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [2213] = 2,
    ACTIONS(336), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(334), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [2223] = 2,
    ACTIONS(458), 2,
      anon_sym_GT,
      sym__S,
    ACTIONS(460), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [2233] = 2,
    ACTIONS(462), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(464), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2243] = 2,
    ACTIONS(466), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(468), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2253] = 2,
    ACTIONS(470), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(472), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2263] = 2,
    ACTIONS(474), 1,
      anon_sym_LT_BANG,
    ACTIONS(86), 4,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
      anon_sym_RBRACK,
  [2273] = 2,
    ACTIONS(236), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(234), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2283] = 5,
    ACTIONS(404), 1,
      anon_sym_SYSTEM,
    ACTIONS(414), 1,
      anon_sym_PUBLIC,
    ACTIONS(476), 1,
      anon_sym_LBRACK,
    ACTIONS(478), 1,
      anon_sym_GT,
    STATE(241), 1,
      sym_ExternalID,
  [2299] = 4,
    ACTIONS(436), 1,
      sym__S,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym__choice_repeat1,
    ACTIONS(432), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2313] = 2,
    ACTIONS(482), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(484), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2323] = 2,
    ACTIONS(336), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(334), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2333] = 2,
    ACTIONS(340), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(338), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2343] = 4,
    ACTIONS(436), 1,
      sym__S,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym__choice_repeat1,
    ACTIONS(432), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2357] = 4,
    ACTIONS(436), 1,
      sym__S,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym__choice_repeat1,
    ACTIONS(432), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2371] = 1,
    ACTIONS(188), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2378] = 1,
    ACTIONS(184), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2385] = 2,
    ACTIONS(490), 1,
      sym__S,
    ACTIONS(488), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [2394] = 2,
    ACTIONS(495), 1,
      anon_sym_LT,
    ACTIONS(493), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2403] = 4,
    ACTIONS(497), 1,
      anon_sym_xml,
    ACTIONS(499), 1,
      anon_sym_xml_DASHstylesheet,
    ACTIONS(501), 1,
      anon_sym_xml_DASHmodel,
    ACTIONS(503), 1,
      sym_PITarget,
  [2416] = 4,
    ACTIONS(505), 1,
      anon_sym_GT,
    ACTIONS(507), 1,
      sym__S,
    ACTIONS(509), 1,
      anon_sym_SLASH_GT,
    STATE(181), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2429] = 4,
    ACTIONS(511), 1,
      sym__S,
    ACTIONS(513), 1,
      anon_sym_QMARK_GT,
    STATE(209), 1,
      sym__EncodingDecl,
    STATE(259), 1,
      sym__SDDecl,
  [2442] = 3,
    ACTIONS(515), 1,
      anon_sym_GT,
    ACTIONS(517), 1,
      sym__S,
    STATE(134), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2453] = 4,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(520), 1,
      sym_Name,
    ACTIONS(522), 1,
      anon_sym_GT,
    STATE(389), 1,
      sym_PEReference,
  [2466] = 4,
    ACTIONS(524), 1,
      anon_sym_PIPE,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
    ACTIONS(529), 1,
      sym__S,
    STATE(136), 1,
      aux_sym_Enumeration_repeat1,
  [2479] = 1,
    ACTIONS(302), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2486] = 4,
    ACTIONS(354), 1,
      anon_sym_PIPE,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    ACTIONS(368), 1,
      sym__S,
    STATE(161), 1,
      aux_sym_Mixed_repeat1,
  [2499] = 4,
    ACTIONS(505), 1,
      anon_sym_GT,
    ACTIONS(532), 1,
      sym_Name,
    ACTIONS(534), 1,
      anon_sym_SLASH_GT,
    STATE(193), 1,
      sym_Attribute,
  [2512] = 4,
    ACTIONS(536), 1,
      anon_sym_PIPE,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    ACTIONS(540), 1,
      sym__S,
    STATE(136), 1,
      aux_sym_Enumeration_repeat1,
  [2525] = 1,
    ACTIONS(542), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2532] = 1,
    ACTIONS(260), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2539] = 4,
    ACTIONS(505), 1,
      anon_sym_GT,
    ACTIONS(534), 1,
      anon_sym_SLASH_GT,
    ACTIONS(544), 1,
      sym__S,
    STATE(181), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2552] = 3,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(546), 1,
      sym__S,
    STATE(109), 2,
      sym__DeclSep,
      sym_PEReference,
  [2563] = 4,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(548), 1,
      sym_Name,
    ACTIONS(550), 1,
      sym__S,
    STATE(89), 1,
      sym_PEReference,
  [2576] = 4,
    ACTIONS(532), 1,
      sym_Name,
    ACTIONS(552), 1,
      anon_sym_GT,
    ACTIONS(554), 1,
      anon_sym_SLASH_GT,
    STATE(193), 1,
      sym_Attribute,
  [2589] = 4,
    ACTIONS(536), 1,
      anon_sym_PIPE,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    ACTIONS(558), 1,
      sym__S,
    STATE(136), 1,
      aux_sym_Enumeration_repeat1,
  [2602] = 4,
    ACTIONS(560), 1,
      anon_sym_GT,
    ACTIONS(562), 1,
      sym__S,
    ACTIONS(564), 1,
      anon_sym_SLASH_GT,
    STATE(143), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2615] = 4,
    ACTIONS(505), 1,
      anon_sym_GT,
    ACTIONS(509), 1,
      anon_sym_SLASH_GT,
    ACTIONS(532), 1,
      sym_Name,
    STATE(193), 1,
      sym_Attribute,
  [2628] = 4,
    ACTIONS(566), 1,
      anon_sym_LT,
    STATE(2), 1,
      sym_STag,
    STATE(50), 1,
      sym_element,
    STATE(169), 1,
      sym_EmptyElemTag,
  [2641] = 2,
    ACTIONS(570), 1,
      anon_sym_LT,
    ACTIONS(568), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2650] = 1,
    ACTIONS(272), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2657] = 2,
    ACTIONS(574), 1,
      anon_sym_LT,
    ACTIONS(572), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2666] = 4,
    ACTIONS(536), 1,
      anon_sym_PIPE,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    ACTIONS(558), 1,
      sym__S,
    STATE(140), 1,
      aux_sym_Enumeration_repeat1,
  [2679] = 3,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(576), 1,
      sym__S,
    STATE(118), 2,
      sym__DeclSep,
      sym_PEReference,
  [2690] = 1,
    ACTIONS(578), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2697] = 3,
    ACTIONS(580), 1,
      anon_sym_GT,
    ACTIONS(582), 1,
      sym__S,
    STATE(134), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2708] = 4,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(520), 1,
      sym_Name,
    ACTIONS(580), 1,
      anon_sym_GT,
    STATE(389), 1,
      sym_PEReference,
  [2721] = 2,
    ACTIONS(586), 1,
      anon_sym_LT,
    ACTIONS(584), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2730] = 4,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(588), 1,
      sym_Name,
    ACTIONS(590), 1,
      sym__S,
    STATE(189), 1,
      sym_PEReference,
  [2743] = 4,
    ACTIONS(354), 1,
      anon_sym_PIPE,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
    ACTIONS(594), 1,
      sym__S,
    STATE(180), 1,
      aux_sym_Mixed_repeat1,
  [2756] = 4,
    ACTIONS(596), 1,
      anon_sym_ELEMENT,
    ACTIONS(598), 1,
      anon_sym_ATTLIST,
    ACTIONS(600), 1,
      anon_sym_NOTATION,
    ACTIONS(602), 1,
      anon_sym_ENTITY,
  [2769] = 1,
    ACTIONS(264), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2776] = 1,
    ACTIONS(310), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2783] = 4,
    ACTIONS(354), 1,
      anon_sym_PIPE,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    ACTIONS(362), 1,
      sym__S,
    STATE(183), 1,
      aux_sym_Mixed_repeat1,
  [2796] = 1,
    ACTIONS(604), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2803] = 1,
    ACTIONS(438), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [2810] = 2,
    ACTIONS(608), 1,
      anon_sym_LT,
    ACTIONS(606), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2819] = 1,
    ACTIONS(278), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2826] = 3,
    ACTIONS(610), 1,
      anon_sym_GT,
    ACTIONS(612), 1,
      sym__S,
    STATE(157), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2837] = 4,
    ACTIONS(560), 1,
      anon_sym_GT,
    ACTIONS(614), 1,
      sym__S,
    ACTIONS(616), 1,
      anon_sym_SLASH_GT,
    STATE(132), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2850] = 4,
    ACTIONS(532), 1,
      sym_Name,
    ACTIONS(552), 1,
      anon_sym_GT,
    ACTIONS(618), 1,
      anon_sym_SLASH_GT,
    STATE(193), 1,
      sym_Attribute,
  [2863] = 2,
    ACTIONS(620), 1,
      sym__S,
    ACTIONS(438), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [2872] = 4,
    ACTIONS(536), 1,
      anon_sym_PIPE,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
    ACTIONS(625), 1,
      sym__S,
    STATE(147), 1,
      aux_sym_Enumeration_repeat1,
  [2885] = 2,
    ACTIONS(629), 1,
      anon_sym_LT,
    ACTIONS(627), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2894] = 1,
    ACTIONS(631), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [2901] = 4,
    ACTIONS(566), 1,
      anon_sym_LT,
    STATE(2), 1,
      sym_STag,
    STATE(44), 1,
      sym_element,
    STATE(169), 1,
      sym_EmptyElemTag,
  [2914] = 1,
    ACTIONS(453), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2921] = 4,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(633), 1,
      sym_Name,
    ACTIONS(635), 1,
      sym__S,
    STATE(210), 1,
      sym_PEReference,
  [2934] = 4,
    ACTIONS(637), 1,
      anon_sym_PIPE,
    ACTIONS(640), 1,
      anon_sym_RPAREN,
    ACTIONS(642), 1,
      sym__S,
    STATE(180), 1,
      aux_sym_Mixed_repeat1,
  [2947] = 3,
    ACTIONS(647), 1,
      sym__S,
    STATE(181), 1,
      aux_sym_EmptyElemTag_repeat1,
    ACTIONS(645), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
  [2958] = 2,
    ACTIONS(652), 1,
      anon_sym_LT,
    ACTIONS(650), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2967] = 4,
    ACTIONS(354), 1,
      anon_sym_PIPE,
    ACTIONS(594), 1,
      sym__S,
    ACTIONS(654), 1,
      anon_sym_RPAREN,
    STATE(180), 1,
      aux_sym_Mixed_repeat1,
  [2980] = 2,
    ACTIONS(658), 1,
      anon_sym_LT,
    ACTIONS(656), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [2989] = 1,
    ACTIONS(660), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2995] = 1,
    ACTIONS(662), 3,
      anon_sym_LBRACK,
      anon_sym_GT,
      sym__S,
  [3001] = 1,
    ACTIONS(664), 3,
      anon_sym_LBRACK,
      anon_sym_GT,
      sym__S,
  [3007] = 3,
    ACTIONS(666), 1,
      sym__S,
    ACTIONS(668), 1,
      anon_sym_EQ,
    STATE(293), 1,
      sym__Eq,
  [3017] = 2,
    ACTIONS(670), 1,
      sym__S,
    ACTIONS(640), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [3025] = 3,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(633), 1,
      sym_Name,
    STATE(210), 1,
      sym_PEReference,
  [3035] = 3,
    ACTIONS(666), 1,
      sym__S,
    ACTIONS(668), 1,
      anon_sym_EQ,
    STATE(309), 1,
      sym__Eq,
  [3045] = 3,
    ACTIONS(673), 1,
      sym_Name,
    ACTIONS(675), 1,
      anon_sym_PERCENT,
    STATE(376), 1,
      sym_PEReference,
  [3055] = 1,
    ACTIONS(645), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3061] = 1,
    ACTIONS(677), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3067] = 3,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(679), 1,
      sym_Name,
    STATE(392), 1,
      sym_PEReference,
  [3077] = 3,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(681), 1,
      sym_Name,
    STATE(170), 1,
      sym_PEReference,
  [3087] = 3,
    ACTIONS(666), 1,
      sym__S,
    ACTIONS(668), 1,
      anon_sym_EQ,
    STATE(205), 1,
      sym__Eq,
  [3097] = 3,
    ACTIONS(683), 1,
      sym_Name,
    ACTIONS(685), 1,
      anon_sym_QMARK_GT,
    STATE(262), 1,
      sym_PseudoAtt,
  [3107] = 3,
    ACTIONS(687), 1,
      sym__S,
    ACTIONS(690), 1,
      anon_sym_QMARK_GT,
    STATE(199), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3117] = 3,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(692), 1,
      sym_Name,
    STATE(372), 1,
      sym_PEReference,
  [3127] = 3,
    ACTIONS(694), 1,
      anon_sym_DQUOTE,
    ACTIONS(696), 1,
      anon_sym_SQUOTE,
    STATE(310), 1,
      sym_PseudoAttValue,
  [3137] = 1,
    ACTIONS(698), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3143] = 3,
    ACTIONS(683), 1,
      sym_Name,
    ACTIONS(700), 1,
      anon_sym_QMARK_GT,
    STATE(262), 1,
      sym_PseudoAtt,
  [3153] = 3,
    ACTIONS(666), 1,
      sym__S,
    ACTIONS(668), 1,
      anon_sym_EQ,
    STATE(201), 1,
      sym__Eq,
  [3163] = 3,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    ACTIONS(386), 1,
      anon_sym_SQUOTE,
    STATE(226), 1,
      sym_AttValue,
  [3173] = 3,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(702), 1,
      sym_Name,
    STATE(317), 1,
      sym_PEReference,
  [3183] = 3,
    ACTIONS(704), 1,
      anon_sym_DQUOTE,
    ACTIONS(706), 1,
      anon_sym_SQUOTE,
    STATE(186), 1,
      sym_SystemLiteral,
  [3193] = 2,
    ACTIONS(710), 1,
      anon_sym_STAR,
    ACTIONS(708), 2,
      anon_sym_GT,
      sym__S,
  [3201] = 3,
    ACTIONS(712), 1,
      sym__S,
    ACTIONS(714), 1,
      anon_sym_QMARK_GT,
    STATE(275), 1,
      sym__SDDecl,
  [3211] = 2,
    ACTIONS(716), 1,
      sym__S,
    ACTIONS(660), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [3219] = 1,
    ACTIONS(527), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3225] = 3,
    ACTIONS(714), 1,
      anon_sym_QMARK_GT,
    ACTIONS(719), 1,
      anon_sym_encoding,
    ACTIONS(721), 1,
      anon_sym_standalone,
  [3235] = 2,
    ACTIONS(725), 1,
      anon_sym_STAR,
    ACTIONS(723), 2,
      anon_sym_GT,
      sym__S,
  [3243] = 1,
    ACTIONS(727), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3249] = 2,
    ACTIONS(731), 1,
      sym__S,
    ACTIONS(729), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3257] = 3,
    ACTIONS(666), 1,
      sym__S,
    ACTIONS(668), 1,
      anon_sym_EQ,
    STATE(264), 1,
      sym__Eq,
  [3267] = 3,
    ACTIONS(733), 1,
      anon_sym_LBRACK,
    ACTIONS(735), 1,
      anon_sym_GT,
    ACTIONS(737), 1,
      sym__S,
  [3277] = 3,
    ACTIONS(739), 1,
      sym__S,
    ACTIONS(741), 1,
      anon_sym_QMARK_GT,
    STATE(230), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3287] = 3,
    ACTIONS(743), 1,
      anon_sym_DQUOTE,
    ACTIONS(745), 1,
      anon_sym_SQUOTE,
    STATE(357), 1,
      sym_PubidLiteral,
  [3297] = 1,
    ACTIONS(747), 3,
      anon_sym_LBRACK,
      anon_sym_GT,
      sym__S,
  [3303] = 3,
    ACTIONS(704), 1,
      anon_sym_DQUOTE,
    ACTIONS(706), 1,
      anon_sym_SQUOTE,
    STATE(187), 1,
      sym_SystemLiteral,
  [3313] = 3,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(749), 1,
      sym_Name,
    STATE(225), 1,
      sym_PEReference,
  [3323] = 3,
    ACTIONS(751), 1,
      sym__S,
    ACTIONS(753), 1,
      anon_sym_QMARK_GT,
    STATE(228), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3333] = 1,
    ACTIONS(755), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3339] = 2,
    ACTIONS(757), 1,
      sym__S,
    ACTIONS(755), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [3347] = 1,
    ACTIONS(760), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3353] = 3,
    ACTIONS(499), 1,
      anon_sym_xml_DASHstylesheet,
    ACTIONS(501), 1,
      anon_sym_xml_DASHmodel,
    ACTIONS(503), 1,
      sym_PITarget,
  [3363] = 3,
    ACTIONS(762), 1,
      sym__S,
    ACTIONS(764), 1,
      anon_sym_QMARK_GT,
    STATE(199), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3373] = 3,
    ACTIONS(683), 1,
      sym_Name,
    ACTIONS(764), 1,
      anon_sym_QMARK_GT,
    STATE(262), 1,
      sym_PseudoAtt,
  [3383] = 3,
    ACTIONS(766), 1,
      sym__S,
    ACTIONS(768), 1,
      anon_sym_QMARK_GT,
    STATE(199), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3393] = 3,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(770), 1,
      sym_Name,
    STATE(92), 1,
      sym_PEReference,
  [3403] = 3,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    ACTIONS(386), 1,
      anon_sym_SQUOTE,
    STATE(302), 1,
      sym_AttValue,
  [3413] = 3,
    ACTIONS(683), 1,
      sym_Name,
    ACTIONS(768), 1,
      anon_sym_QMARK_GT,
    STATE(262), 1,
      sym_PseudoAtt,
  [3423] = 1,
    ACTIONS(772), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3429] = 3,
    ACTIONS(743), 1,
      anon_sym_DQUOTE,
    ACTIONS(745), 1,
      anon_sym_SQUOTE,
    STATE(289), 1,
      sym_PubidLiteral,
  [3439] = 3,
    ACTIONS(182), 1,
      anon_sym_PERCENT,
    ACTIONS(520), 1,
      sym_Name,
    STATE(389), 1,
      sym_PEReference,
  [3449] = 1,
    ACTIONS(774), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3455] = 2,
    ACTIONS(778), 1,
      sym__S,
    ACTIONS(776), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3463] = 3,
    ACTIONS(743), 1,
      anon_sym_DQUOTE,
    ACTIONS(745), 1,
      anon_sym_SQUOTE,
    STATE(288), 1,
      sym_PubidLiteral,
  [3473] = 3,
    ACTIONS(780), 1,
      anon_sym_GT,
    ACTIONS(782), 1,
      sym__S,
    STATE(266), 1,
      sym_NDataDecl,
  [3483] = 3,
    ACTIONS(784), 1,
      anon_sym_LBRACK,
    ACTIONS(786), 1,
      anon_sym_GT,
    ACTIONS(788), 1,
      sym__S,
  [3493] = 1,
    ACTIONS(790), 2,
      anon_sym_GT,
      sym__S,
  [3498] = 1,
    ACTIONS(792), 2,
      anon_sym_GT,
      sym__S,
  [3503] = 2,
    ACTIONS(794), 1,
      anon_sym_GT,
    ACTIONS(796), 1,
      sym__S,
  [3510] = 1,
    ACTIONS(798), 2,
      anon_sym_PERCENT,
      sym__S,
  [3515] = 2,
    ACTIONS(800), 1,
      anon_sym_GT,
    ACTIONS(802), 1,
      sym__S,
  [3522] = 2,
    ACTIONS(29), 1,
      anon_sym_LT_SLASH,
    STATE(51), 1,
      sym_ETag,
  [3529] = 2,
    ACTIONS(804), 1,
      sym__S,
    ACTIONS(806), 1,
      anon_sym_QMARK_GT,
  [3536] = 2,
    ACTIONS(808), 1,
      anon_sym_GT,
    ACTIONS(810), 1,
      sym__S,
  [3543] = 2,
    ACTIONS(812), 1,
      sym__S,
    ACTIONS(814), 1,
      anon_sym_QMARK_GT,
  [3550] = 2,
    ACTIONS(780), 1,
      anon_sym_GT,
    ACTIONS(816), 1,
      sym__S,
  [3557] = 2,
    ACTIONS(818), 1,
      sym__S,
    STATE(133), 1,
      sym__VersionInfo,
  [3564] = 1,
    ACTIONS(820), 2,
      anon_sym_PERCENT,
      sym__S,
  [3569] = 2,
    ACTIONS(27), 1,
      anon_sym_LT_SLASH,
    STATE(152), 1,
      sym_ETag,
  [3576] = 1,
    ACTIONS(822), 2,
      anon_sym_GT,
      sym__S,
  [3581] = 1,
    ACTIONS(824), 2,
      anon_sym_PERCENT,
      sym__S,
  [3586] = 1,
    ACTIONS(826), 2,
      anon_sym_PERCENT,
      sym__S,
  [3591] = 2,
    ACTIONS(828), 1,
      anon_sym_GT,
    ACTIONS(830), 1,
      sym__S,
  [3598] = 2,
    ACTIONS(714), 1,
      anon_sym_QMARK_GT,
    ACTIONS(832), 1,
      sym__S,
  [3605] = 1,
    ACTIONS(834), 2,
      anon_sym_GT,
      sym__S,
  [3610] = 2,
    ACTIONS(836), 1,
      anon_sym_GT,
    ACTIONS(838), 1,
      sym__S,
  [3617] = 1,
    ACTIONS(690), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3622] = 1,
    ACTIONS(840), 2,
      anon_sym_PERCENT,
      sym__S,
  [3627] = 2,
    ACTIONS(842), 1,
      anon_sym_DQUOTE,
    ACTIONS(844), 1,
      anon_sym_SQUOTE,
  [3634] = 2,
    ACTIONS(846), 1,
      anon_sym_GT,
    ACTIONS(848), 1,
      anon_sym_NDATA,
  [3641] = 2,
    ACTIONS(846), 1,
      anon_sym_GT,
    ACTIONS(850), 1,
      sym__S,
  [3648] = 2,
    ACTIONS(721), 1,
      anon_sym_standalone,
    ACTIONS(852), 1,
      anon_sym_QMARK_GT,
  [3655] = 1,
    ACTIONS(854), 2,
      anon_sym_PERCENT,
      sym__S,
  [3660] = 1,
    ACTIONS(856), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3665] = 1,
    ACTIONS(858), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3670] = 2,
    ACTIONS(710), 1,
      anon_sym_RPAREN,
    ACTIONS(860), 1,
      anon_sym_PIPE,
  [3677] = 2,
    ACTIONS(862), 1,
      anon_sym_GT,
    ACTIONS(864), 1,
      sym__S,
  [3684] = 1,
    ACTIONS(866), 2,
      anon_sym_GT,
      sym__S,
  [3689] = 1,
    ACTIONS(868), 2,
      anon_sym_GT,
      sym__S,
  [3694] = 2,
    ACTIONS(852), 1,
      anon_sym_QMARK_GT,
    ACTIONS(870), 1,
      sym__S,
  [3701] = 2,
    ACTIONS(872), 1,
      anon_sym_RPAREN,
    ACTIONS(874), 1,
      sym__S,
  [3708] = 1,
    ACTIONS(876), 2,
      anon_sym_GT,
      sym__S,
  [3713] = 1,
    ACTIONS(878), 2,
      anon_sym_GT,
      sym__S,
  [3718] = 1,
    ACTIONS(880), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [3723] = 2,
    ACTIONS(882), 1,
      sym_Name,
    ACTIONS(884), 1,
      sym__S,
  [3730] = 1,
    ACTIONS(886), 2,
      anon_sym_PERCENT,
      sym__S,
  [3735] = 2,
    ACTIONS(888), 1,
      sym__S,
    ACTIONS(890), 1,
      sym_Nmtoken,
  [3742] = 1,
    ACTIONS(892), 2,
      anon_sym_GT,
      sym__S,
  [3747] = 1,
    ACTIONS(894), 2,
      anon_sym_GT,
      sym__S,
  [3752] = 2,
    ACTIONS(683), 1,
      sym_Name,
    STATE(262), 1,
      sym_PseudoAtt,
  [3759] = 2,
    ACTIONS(896), 1,
      anon_sym_GT,
    ACTIONS(898), 1,
      sym__S,
  [3766] = 1,
    ACTIONS(900), 2,
      anon_sym_GT,
      sym__S,
  [3771] = 2,
    ACTIONS(902), 1,
      anon_sym_GT,
    ACTIONS(904), 1,
      sym__S,
  [3778] = 1,
    ACTIONS(902), 2,
      anon_sym_GT,
      sym__S,
  [3783] = 1,
    ACTIONS(906), 2,
      anon_sym_PERCENT,
      sym__S,
  [3788] = 2,
    ACTIONS(908), 1,
      anon_sym_GT,
    ACTIONS(910), 1,
      sym__S,
  [3795] = 1,
    ACTIONS(912), 2,
      anon_sym_GT,
      sym__S,
  [3800] = 2,
    ACTIONS(914), 1,
      anon_sym_DQUOTE,
    ACTIONS(916), 1,
      anon_sym_SQUOTE,
  [3807] = 2,
    ACTIONS(532), 1,
      sym_Name,
    STATE(193), 1,
      sym_Attribute,
  [3814] = 1,
    ACTIONS(918), 2,
      anon_sym_PERCENT,
      sym__S,
  [3819] = 1,
    ACTIONS(920), 2,
      anon_sym_PERCENT,
      sym__S,
  [3824] = 2,
    ACTIONS(922), 1,
      anon_sym_RPAREN,
    ACTIONS(924), 1,
      sym__S,
  [3831] = 1,
    ACTIONS(926), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3836] = 1,
    ACTIONS(928), 2,
      anon_sym_PERCENT,
      sym__S,
  [3841] = 1,
    ACTIONS(723), 2,
      anon_sym_GT,
      sym__S,
  [3846] = 1,
    ACTIONS(930), 2,
      anon_sym_GT,
      sym__S,
  [3851] = 1,
    ACTIONS(932), 2,
      anon_sym_GT,
      sym__S,
  [3856] = 2,
    ACTIONS(934), 1,
      anon_sym_RPAREN,
    ACTIONS(936), 1,
      sym__S,
  [3863] = 1,
    ACTIONS(776), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3868] = 2,
    ACTIONS(938), 1,
      anon_sym_PIPE,
    ACTIONS(940), 1,
      anon_sym_RPAREN,
  [3875] = 2,
    ACTIONS(725), 1,
      anon_sym_RPAREN,
    ACTIONS(860), 1,
      anon_sym_PIPE,
  [3882] = 1,
    ACTIONS(942), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3887] = 1,
    ACTIONS(944), 2,
      anon_sym_GT,
      sym__S,
  [3892] = 2,
    ACTIONS(946), 1,
      anon_sym_DQUOTE,
    ACTIONS(948), 1,
      anon_sym_SQUOTE,
  [3899] = 1,
    ACTIONS(950), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3904] = 2,
    ACTIONS(952), 1,
      sym__S,
    ACTIONS(954), 1,
      sym_Nmtoken,
  [3911] = 2,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    ACTIONS(938), 1,
      anon_sym_PIPE,
  [3918] = 2,
    ACTIONS(956), 1,
      anon_sym_GT,
    ACTIONS(958), 1,
      sym__S,
  [3925] = 1,
    ACTIONS(960), 2,
      anon_sym_GT,
      sym__S,
  [3930] = 1,
    ACTIONS(962), 2,
      anon_sym_GT,
      sym__S,
  [3935] = 1,
    ACTIONS(964), 2,
      anon_sym_GT,
      sym__S,
  [3940] = 1,
    ACTIONS(966), 2,
      anon_sym_GT,
      sym__S,
  [3945] = 1,
    ACTIONS(968), 2,
      anon_sym_PERCENT,
      sym__S,
  [3950] = 1,
    ACTIONS(970), 2,
      anon_sym_PERCENT,
      sym__S,
  [3955] = 1,
    ACTIONS(972), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3960] = 1,
    ACTIONS(974), 2,
      anon_sym_PERCENT,
      sym__S,
  [3965] = 1,
    ACTIONS(976), 2,
      anon_sym_yes,
      anon_sym_no,
  [3970] = 1,
    ACTIONS(978), 2,
      anon_sym_yes,
      anon_sym_no,
  [3975] = 1,
    ACTIONS(980), 2,
      anon_sym_GT,
      sym__S,
  [3980] = 1,
    ACTIONS(982), 2,
      anon_sym_GT,
      sym__S,
  [3985] = 1,
    ACTIONS(984), 2,
      anon_sym_GT,
      sym__S,
  [3990] = 2,
    ACTIONS(986), 1,
      anon_sym_GT,
    ACTIONS(988), 1,
      sym__S,
  [3997] = 2,
    ACTIONS(986), 1,
      anon_sym_GT,
    ACTIONS(990), 1,
      anon_sym_LBRACK,
  [4004] = 2,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    ACTIONS(938), 1,
      anon_sym_PIPE,
  [4011] = 1,
    ACTIONS(992), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4016] = 2,
    ACTIONS(994), 1,
      sym__S,
    ACTIONS(996), 1,
      sym_Nmtoken,
  [4023] = 1,
    ACTIONS(998), 1,
      sym__S,
  [4027] = 1,
    ACTIONS(836), 1,
      anon_sym_GT,
  [4031] = 1,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
  [4035] = 1,
    ACTIONS(1000), 1,
      anon_sym_SQUOTE,
  [4039] = 1,
    ACTIONS(1002), 1,
      sym_EncName,
  [4043] = 1,
    ACTIONS(1004), 1,
      sym__S,
  [4047] = 1,
    ACTIONS(1006), 1,
      anon_sym_STAR,
  [4051] = 1,
    ACTIONS(1008), 1,
      sym_EncName,
  [4055] = 1,
    ACTIONS(1010), 1,
      anon_sym_GT,
  [4059] = 1,
    ACTIONS(882), 1,
      sym_Name,
  [4063] = 1,
    ACTIONS(1012), 1,
      anon_sym_SEMI,
  [4067] = 1,
    ACTIONS(1014), 1,
      anon_sym_LPAREN,
  [4071] = 1,
    ACTIONS(1016), 1,
      sym__S,
  [4075] = 1,
    ACTIONS(956), 1,
      anon_sym_GT,
  [4079] = 1,
    ACTIONS(1018), 1,
      sym_Nmtoken,
  [4083] = 1,
    ACTIONS(1020), 1,
      sym__S,
  [4087] = 1,
    ACTIONS(954), 1,
      sym_Nmtoken,
  [4091] = 1,
    ACTIONS(1022), 1,
      sym__S,
  [4095] = 1,
    ACTIONS(1024), 1,
      aux_sym_SystemLiteral_token1,
  [4099] = 1,
    ACTIONS(1026), 1,
      aux_sym_SystemLiteral_token2,
  [4103] = 1,
    ACTIONS(1028), 1,
      anon_sym_QMARK_GT,
  [4107] = 1,
    ACTIONS(1030), 1,
      aux_sym_PubidLiteral_token1,
  [4111] = 1,
    ACTIONS(1032), 1,
      anon_sym_DOCTYPE,
  [4115] = 1,
    ACTIONS(1034), 1,
      sym_VersionNum,
  [4119] = 1,
    ACTIONS(1036), 1,
      aux_sym_PubidLiteral_token2,
  [4123] = 1,
    ACTIONS(904), 1,
      sym__S,
  [4127] = 1,
    ACTIONS(1038), 1,
      sym_VersionNum,
  [4131] = 1,
    ACTIONS(1040), 1,
      sym_Nmtoken,
  [4135] = 1,
    ACTIONS(938), 1,
      anon_sym_PIPE,
  [4139] = 1,
    ACTIONS(1042), 1,
      anon_sym_DQUOTE,
  [4143] = 1,
    ACTIONS(1044), 1,
      sym__S,
  [4147] = 1,
    ACTIONS(1046), 1,
      anon_sym_PIPE,
  [4151] = 1,
    ACTIONS(1042), 1,
      anon_sym_SQUOTE,
  [4155] = 1,
    ACTIONS(1048), 1,
      sym__S,
  [4159] = 1,
    ACTIONS(860), 1,
      anon_sym_PIPE,
  [4163] = 1,
    ACTIONS(725), 1,
      anon_sym_STAR,
  [4167] = 1,
    ACTIONS(1050), 1,
      anon_sym_DQUOTE,
  [4171] = 1,
    ACTIONS(1050), 1,
      anon_sym_SQUOTE,
  [4175] = 1,
    ACTIONS(1052), 1,
      anon_sym_GT,
  [4179] = 1,
    ACTIONS(1054), 1,
      sym__S,
  [4183] = 1,
    ACTIONS(1056), 1,
      sym__S,
  [4187] = 1,
    ACTIONS(1058), 1,
      sym__S,
  [4191] = 1,
    ACTIONS(922), 1,
      anon_sym_RPAREN,
  [4195] = 1,
    ACTIONS(852), 1,
      anon_sym_QMARK_GT,
  [4199] = 1,
    ACTIONS(1060), 1,
      sym__S,
  [4203] = 1,
    ACTIONS(872), 1,
      anon_sym_RPAREN,
  [4207] = 1,
    ACTIONS(862), 1,
      anon_sym_GT,
  [4211] = 1,
    ACTIONS(1062), 1,
      anon_sym_DQUOTE,
  [4215] = 1,
    ACTIONS(1062), 1,
      anon_sym_SQUOTE,
  [4219] = 1,
    ACTIONS(1064), 1,
      anon_sym_RPAREN,
  [4223] = 1,
    ACTIONS(1066), 1,
      anon_sym_DQUOTE,
  [4227] = 1,
    ACTIONS(1066), 1,
      anon_sym_SQUOTE,
  [4231] = 1,
    ACTIONS(1068), 1,
      sym_Name,
  [4235] = 1,
    ACTIONS(1070), 1,
      anon_sym_EQ,
  [4239] = 1,
    ACTIONS(1072), 1,
      anon_sym_GT,
  [4243] = 1,
    ACTIONS(1074), 1,
      sym_CData,
  [4247] = 1,
    ACTIONS(846), 1,
      anon_sym_GT,
  [4251] = 1,
    ACTIONS(1076), 1,
      sym__S,
  [4255] = 1,
    ACTIONS(1078), 1,
      anon_sym_QMARK_GT,
  [4259] = 1,
    ACTIONS(1080), 1,
      anon_sym_RBRACK_RBRACK_GT,
  [4263] = 1,
    ACTIONS(1082), 1,
      sym__S,
  [4267] = 1,
    ACTIONS(1084), 1,
      anon_sym_SEMI,
  [4271] = 1,
    ACTIONS(1086), 1,
      anon_sym_SEMI,
  [4275] = 1,
    ACTIONS(1088), 1,
      anon_sym_LBRACK,
  [4279] = 1,
    ACTIONS(1090), 1,
      anon_sym_version,
  [4283] = 1,
    ACTIONS(1092), 1,
      sym__pi_content,
  [4287] = 1,
    ACTIONS(1094), 1,
      sym_Name,
  [4291] = 1,
    ACTIONS(1096), 1,
      sym_CData,
  [4295] = 1,
    ACTIONS(1098), 1,
      anon_sym_GT,
  [4299] = 1,
    ACTIONS(1100), 1,
      sym_Name,
  [4303] = 1,
    ACTIONS(1102), 1,
      sym_PITarget,
  [4307] = 1,
    ACTIONS(1104), 1,
      aux_sym_CharRef_token2,
  [4311] = 1,
    ACTIONS(1104), 1,
      aux_sym_CharRef_token1,
  [4315] = 1,
    ACTIONS(1106), 1,
      sym_Name,
  [4319] = 1,
    ACTIONS(1108), 1,
      anon_sym_CDATA,
  [4323] = 1,
    ACTIONS(1110), 1,
      anon_sym_GT,
  [4327] = 1,
    ACTIONS(1112), 1,
      anon_sym_GT,
  [4331] = 1,
    ACTIONS(1114), 1,
      sym__S,
  [4335] = 1,
    ACTIONS(503), 1,
      sym_PITarget,
  [4339] = 1,
    ACTIONS(1116), 1,
      sym__S,
  [4343] = 1,
    ACTIONS(1118), 1,
      sym__S,
  [4347] = 1,
    ACTIONS(1120), 1,
      ts_builtin_sym_end,
  [4351] = 1,
    ACTIONS(1122), 1,
      anon_sym_SEMI,
  [4355] = 1,
    ACTIONS(1124), 1,
      anon_sym_SEMI,
  [4359] = 1,
    ACTIONS(1126), 1,
      sym__S,
  [4363] = 1,
    ACTIONS(1128), 1,
      anon_sym_QMARK_GT,
  [4367] = 1,
    ACTIONS(1130), 1,
      sym_Name,
  [4371] = 1,
    ACTIONS(1132), 1,
      anon_sym_GT,
  [4375] = 1,
    ACTIONS(1134), 1,
      anon_sym_SEMI,
  [4379] = 1,
    ACTIONS(1136), 1,
      anon_sym_SEMI,
  [4383] = 1,
    ACTIONS(1138), 1,
      anon_sym_SEMI,
  [4387] = 1,
    ACTIONS(1140), 1,
      anon_sym_SEMI,
  [4391] = 1,
    ACTIONS(1142), 1,
      anon_sym_SEMI,
  [4395] = 1,
    ACTIONS(1144), 1,
      anon_sym_SEMI,
  [4399] = 1,
    ACTIONS(1146), 1,
      anon_sym_SEMI,
  [4403] = 1,
    ACTIONS(1148), 1,
      anon_sym_SEMI,
  [4407] = 1,
    ACTIONS(1150), 1,
      sym_Name,
  [4411] = 1,
    ACTIONS(1152), 1,
      sym_Name,
  [4415] = 1,
    ACTIONS(1154), 1,
      aux_sym_CharRef_token1,
  [4419] = 1,
    ACTIONS(1154), 1,
      aux_sym_CharRef_token2,
  [4423] = 1,
    ACTIONS(1156), 1,
      sym_Name,
  [4427] = 1,
    ACTIONS(1158), 1,
      sym__pi_content,
  [4431] = 1,
    ACTIONS(1160), 1,
      sym_Name,
  [4435] = 1,
    ACTIONS(1162), 1,
      sym_Name,
  [4439] = 1,
    ACTIONS(1164), 1,
      aux_sym_CharRef_token1,
  [4443] = 1,
    ACTIONS(1164), 1,
      aux_sym_CharRef_token2,
  [4447] = 1,
    ACTIONS(1166), 1,
      sym_Name,
  [4451] = 1,
    ACTIONS(1168), 1,
      sym_Name,
  [4455] = 1,
    ACTIONS(1170), 1,
      aux_sym_CharRef_token1,
  [4459] = 1,
    ACTIONS(1170), 1,
      aux_sym_CharRef_token2,
  [4463] = 1,
    ACTIONS(1172), 1,
      sym_Name,
  [4467] = 1,
    ACTIONS(1174), 1,
      aux_sym_CharRef_token1,
  [4471] = 1,
    ACTIONS(1174), 1,
      aux_sym_CharRef_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 150,
  [SMALL_STATE(6)] = 196,
  [SMALL_STATE(7)] = 235,
  [SMALL_STATE(8)] = 268,
  [SMALL_STATE(9)] = 301,
  [SMALL_STATE(10)] = 320,
  [SMALL_STATE(11)] = 353,
  [SMALL_STATE(12)] = 386,
  [SMALL_STATE(13)] = 419,
  [SMALL_STATE(14)] = 449,
  [SMALL_STATE(15)] = 479,
  [SMALL_STATE(16)] = 509,
  [SMALL_STATE(17)] = 539,
  [SMALL_STATE(18)] = 563,
  [SMALL_STATE(19)] = 591,
  [SMALL_STATE(20)] = 619,
  [SMALL_STATE(21)] = 643,
  [SMALL_STATE(22)] = 671,
  [SMALL_STATE(23)] = 699,
  [SMALL_STATE(24)] = 727,
  [SMALL_STATE(25)] = 751,
  [SMALL_STATE(26)] = 779,
  [SMALL_STATE(27)] = 801,
  [SMALL_STATE(28)] = 825,
  [SMALL_STATE(29)] = 853,
  [SMALL_STATE(30)] = 867,
  [SMALL_STATE(31)] = 881,
  [SMALL_STATE(32)] = 905,
  [SMALL_STATE(33)] = 923,
  [SMALL_STATE(34)] = 941,
  [SMALL_STATE(35)] = 965,
  [SMALL_STATE(36)] = 989,
  [SMALL_STATE(37)] = 1013,
  [SMALL_STATE(38)] = 1031,
  [SMALL_STATE(39)] = 1055,
  [SMALL_STATE(40)] = 1069,
  [SMALL_STATE(41)] = 1083,
  [SMALL_STATE(42)] = 1097,
  [SMALL_STATE(43)] = 1121,
  [SMALL_STATE(44)] = 1145,
  [SMALL_STATE(45)] = 1163,
  [SMALL_STATE(46)] = 1181,
  [SMALL_STATE(47)] = 1205,
  [SMALL_STATE(48)] = 1219,
  [SMALL_STATE(49)] = 1233,
  [SMALL_STATE(50)] = 1257,
  [SMALL_STATE(51)] = 1275,
  [SMALL_STATE(52)] = 1289,
  [SMALL_STATE(53)] = 1307,
  [SMALL_STATE(54)] = 1321,
  [SMALL_STATE(55)] = 1339,
  [SMALL_STATE(56)] = 1353,
  [SMALL_STATE(57)] = 1367,
  [SMALL_STATE(58)] = 1389,
  [SMALL_STATE(59)] = 1403,
  [SMALL_STATE(60)] = 1417,
  [SMALL_STATE(61)] = 1435,
  [SMALL_STATE(62)] = 1453,
  [SMALL_STATE(63)] = 1467,
  [SMALL_STATE(64)] = 1481,
  [SMALL_STATE(65)] = 1505,
  [SMALL_STATE(66)] = 1523,
  [SMALL_STATE(67)] = 1537,
  [SMALL_STATE(68)] = 1551,
  [SMALL_STATE(69)] = 1569,
  [SMALL_STATE(70)] = 1580,
  [SMALL_STATE(71)] = 1605,
  [SMALL_STATE(72)] = 1626,
  [SMALL_STATE(73)] = 1637,
  [SMALL_STATE(74)] = 1658,
  [SMALL_STATE(75)] = 1669,
  [SMALL_STATE(76)] = 1689,
  [SMALL_STATE(77)] = 1701,
  [SMALL_STATE(78)] = 1723,
  [SMALL_STATE(79)] = 1743,
  [SMALL_STATE(80)] = 1755,
  [SMALL_STATE(81)] = 1767,
  [SMALL_STATE(82)] = 1787,
  [SMALL_STATE(83)] = 1807,
  [SMALL_STATE(84)] = 1818,
  [SMALL_STATE(85)] = 1837,
  [SMALL_STATE(86)] = 1848,
  [SMALL_STATE(87)] = 1859,
  [SMALL_STATE(88)] = 1870,
  [SMALL_STATE(89)] = 1881,
  [SMALL_STATE(90)] = 1900,
  [SMALL_STATE(91)] = 1917,
  [SMALL_STATE(92)] = 1934,
  [SMALL_STATE(93)] = 1953,
  [SMALL_STATE(94)] = 1964,
  [SMALL_STATE(95)] = 1983,
  [SMALL_STATE(96)] = 2000,
  [SMALL_STATE(97)] = 2011,
  [SMALL_STATE(98)] = 2028,
  [SMALL_STATE(99)] = 2047,
  [SMALL_STATE(100)] = 2064,
  [SMALL_STATE(101)] = 2075,
  [SMALL_STATE(102)] = 2086,
  [SMALL_STATE(103)] = 2097,
  [SMALL_STATE(104)] = 2108,
  [SMALL_STATE(105)] = 2119,
  [SMALL_STATE(106)] = 2130,
  [SMALL_STATE(107)] = 2141,
  [SMALL_STATE(108)] = 2155,
  [SMALL_STATE(109)] = 2169,
  [SMALL_STATE(110)] = 2179,
  [SMALL_STATE(111)] = 2193,
  [SMALL_STATE(112)] = 2203,
  [SMALL_STATE(113)] = 2213,
  [SMALL_STATE(114)] = 2223,
  [SMALL_STATE(115)] = 2233,
  [SMALL_STATE(116)] = 2243,
  [SMALL_STATE(117)] = 2253,
  [SMALL_STATE(118)] = 2263,
  [SMALL_STATE(119)] = 2273,
  [SMALL_STATE(120)] = 2283,
  [SMALL_STATE(121)] = 2299,
  [SMALL_STATE(122)] = 2313,
  [SMALL_STATE(123)] = 2323,
  [SMALL_STATE(124)] = 2333,
  [SMALL_STATE(125)] = 2343,
  [SMALL_STATE(126)] = 2357,
  [SMALL_STATE(127)] = 2371,
  [SMALL_STATE(128)] = 2378,
  [SMALL_STATE(129)] = 2385,
  [SMALL_STATE(130)] = 2394,
  [SMALL_STATE(131)] = 2403,
  [SMALL_STATE(132)] = 2416,
  [SMALL_STATE(133)] = 2429,
  [SMALL_STATE(134)] = 2442,
  [SMALL_STATE(135)] = 2453,
  [SMALL_STATE(136)] = 2466,
  [SMALL_STATE(137)] = 2479,
  [SMALL_STATE(138)] = 2486,
  [SMALL_STATE(139)] = 2499,
  [SMALL_STATE(140)] = 2512,
  [SMALL_STATE(141)] = 2525,
  [SMALL_STATE(142)] = 2532,
  [SMALL_STATE(143)] = 2539,
  [SMALL_STATE(144)] = 2552,
  [SMALL_STATE(145)] = 2563,
  [SMALL_STATE(146)] = 2576,
  [SMALL_STATE(147)] = 2589,
  [SMALL_STATE(148)] = 2602,
  [SMALL_STATE(149)] = 2615,
  [SMALL_STATE(150)] = 2628,
  [SMALL_STATE(151)] = 2641,
  [SMALL_STATE(152)] = 2650,
  [SMALL_STATE(153)] = 2657,
  [SMALL_STATE(154)] = 2666,
  [SMALL_STATE(155)] = 2679,
  [SMALL_STATE(156)] = 2690,
  [SMALL_STATE(157)] = 2697,
  [SMALL_STATE(158)] = 2708,
  [SMALL_STATE(159)] = 2721,
  [SMALL_STATE(160)] = 2730,
  [SMALL_STATE(161)] = 2743,
  [SMALL_STATE(162)] = 2756,
  [SMALL_STATE(163)] = 2769,
  [SMALL_STATE(164)] = 2776,
  [SMALL_STATE(165)] = 2783,
  [SMALL_STATE(166)] = 2796,
  [SMALL_STATE(167)] = 2803,
  [SMALL_STATE(168)] = 2810,
  [SMALL_STATE(169)] = 2819,
  [SMALL_STATE(170)] = 2826,
  [SMALL_STATE(171)] = 2837,
  [SMALL_STATE(172)] = 2850,
  [SMALL_STATE(173)] = 2863,
  [SMALL_STATE(174)] = 2872,
  [SMALL_STATE(175)] = 2885,
  [SMALL_STATE(176)] = 2894,
  [SMALL_STATE(177)] = 2901,
  [SMALL_STATE(178)] = 2914,
  [SMALL_STATE(179)] = 2921,
  [SMALL_STATE(180)] = 2934,
  [SMALL_STATE(181)] = 2947,
  [SMALL_STATE(182)] = 2958,
  [SMALL_STATE(183)] = 2967,
  [SMALL_STATE(184)] = 2980,
  [SMALL_STATE(185)] = 2989,
  [SMALL_STATE(186)] = 2995,
  [SMALL_STATE(187)] = 3001,
  [SMALL_STATE(188)] = 3007,
  [SMALL_STATE(189)] = 3017,
  [SMALL_STATE(190)] = 3025,
  [SMALL_STATE(191)] = 3035,
  [SMALL_STATE(192)] = 3045,
  [SMALL_STATE(193)] = 3055,
  [SMALL_STATE(194)] = 3061,
  [SMALL_STATE(195)] = 3067,
  [SMALL_STATE(196)] = 3077,
  [SMALL_STATE(197)] = 3087,
  [SMALL_STATE(198)] = 3097,
  [SMALL_STATE(199)] = 3107,
  [SMALL_STATE(200)] = 3117,
  [SMALL_STATE(201)] = 3127,
  [SMALL_STATE(202)] = 3137,
  [SMALL_STATE(203)] = 3143,
  [SMALL_STATE(204)] = 3153,
  [SMALL_STATE(205)] = 3163,
  [SMALL_STATE(206)] = 3173,
  [SMALL_STATE(207)] = 3183,
  [SMALL_STATE(208)] = 3193,
  [SMALL_STATE(209)] = 3201,
  [SMALL_STATE(210)] = 3211,
  [SMALL_STATE(211)] = 3219,
  [SMALL_STATE(212)] = 3225,
  [SMALL_STATE(213)] = 3235,
  [SMALL_STATE(214)] = 3243,
  [SMALL_STATE(215)] = 3249,
  [SMALL_STATE(216)] = 3257,
  [SMALL_STATE(217)] = 3267,
  [SMALL_STATE(218)] = 3277,
  [SMALL_STATE(219)] = 3287,
  [SMALL_STATE(220)] = 3297,
  [SMALL_STATE(221)] = 3303,
  [SMALL_STATE(222)] = 3313,
  [SMALL_STATE(223)] = 3323,
  [SMALL_STATE(224)] = 3333,
  [SMALL_STATE(225)] = 3339,
  [SMALL_STATE(226)] = 3347,
  [SMALL_STATE(227)] = 3353,
  [SMALL_STATE(228)] = 3363,
  [SMALL_STATE(229)] = 3373,
  [SMALL_STATE(230)] = 3383,
  [SMALL_STATE(231)] = 3393,
  [SMALL_STATE(232)] = 3403,
  [SMALL_STATE(233)] = 3413,
  [SMALL_STATE(234)] = 3423,
  [SMALL_STATE(235)] = 3429,
  [SMALL_STATE(236)] = 3439,
  [SMALL_STATE(237)] = 3449,
  [SMALL_STATE(238)] = 3455,
  [SMALL_STATE(239)] = 3463,
  [SMALL_STATE(240)] = 3473,
  [SMALL_STATE(241)] = 3483,
  [SMALL_STATE(242)] = 3493,
  [SMALL_STATE(243)] = 3498,
  [SMALL_STATE(244)] = 3503,
  [SMALL_STATE(245)] = 3510,
  [SMALL_STATE(246)] = 3515,
  [SMALL_STATE(247)] = 3522,
  [SMALL_STATE(248)] = 3529,
  [SMALL_STATE(249)] = 3536,
  [SMALL_STATE(250)] = 3543,
  [SMALL_STATE(251)] = 3550,
  [SMALL_STATE(252)] = 3557,
  [SMALL_STATE(253)] = 3564,
  [SMALL_STATE(254)] = 3569,
  [SMALL_STATE(255)] = 3576,
  [SMALL_STATE(256)] = 3581,
  [SMALL_STATE(257)] = 3586,
  [SMALL_STATE(258)] = 3591,
  [SMALL_STATE(259)] = 3598,
  [SMALL_STATE(260)] = 3605,
  [SMALL_STATE(261)] = 3610,
  [SMALL_STATE(262)] = 3617,
  [SMALL_STATE(263)] = 3622,
  [SMALL_STATE(264)] = 3627,
  [SMALL_STATE(265)] = 3634,
  [SMALL_STATE(266)] = 3641,
  [SMALL_STATE(267)] = 3648,
  [SMALL_STATE(268)] = 3655,
  [SMALL_STATE(269)] = 3660,
  [SMALL_STATE(270)] = 3665,
  [SMALL_STATE(271)] = 3670,
  [SMALL_STATE(272)] = 3677,
  [SMALL_STATE(273)] = 3684,
  [SMALL_STATE(274)] = 3689,
  [SMALL_STATE(275)] = 3694,
  [SMALL_STATE(276)] = 3701,
  [SMALL_STATE(277)] = 3708,
  [SMALL_STATE(278)] = 3713,
  [SMALL_STATE(279)] = 3718,
  [SMALL_STATE(280)] = 3723,
  [SMALL_STATE(281)] = 3730,
  [SMALL_STATE(282)] = 3735,
  [SMALL_STATE(283)] = 3742,
  [SMALL_STATE(284)] = 3747,
  [SMALL_STATE(285)] = 3752,
  [SMALL_STATE(286)] = 3759,
  [SMALL_STATE(287)] = 3766,
  [SMALL_STATE(288)] = 3771,
  [SMALL_STATE(289)] = 3778,
  [SMALL_STATE(290)] = 3783,
  [SMALL_STATE(291)] = 3788,
  [SMALL_STATE(292)] = 3795,
  [SMALL_STATE(293)] = 3800,
  [SMALL_STATE(294)] = 3807,
  [SMALL_STATE(295)] = 3814,
  [SMALL_STATE(296)] = 3819,
  [SMALL_STATE(297)] = 3824,
  [SMALL_STATE(298)] = 3831,
  [SMALL_STATE(299)] = 3836,
  [SMALL_STATE(300)] = 3841,
  [SMALL_STATE(301)] = 3846,
  [SMALL_STATE(302)] = 3851,
  [SMALL_STATE(303)] = 3856,
  [SMALL_STATE(304)] = 3863,
  [SMALL_STATE(305)] = 3868,
  [SMALL_STATE(306)] = 3875,
  [SMALL_STATE(307)] = 3882,
  [SMALL_STATE(308)] = 3887,
  [SMALL_STATE(309)] = 3892,
  [SMALL_STATE(310)] = 3899,
  [SMALL_STATE(311)] = 3904,
  [SMALL_STATE(312)] = 3911,
  [SMALL_STATE(313)] = 3918,
  [SMALL_STATE(314)] = 3925,
  [SMALL_STATE(315)] = 3930,
  [SMALL_STATE(316)] = 3935,
  [SMALL_STATE(317)] = 3940,
  [SMALL_STATE(318)] = 3945,
  [SMALL_STATE(319)] = 3950,
  [SMALL_STATE(320)] = 3955,
  [SMALL_STATE(321)] = 3960,
  [SMALL_STATE(322)] = 3965,
  [SMALL_STATE(323)] = 3970,
  [SMALL_STATE(324)] = 3975,
  [SMALL_STATE(325)] = 3980,
  [SMALL_STATE(326)] = 3985,
  [SMALL_STATE(327)] = 3990,
  [SMALL_STATE(328)] = 3997,
  [SMALL_STATE(329)] = 4004,
  [SMALL_STATE(330)] = 4011,
  [SMALL_STATE(331)] = 4016,
  [SMALL_STATE(332)] = 4023,
  [SMALL_STATE(333)] = 4027,
  [SMALL_STATE(334)] = 4031,
  [SMALL_STATE(335)] = 4035,
  [SMALL_STATE(336)] = 4039,
  [SMALL_STATE(337)] = 4043,
  [SMALL_STATE(338)] = 4047,
  [SMALL_STATE(339)] = 4051,
  [SMALL_STATE(340)] = 4055,
  [SMALL_STATE(341)] = 4059,
  [SMALL_STATE(342)] = 4063,
  [SMALL_STATE(343)] = 4067,
  [SMALL_STATE(344)] = 4071,
  [SMALL_STATE(345)] = 4075,
  [SMALL_STATE(346)] = 4079,
  [SMALL_STATE(347)] = 4083,
  [SMALL_STATE(348)] = 4087,
  [SMALL_STATE(349)] = 4091,
  [SMALL_STATE(350)] = 4095,
  [SMALL_STATE(351)] = 4099,
  [SMALL_STATE(352)] = 4103,
  [SMALL_STATE(353)] = 4107,
  [SMALL_STATE(354)] = 4111,
  [SMALL_STATE(355)] = 4115,
  [SMALL_STATE(356)] = 4119,
  [SMALL_STATE(357)] = 4123,
  [SMALL_STATE(358)] = 4127,
  [SMALL_STATE(359)] = 4131,
  [SMALL_STATE(360)] = 4135,
  [SMALL_STATE(361)] = 4139,
  [SMALL_STATE(362)] = 4143,
  [SMALL_STATE(363)] = 4147,
  [SMALL_STATE(364)] = 4151,
  [SMALL_STATE(365)] = 4155,
  [SMALL_STATE(366)] = 4159,
  [SMALL_STATE(367)] = 4163,
  [SMALL_STATE(368)] = 4167,
  [SMALL_STATE(369)] = 4171,
  [SMALL_STATE(370)] = 4175,
  [SMALL_STATE(371)] = 4179,
  [SMALL_STATE(372)] = 4183,
  [SMALL_STATE(373)] = 4187,
  [SMALL_STATE(374)] = 4191,
  [SMALL_STATE(375)] = 4195,
  [SMALL_STATE(376)] = 4199,
  [SMALL_STATE(377)] = 4203,
  [SMALL_STATE(378)] = 4207,
  [SMALL_STATE(379)] = 4211,
  [SMALL_STATE(380)] = 4215,
  [SMALL_STATE(381)] = 4219,
  [SMALL_STATE(382)] = 4223,
  [SMALL_STATE(383)] = 4227,
  [SMALL_STATE(384)] = 4231,
  [SMALL_STATE(385)] = 4235,
  [SMALL_STATE(386)] = 4239,
  [SMALL_STATE(387)] = 4243,
  [SMALL_STATE(388)] = 4247,
  [SMALL_STATE(389)] = 4251,
  [SMALL_STATE(390)] = 4255,
  [SMALL_STATE(391)] = 4259,
  [SMALL_STATE(392)] = 4263,
  [SMALL_STATE(393)] = 4267,
  [SMALL_STATE(394)] = 4271,
  [SMALL_STATE(395)] = 4275,
  [SMALL_STATE(396)] = 4279,
  [SMALL_STATE(397)] = 4283,
  [SMALL_STATE(398)] = 4287,
  [SMALL_STATE(399)] = 4291,
  [SMALL_STATE(400)] = 4295,
  [SMALL_STATE(401)] = 4299,
  [SMALL_STATE(402)] = 4303,
  [SMALL_STATE(403)] = 4307,
  [SMALL_STATE(404)] = 4311,
  [SMALL_STATE(405)] = 4315,
  [SMALL_STATE(406)] = 4319,
  [SMALL_STATE(407)] = 4323,
  [SMALL_STATE(408)] = 4327,
  [SMALL_STATE(409)] = 4331,
  [SMALL_STATE(410)] = 4335,
  [SMALL_STATE(411)] = 4339,
  [SMALL_STATE(412)] = 4343,
  [SMALL_STATE(413)] = 4347,
  [SMALL_STATE(414)] = 4351,
  [SMALL_STATE(415)] = 4355,
  [SMALL_STATE(416)] = 4359,
  [SMALL_STATE(417)] = 4363,
  [SMALL_STATE(418)] = 4367,
  [SMALL_STATE(419)] = 4371,
  [SMALL_STATE(420)] = 4375,
  [SMALL_STATE(421)] = 4379,
  [SMALL_STATE(422)] = 4383,
  [SMALL_STATE(423)] = 4387,
  [SMALL_STATE(424)] = 4391,
  [SMALL_STATE(425)] = 4395,
  [SMALL_STATE(426)] = 4399,
  [SMALL_STATE(427)] = 4403,
  [SMALL_STATE(428)] = 4407,
  [SMALL_STATE(429)] = 4411,
  [SMALL_STATE(430)] = 4415,
  [SMALL_STATE(431)] = 4419,
  [SMALL_STATE(432)] = 4423,
  [SMALL_STATE(433)] = 4427,
  [SMALL_STATE(434)] = 4431,
  [SMALL_STATE(435)] = 4435,
  [SMALL_STATE(436)] = 4439,
  [SMALL_STATE(437)] = 4443,
  [SMALL_STATE(438)] = 4447,
  [SMALL_STATE(439)] = 4451,
  [SMALL_STATE(440)] = 4455,
  [SMALL_STATE(441)] = 4459,
  [SMALL_STATE(442)] = 4463,
  [SMALL_STATE(443)] = 4467,
  [SMALL_STATE(444)] = 4471,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(406),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(405),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(404),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(403),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(402),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(5),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(428),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEReference, 3),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEReference, 3),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(162),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(27),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(410),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(296),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__intSubset, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 1),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(438),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(18),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(442),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(443),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(444),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(434),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(21),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(439),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(440),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(441),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(26),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(227),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ETag, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ETag, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EmptyElemTag, 4),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EmptyElemTag, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, .production_id = 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(435),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(436),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(437),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(38),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Reference, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__Reference, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STag, 4),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STag, 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STag, 5),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STag, 5),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3, .production_id = 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3, .production_id = 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EmptyElemTag, 3),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EmptyElemTag, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ETag, 4),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ETag, 4),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, .production_id = 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 4),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, .production_id = 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 3),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STag, 3),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STag, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CDSect, 3),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CDSect, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EmptyElemTag, 5),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EmptyElemTag, 5),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 5),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 5),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(429),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(430),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(431),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(64),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CharRef, 3),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CharRef, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityRef, 3),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EntityRef, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4, .production_id = 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 4),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 5),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XmlModelPI, 3),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XmlModelPI, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StyleSheetPI, 4),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StyleSheetPI, 4),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XmlModelPI, 4),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XmlModelPI, 4),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XmlModelPI, 5),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XmlModelPI, 5),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StyleSheetPI, 5),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StyleSheetPI, 5),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StyleSheetPI, 3),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StyleSheetPI, 3),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(129),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(363),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__intSubset, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__intSubset, 3),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(81),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(279),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 7),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 7),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 5),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 5),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 6),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 6),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__intSubset, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 4),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 4),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1), SHIFT_REPEAT(167),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 11),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 11),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2), SHIFT_REPEAT(236),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(331),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(360),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 4),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 10),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 10),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 7),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 7),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 3),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 12),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 12),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 2),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 9),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 9),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(176),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 8),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 8),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 3),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(160),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2),
  [642] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(366),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EmptyElemTag_repeat1, 2),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EmptyElemTag_repeat1, 2), SHIFT_REPEAT(294),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 5),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 5),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 6),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 6),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 5),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 3),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [670] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(185),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 3, .production_id = 4),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [687] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_StyleSheetPI_repeat1, 2), SHIFT_REPEAT(285),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_StyleSheetPI_repeat1, 2),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 2),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 3),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [716] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3), SHIFT_REPEAT(224),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 4),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 4),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 1),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SystemLiteral, 3),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4),
  [757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4), SHIFT_REPEAT(234),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Attribute, 3),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 5),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 3),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 2),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PubidLiteral, 3),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 3),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 6),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 7),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 7),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 7),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 2),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 7),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 5),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__SDDecl, 6),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EncodingDecl, 6),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 9),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 8),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 7),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 6),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 8),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StringType, 1),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__AttType, 1),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 4),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EnumeratedType, 1),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PublicID, 3),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 8),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 3, .production_id = 4),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 8),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markupdecl, 1),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PseudoAttValue, 3, .production_id = 4),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EntityDecl, 1),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 6),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 3),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__VersionInfo, 6),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 5),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PseudoAtt, 3),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 4),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 6),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contentspec, 1),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NDataDecl, 4),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 9),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 10),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PseudoAttValue, 2),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 9),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 6),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 5),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 1),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 3),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CDStart, 3),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1120] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_xml_external_scanner_create(void);
void tree_sitter_xml_external_scanner_destroy(void *);
bool tree_sitter_xml_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_xml_external_scanner_serialize(void *, char *);
void tree_sitter_xml_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_xml_external_scanner_create,
      tree_sitter_xml_external_scanner_destroy,
      tree_sitter_xml_external_scanner_scan,
      tree_sitter_xml_external_scanner_serialize,
      tree_sitter_xml_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
