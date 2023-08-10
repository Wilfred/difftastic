#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 453
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 140
#define ALIAS_COUNT 0
#define TOKEN_COUNT 73
#define EXTERNAL_TOKEN_COUNT 7
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
  anon_sym_EQ = 57,
  anon_sym_standalone = 58,
  anon_sym_yes = 59,
  anon_sym_no = 60,
  anon_sym_DOCTYPE = 61,
  anon_sym_RBRACK = 62,
  anon_sym_LT = 63,
  anon_sym_SLASH_GT = 64,
  anon_sym_LT_SLASH = 65,
  anon_sym_xml_DASHstylesheet = 66,
  anon_sym_xml_DASHmodel = 67,
  sym_PITarget = 68,
  sym__pi_content = 69,
  sym_Comment = 70,
  sym_CharData = 71,
  sym_CData = 72,
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
  [anon_sym_EQ] = "=",
  [anon_sym_standalone] = "standalone",
  [anon_sym_yes] = "yes",
  [anon_sym_no] = "no",
  [anon_sym_DOCTYPE] = "DOCTYPE",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LT] = "<",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_xml_DASHstylesheet] = "xml-stylesheet",
  [anon_sym_xml_DASHmodel] = "xml-model",
  [sym_PITarget] = "PITarget",
  [sym__pi_content] = "_pi_content",
  [sym_Comment] = "Comment",
  [sym_CharData] = "CharData",
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
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_standalone] = anon_sym_standalone,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_DOCTYPE] = anon_sym_DOCTYPE,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_xml_DASHstylesheet] = anon_sym_xml_DASHstylesheet,
  [anon_sym_xml_DASHmodel] = anon_sym_xml_DASHmodel,
  [sym_PITarget] = sym_PITarget,
  [sym__pi_content] = sym__pi_content,
  [sym_Comment] = sym_Comment,
  [sym_CharData] = sym_CharData,
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
  [sym_Comment] = {
    .visible = true,
    .named = true,
  },
  [sym_CharData] = {
    .visible = true,
    .named = true,
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
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 66,
  [85] = 85,
  [86] = 86,
  [87] = 41,
  [88] = 28,
  [89] = 89,
  [90] = 90,
  [91] = 68,
  [92] = 92,
  [93] = 66,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 41,
  [98] = 98,
  [99] = 28,
  [100] = 100,
  [101] = 101,
  [102] = 29,
  [103] = 103,
  [104] = 68,
  [105] = 105,
  [106] = 49,
  [107] = 66,
  [108] = 41,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 41,
  [113] = 68,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 28,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 68,
  [125] = 125,
  [126] = 126,
  [127] = 66,
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
  [138] = 35,
  [139] = 133,
  [140] = 43,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 40,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 134,
  [159] = 149,
  [160] = 160,
  [161] = 161,
  [162] = 51,
  [163] = 163,
  [164] = 164,
  [165] = 64,
  [166] = 37,
  [167] = 167,
  [168] = 168,
  [169] = 141,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 62,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 63,
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
  [250] = 246,
  [251] = 251,
  [252] = 246,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 248,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 29,
  [263] = 263,
  [264] = 49,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 247,
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
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 337,
  [417] = 394,
  [418] = 418,
  [419] = 391,
  [420] = 420,
  [421] = 387,
  [422] = 346,
  [423] = 423,
  [424] = 337,
  [425] = 394,
  [426] = 391,
  [427] = 346,
  [428] = 337,
  [429] = 394,
  [430] = 346,
  [431] = 337,
  [432] = 394,
  [433] = 420,
  [434] = 408,
  [435] = 407,
  [436] = 406,
  [437] = 405,
  [438] = 404,
  [439] = 399,
  [440] = 342,
  [441] = 408,
  [442] = 407,
  [443] = 406,
  [444] = 399,
  [445] = 342,
  [446] = 408,
  [447] = 407,
  [448] = 406,
  [449] = 342,
  [450] = 408,
  [451] = 407,
  [452] = 406,
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
      if (eof) ADVANCE(42);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '%') ADVANCE(66);
      if (lookahead == '&') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '1') ADVANCE(69);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '<') ADVANCE(139);
      if (lookahead == '=') ADVANCE(136);
      if (lookahead == '>') ADVANCE(48);
      if (lookahead == '?') ADVANCE(54);
      if (lookahead == 'E') ADVANCE(74);
      if (lookahead == 'I') ADVANCE(71);
      if (lookahead == 'N') ADVANCE(73);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == ']') ADVANCE(138);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == '|') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == 183) ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '%') ADVANCE(66);
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '>') ADVANCE(48);
      if (lookahead == '?') ADVANCE(54);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == '|') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '%') ADVANCE(66);
      if (lookahead == '&') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(68);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '&') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(126);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(66);
      if (lookahead == '&') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead == '<') ADVANCE(141);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(127);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(38);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(142);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(45);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(133);
      END_STATE();
    case 10:
      if (lookahead == '?') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(50);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(65);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(64);
      END_STATE();
    case 17:
      if (lookahead == 'D') ADVANCE(63);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(30);
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
      if (lookahead == 'R') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'I') ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == 'I') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'I') ADVANCE(20);
      END_STATE();
    case 26:
      if (lookahead == 'L') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'M') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == 'P') ADVANCE(13);
      END_STATE();
    case 29:
      if (lookahead == 'P') ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == 'Q') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'R') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(12);
      END_STATE();
    case 33:
      if (lookahead == 'U') ADVANCE(24);
      END_STATE();
    case 34:
      if (lookahead == 'X') ADVANCE(19);
      END_STATE();
    case 35:
      if (lookahead == '[') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == ']') ADVANCE(8);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 40:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 41:
      if (eof) ADVANCE(42);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '%') ADVANCE(66);
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '1') ADVANCE(6);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '<') ADVANCE(140);
      if (lookahead == '=') ADVANCE(136);
      if (lookahead == '>') ADVANCE(48);
      if (lookahead == '?') ADVANCE(54);
      if (lookahead == 'E') ADVANCE(102);
      if (lookahead == 'I') ADVANCE(85);
      if (lookahead == 'N') ADVANCE(100);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == ']') ADVANCE(137);
      if (lookahead == '|') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LT_BANG_LBRACK);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK_GT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      if (lookahead == '[') ADVANCE(43);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_POUNDPCDATA);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'R') ADVANCE(86);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'R') ADVANCE(89);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(61);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(62);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_POUNDREQUIRED);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_POUNDIMPLIED);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_POUNDFIXED);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '.') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (lookahead == '-' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '>') ADVANCE(142);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'D') ADVANCE(57);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'F') ADVANCE(23);
      if (lookahead == 'I') ADVANCE(27);
      if (lookahead == 'P') ADVANCE(13);
      if (lookahead == 'R') ADVANCE(18);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'M') ADVANCE(109);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'N') ADVANCE(108);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_EntityValue_token2);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__S);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'D') ADVANCE(58);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(92);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(101);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(106);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(103);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'F') ADVANCE(59);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'F') ADVANCE(60);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(110);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(88);
      if (lookahead == 'Y') ADVANCE(61);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(90);
      if (lookahead == 'Y') ADVANCE(62);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'K') ADVANCE(87);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'K') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'M') ADVANCE(112);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(59);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(60);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'O') ADVANCE(98);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'O') ADVANCE(99);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'S') ADVANCE(61);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'S') ADVANCE(62);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(94);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(104);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(95);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(96);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '#') ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_AMP_POUND);
      if (lookahead == 'x') ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_CharRef_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_CharRef_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_AttValue_token1);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_AttValue_token2);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token1);
      if (aux_sym_PubidLiteral_token1_character_set_1(lookahead)) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token2);
      if (aux_sym_PubidLiteral_token2_character_set_1(lookahead)) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_VersionNum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_EncName);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(8);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == '?') ADVANCE(132);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '?') ADVANCE(132);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == '?') ADVANCE(132);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
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
  [1] = {.lex_state = 41, .external_lex_state = 2},
  [2] = {.lex_state = 4, .external_lex_state = 3},
  [3] = {.lex_state = 4, .external_lex_state = 3},
  [4] = {.lex_state = 4, .external_lex_state = 3},
  [5] = {.lex_state = 4, .external_lex_state = 3},
  [6] = {.lex_state = 41, .external_lex_state = 2},
  [7] = {.lex_state = 41, .external_lex_state = 2},
  [8] = {.lex_state = 41, .external_lex_state = 2},
  [9] = {.lex_state = 41, .external_lex_state = 2},
  [10] = {.lex_state = 41, .external_lex_state = 2},
  [11] = {.lex_state = 41, .external_lex_state = 2},
  [12] = {.lex_state = 41, .external_lex_state = 2},
  [13] = {.lex_state = 41, .external_lex_state = 2},
  [14] = {.lex_state = 41, .external_lex_state = 2},
  [15] = {.lex_state = 41, .external_lex_state = 2},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 41},
  [18] = {.lex_state = 41, .external_lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 41, .external_lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 41, .external_lex_state = 2},
  [24] = {.lex_state = 41, .external_lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 41, .external_lex_state = 2},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 4, .external_lex_state = 3},
  [30] = {.lex_state = 41, .external_lex_state = 2},
  [31] = {.lex_state = 41, .external_lex_state = 2},
  [32] = {.lex_state = 41, .external_lex_state = 2},
  [33] = {.lex_state = 41, .external_lex_state = 2},
  [34] = {.lex_state = 41, .external_lex_state = 2},
  [35] = {.lex_state = 4, .external_lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 4, .external_lex_state = 3},
  [38] = {.lex_state = 41, .external_lex_state = 2},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 4, .external_lex_state = 3},
  [41] = {.lex_state = 4, .external_lex_state = 3},
  [42] = {.lex_state = 4, .external_lex_state = 3},
  [43] = {.lex_state = 4, .external_lex_state = 3},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 41, .external_lex_state = 2},
  [47] = {.lex_state = 41, .external_lex_state = 2},
  [48] = {.lex_state = 4, .external_lex_state = 3},
  [49] = {.lex_state = 4, .external_lex_state = 3},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 4, .external_lex_state = 3},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 4, .external_lex_state = 3},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 4, .external_lex_state = 3},
  [59] = {.lex_state = 41, .external_lex_state = 2},
  [60] = {.lex_state = 41, .external_lex_state = 2},
  [61] = {.lex_state = 41, .external_lex_state = 2},
  [62] = {.lex_state = 4, .external_lex_state = 3},
  [63] = {.lex_state = 4, .external_lex_state = 3},
  [64] = {.lex_state = 4, .external_lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 4, .external_lex_state = 3},
  [67] = {.lex_state = 41, .external_lex_state = 2},
  [68] = {.lex_state = 4, .external_lex_state = 3},
  [69] = {.lex_state = 41},
  [70] = {.lex_state = 41},
  [71] = {.lex_state = 41},
  [72] = {.lex_state = 41},
  [73] = {.lex_state = 41},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 41},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 41},
  [81] = {.lex_state = 41, .external_lex_state = 2},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 41, .external_lex_state = 2},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 41, .external_lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 41, .external_lex_state = 2},
  [102] = {.lex_state = 41, .external_lex_state = 2},
  [103] = {.lex_state = 41, .external_lex_state = 2},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 41, .external_lex_state = 2},
  [106] = {.lex_state = 41, .external_lex_state = 2},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 41},
  [111] = {.lex_state = 41, .external_lex_state = 2},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 41},
  [115] = {.lex_state = 41, .external_lex_state = 2},
  [116] = {.lex_state = 41},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 41, .external_lex_state = 2},
  [119] = {.lex_state = 41, .external_lex_state = 2},
  [120] = {.lex_state = 41},
  [121] = {.lex_state = 41, .external_lex_state = 2},
  [122] = {.lex_state = 41},
  [123] = {.lex_state = 41, .external_lex_state = 2},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 41},
  [126] = {.lex_state = 41, .external_lex_state = 2},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 41, .external_lex_state = 2},
  [129] = {.lex_state = 41},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1, .external_lex_state = 4},
  [132] = {.lex_state = 41, .external_lex_state = 2},
  [133] = {.lex_state = 41},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 41},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 41},
  [138] = {.lex_state = 41, .external_lex_state = 2},
  [139] = {.lex_state = 41},
  [140] = {.lex_state = 41, .external_lex_state = 2},
  [141] = {.lex_state = 41},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 41},
  [144] = {.lex_state = 41},
  [145] = {.lex_state = 41},
  [146] = {.lex_state = 41},
  [147] = {.lex_state = 41, .external_lex_state = 2},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 41, .external_lex_state = 2},
  [151] = {.lex_state = 41, .external_lex_state = 2},
  [152] = {.lex_state = 41},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 41, .external_lex_state = 2},
  [155] = {.lex_state = 41},
  [156] = {.lex_state = 41},
  [157] = {.lex_state = 41},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 41},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 41, .external_lex_state = 2},
  [163] = {.lex_state = 41},
  [164] = {.lex_state = 41},
  [165] = {.lex_state = 41, .external_lex_state = 2},
  [166] = {.lex_state = 41, .external_lex_state = 2},
  [167] = {.lex_state = 41},
  [168] = {.lex_state = 41, .external_lex_state = 2},
  [169] = {.lex_state = 41},
  [170] = {.lex_state = 41},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 41},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 41, .external_lex_state = 2},
  [176] = {.lex_state = 41},
  [177] = {.lex_state = 41, .external_lex_state = 2},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 41},
  [180] = {.lex_state = 41},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 41, .external_lex_state = 2},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 41, .external_lex_state = 2},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 10},
  [187] = {.lex_state = 41},
  [188] = {.lex_state = 41},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 41},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 41},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 41},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 41},
  [199] = {.lex_state = 41},
  [200] = {.lex_state = 41},
  [201] = {.lex_state = 41},
  [202] = {.lex_state = 10},
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 41},
  [205] = {.lex_state = 41},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 41},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 41},
  [210] = {.lex_state = 41},
  [211] = {.lex_state = 41},
  [212] = {.lex_state = 41},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 41},
  [215] = {.lex_state = 41},
  [216] = {.lex_state = 41},
  [217] = {.lex_state = 41},
  [218] = {.lex_state = 10},
  [219] = {.lex_state = 41},
  [220] = {.lex_state = 41},
  [221] = {.lex_state = 41},
  [222] = {.lex_state = 41},
  [223] = {.lex_state = 41},
  [224] = {.lex_state = 10},
  [225] = {.lex_state = 41},
  [226] = {.lex_state = 41},
  [227] = {.lex_state = 1, .external_lex_state = 4},
  [228] = {.lex_state = 10},
  [229] = {.lex_state = 10},
  [230] = {.lex_state = 41},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 41},
  [233] = {.lex_state = 10},
  [234] = {.lex_state = 10},
  [235] = {.lex_state = 41},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 41},
  [238] = {.lex_state = 41},
  [239] = {.lex_state = 41},
  [240] = {.lex_state = 41},
  [241] = {.lex_state = 41},
  [242] = {.lex_state = 41},
  [243] = {.lex_state = 41},
  [244] = {.lex_state = 41},
  [245] = {.lex_state = 41},
  [246] = {.lex_state = 10},
  [247] = {.lex_state = 41},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 41},
  [250] = {.lex_state = 10},
  [251] = {.lex_state = 41},
  [252] = {.lex_state = 10},
  [253] = {.lex_state = 41},
  [254] = {.lex_state = 41},
  [255] = {.lex_state = 41},
  [256] = {.lex_state = 41},
  [257] = {.lex_state = 41},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 1},
  [260] = {.lex_state = 41},
  [261] = {.lex_state = 41},
  [262] = {.lex_state = 41},
  [263] = {.lex_state = 41},
  [264] = {.lex_state = 41},
  [265] = {.lex_state = 1},
  [266] = {.lex_state = 41},
  [267] = {.lex_state = 41},
  [268] = {.lex_state = 41},
  [269] = {.lex_state = 41},
  [270] = {.lex_state = 10},
  [271] = {.lex_state = 41},
  [272] = {.lex_state = 10},
  [273] = {.lex_state = 41},
  [274] = {.lex_state = 10},
  [275] = {.lex_state = 10},
  [276] = {.lex_state = 41},
  [277] = {.lex_state = 10},
  [278] = {.lex_state = 10},
  [279] = {.lex_state = 41},
  [280] = {.lex_state = 41},
  [281] = {.lex_state = 41},
  [282] = {.lex_state = 37},
  [283] = {.lex_state = 41},
  [284] = {.lex_state = 41},
  [285] = {.lex_state = 41},
  [286] = {.lex_state = 41},
  [287] = {.lex_state = 41},
  [288] = {.lex_state = 41},
  [289] = {.lex_state = 41},
  [290] = {.lex_state = 41},
  [291] = {.lex_state = 41},
  [292] = {.lex_state = 41},
  [293] = {.lex_state = 41},
  [294] = {.lex_state = 41},
  [295] = {.lex_state = 41},
  [296] = {.lex_state = 41},
  [297] = {.lex_state = 1},
  [298] = {.lex_state = 41},
  [299] = {.lex_state = 10},
  [300] = {.lex_state = 41},
  [301] = {.lex_state = 1},
  [302] = {.lex_state = 41},
  [303] = {.lex_state = 41},
  [304] = {.lex_state = 41},
  [305] = {.lex_state = 41},
  [306] = {.lex_state = 41},
  [307] = {.lex_state = 41},
  [308] = {.lex_state = 10},
  [309] = {.lex_state = 41},
  [310] = {.lex_state = 41},
  [311] = {.lex_state = 41},
  [312] = {.lex_state = 41},
  [313] = {.lex_state = 41},
  [314] = {.lex_state = 10},
  [315] = {.lex_state = 41},
  [316] = {.lex_state = 37},
  [317] = {.lex_state = 41},
  [318] = {.lex_state = 41},
  [319] = {.lex_state = 41},
  [320] = {.lex_state = 41},
  [321] = {.lex_state = 41},
  [322] = {.lex_state = 10},
  [323] = {.lex_state = 1},
  [324] = {.lex_state = 1},
  [325] = {.lex_state = 41},
  [326] = {.lex_state = 41},
  [327] = {.lex_state = 41},
  [328] = {.lex_state = 41},
  [329] = {.lex_state = 41},
  [330] = {.lex_state = 41},
  [331] = {.lex_state = 37},
  [332] = {.lex_state = 41},
  [333] = {.lex_state = 41},
  [334] = {.lex_state = 41},
  [335] = {.lex_state = 41},
  [336] = {.lex_state = 37},
  [337] = {.lex_state = 41},
  [338] = {.lex_state = 41},
  [339] = {.lex_state = 41},
  [340] = {.lex_state = 41},
  [341] = {.lex_state = 40},
  [342] = {.lex_state = 1},
  [343] = {.lex_state = 40},
  [344] = {.lex_state = 41},
  [345] = {.lex_state = 41},
  [346] = {.lex_state = 41},
  [347] = {.lex_state = 41},
  [348] = {.lex_state = 41},
  [349] = {.lex_state = 41},
  [350] = {.lex_state = 41},
  [351] = {.lex_state = 41},
  [352] = {.lex_state = 41},
  [353] = {.lex_state = 10},
  [354] = {.lex_state = 37},
  [355] = {.lex_state = 1},
  [356] = {.lex_state = 128},
  [357] = {.lex_state = 129},
  [358] = {.lex_state = 41},
  [359] = {.lex_state = 37},
  [360] = {.lex_state = 41},
  [361] = {.lex_state = 41},
  [362] = {.lex_state = 130},
  [363] = {.lex_state = 41},
  [364] = {.lex_state = 131},
  [365] = {.lex_state = 41},
  [366] = {.lex_state = 41},
  [367] = {.lex_state = 41},
  [368] = {.lex_state = 41},
  [369] = {.lex_state = 41},
  [370] = {.lex_state = 41},
  [371] = {.lex_state = 41},
  [372] = {.lex_state = 41},
  [373] = {.lex_state = 41},
  [374] = {.lex_state = 41},
  [375] = {.lex_state = 41},
  [376] = {.lex_state = 41},
  [377] = {.lex_state = 41},
  [378] = {.lex_state = 41},
  [379] = {.lex_state = 10},
  [380] = {.lex_state = 41},
  [381] = {.lex_state = 41},
  [382] = {.lex_state = 41},
  [383] = {.lex_state = 41},
  [384] = {.lex_state = 41},
  [385] = {.lex_state = 41},
  [386] = {.lex_state = 41},
  [387] = {.lex_state = 41},
  [388] = {.lex_state = 0, .external_lex_state = 5},
  [389] = {.lex_state = 41},
  [390] = {.lex_state = 41},
  [391] = {.lex_state = 10},
  [392] = {.lex_state = 1},
  [393] = {.lex_state = 41},
  [394] = {.lex_state = 41},
  [395] = {.lex_state = 41},
  [396] = {.lex_state = 41},
  [397] = {.lex_state = 1},
  [398] = {.lex_state = 1},
  [399] = {.lex_state = 0, .external_lex_state = 6},
  [400] = {.lex_state = 1},
  [401] = {.lex_state = 41},
  [402] = {.lex_state = 0, .external_lex_state = 5},
  [403] = {.lex_state = 41},
  [404] = {.lex_state = 1},
  [405] = {.lex_state = 0, .external_lex_state = 7},
  [406] = {.lex_state = 39},
  [407] = {.lex_state = 1},
  [408] = {.lex_state = 1},
  [409] = {.lex_state = 1},
  [410] = {.lex_state = 41},
  [411] = {.lex_state = 41},
  [412] = {.lex_state = 41},
  [413] = {.lex_state = 41},
  [414] = {.lex_state = 41},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 41},
  [417] = {.lex_state = 41},
  [418] = {.lex_state = 41},
  [419] = {.lex_state = 10},
  [420] = {.lex_state = 1},
  [421] = {.lex_state = 41},
  [422] = {.lex_state = 41},
  [423] = {.lex_state = 41},
  [424] = {.lex_state = 41},
  [425] = {.lex_state = 41},
  [426] = {.lex_state = 10},
  [427] = {.lex_state = 41},
  [428] = {.lex_state = 41},
  [429] = {.lex_state = 41},
  [430] = {.lex_state = 41},
  [431] = {.lex_state = 41},
  [432] = {.lex_state = 41},
  [433] = {.lex_state = 1},
  [434] = {.lex_state = 1},
  [435] = {.lex_state = 1},
  [436] = {.lex_state = 39},
  [437] = {.lex_state = 0, .external_lex_state = 7},
  [438] = {.lex_state = 1},
  [439] = {.lex_state = 0, .external_lex_state = 6},
  [440] = {.lex_state = 1},
  [441] = {.lex_state = 1},
  [442] = {.lex_state = 1},
  [443] = {.lex_state = 39},
  [444] = {.lex_state = 0, .external_lex_state = 6},
  [445] = {.lex_state = 1},
  [446] = {.lex_state = 1},
  [447] = {.lex_state = 1},
  [448] = {.lex_state = 39},
  [449] = {.lex_state = 1},
  [450] = {.lex_state = 1},
  [451] = {.lex_state = 1},
  [452] = {.lex_state = 39},
};

enum {
  ts_external_token_PITarget = 0,
  ts_external_token__pi_content = 1,
  ts_external_token_Comment = 2,
  ts_external_token_CharData = 3,
  ts_external_token_CData = 4,
  ts_external_token_xml_DASHmodel = 5,
  ts_external_token_xml_DASHstylesheet = 6,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_PITarget] = sym_PITarget,
  [ts_external_token__pi_content] = sym__pi_content,
  [ts_external_token_Comment] = sym_Comment,
  [ts_external_token_CharData] = sym_CharData,
  [ts_external_token_CData] = sym_CData,
  [ts_external_token_xml_DASHmodel] = anon_sym_xml_DASHmodel,
  [ts_external_token_xml_DASHstylesheet] = anon_sym_xml_DASHstylesheet,
};

static const bool ts_external_scanner_states[8][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_PITarget] = true,
    [ts_external_token__pi_content] = true,
    [ts_external_token_Comment] = true,
    [ts_external_token_CharData] = true,
    [ts_external_token_CData] = true,
    [ts_external_token_xml_DASHmodel] = true,
    [ts_external_token_xml_DASHstylesheet] = true,
  },
  [2] = {
    [ts_external_token_Comment] = true,
  },
  [3] = {
    [ts_external_token_Comment] = true,
    [ts_external_token_CharData] = true,
  },
  [4] = {
    [ts_external_token_PITarget] = true,
    [ts_external_token_xml_DASHmodel] = true,
    [ts_external_token_xml_DASHstylesheet] = true,
  },
  [5] = {
    [ts_external_token_CData] = true,
  },
  [6] = {
    [ts_external_token__pi_content] = true,
  },
  [7] = {
    [ts_external_token_PITarget] = true,
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
    [sym_Comment] = ACTIONS(1),
    [sym_CharData] = ACTIONS(1),
    [sym_CData] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(415),
    [sym_XMLDecl] = STATE(23),
    [sym_PI] = STATE(18),
    [sym_prolog] = STATE(142),
    [sym__Misc] = STATE(18),
    [sym_doctypedecl] = STATE(38),
    [sym_element] = STATE(59),
    [sym_EmptyElemTag] = STATE(162),
    [sym_STag] = STATE(2),
    [sym_StyleSheetPI] = STATE(18),
    [sym_XmlModelPI] = STATE(18),
    [aux_sym_document_repeat1] = STATE(18),
    [anon_sym_LT_BANG] = ACTIONS(3),
    [sym__S] = ACTIONS(5),
    [anon_sym_LT_QMARK] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(9),
    [sym_Comment] = ACTIONS(11),
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
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_LT_SLASH,
    STATE(3), 1,
      sym_STag,
    STATE(51), 1,
      sym_EmptyElemTag,
    STATE(166), 1,
      sym_ETag,
    STATE(258), 1,
      sym_content,
    STATE(402), 1,
      sym_CDStart,
    ACTIONS(27), 2,
      sym_Comment,
      sym_CharData,
    STATE(41), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(5), 5,
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
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      anon_sym_LT_SLASH,
    STATE(3), 1,
      sym_STag,
    STATE(37), 1,
      sym_ETag,
    STATE(51), 1,
      sym_EmptyElemTag,
    STATE(248), 1,
      sym_content,
    STATE(402), 1,
      sym_CDStart,
    ACTIONS(27), 2,
      sym_Comment,
      sym_CharData,
    STATE(41), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(5), 5,
      sym__Reference,
      sym_PI,
      sym_element,
      sym_CDSect,
      aux_sym_content_repeat1,
  [104] = 13,
    ACTIONS(31), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(34), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_AMP_POUND,
    ACTIONS(40), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(43), 1,
      anon_sym_LT_QMARK,
    ACTIONS(46), 1,
      anon_sym_LT,
    ACTIONS(49), 1,
      anon_sym_LT_SLASH,
    STATE(3), 1,
      sym_STag,
    STATE(51), 1,
      sym_EmptyElemTag,
    STATE(402), 1,
      sym_CDStart,
    ACTIONS(51), 2,
      sym_Comment,
      sym_CharData,
    STATE(41), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(4), 5,
      sym__Reference,
      sym_PI,
      sym_element,
      sym_CDSect,
      aux_sym_content_repeat1,
  [150] = 13,
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
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(54), 1,
      anon_sym_LT_SLASH,
    STATE(3), 1,
      sym_STag,
    STATE(51), 1,
      sym_EmptyElemTag,
    STATE(402), 1,
      sym_CDStart,
    ACTIONS(56), 2,
      sym_Comment,
      sym_CharData,
    STATE(41), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(4), 5,
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
    ACTIONS(9), 1,
      anon_sym_LT,
    STATE(2), 1,
      sym_STag,
    STATE(23), 1,
      sym_XMLDecl,
    STATE(30), 1,
      sym_element,
    STATE(38), 1,
      sym_doctypedecl,
    STATE(162), 1,
      sym_EmptyElemTag,
    STATE(171), 1,
      sym_prolog,
    ACTIONS(11), 2,
      sym_Comment,
      sym__S,
    STATE(18), 5,
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
      anon_sym_RBRACK,
    ACTIONS(66), 1,
      sym_Comment,
    STATE(9), 1,
      aux_sym__intSubset,
    STATE(173), 1,
      sym__markupdecl,
    STATE(303), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(302), 5,
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
    ACTIONS(66), 1,
      sym_Comment,
    ACTIONS(68), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__intSubset,
    STATE(173), 1,
      sym__markupdecl,
    STATE(303), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(302), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [301] = 9,
    ACTIONS(70), 1,
      anon_sym_LT_BANG,
    ACTIONS(73), 1,
      sym__S,
    ACTIONS(76), 1,
      anon_sym_LT_QMARK,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(81), 1,
      sym_Comment,
    STATE(9), 1,
      aux_sym__intSubset,
    STATE(173), 1,
      sym__markupdecl,
    STATE(303), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(302), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [334] = 9,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(60), 1,
      sym__S,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(66), 1,
      sym_Comment,
    ACTIONS(84), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__intSubset,
    STATE(173), 1,
      sym__markupdecl,
    STATE(303), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(302), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [367] = 9,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(60), 1,
      sym__S,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(66), 1,
      sym_Comment,
    ACTIONS(86), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__intSubset,
    STATE(173), 1,
      sym__markupdecl,
    STATE(303), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(302), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [400] = 8,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(60), 1,
      sym__S,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(66), 1,
      sym_Comment,
    STATE(10), 1,
      aux_sym__intSubset,
    STATE(173), 1,
      sym__markupdecl,
    STATE(303), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(302), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [430] = 8,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(60), 1,
      sym__S,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(66), 1,
      sym_Comment,
    STATE(8), 1,
      aux_sym__intSubset,
    STATE(173), 1,
      sym__markupdecl,
    STATE(303), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(302), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [460] = 8,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(60), 1,
      sym__S,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(66), 1,
      sym_Comment,
    STATE(7), 1,
      aux_sym__intSubset,
    STATE(173), 1,
      sym__markupdecl,
    STATE(303), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(302), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [490] = 8,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(60), 1,
      sym__S,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(66), 1,
      sym_Comment,
    STATE(11), 1,
      aux_sym__intSubset,
    STATE(173), 1,
      sym__markupdecl,
    STATE(303), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(302), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [520] = 8,
    ACTIONS(88), 1,
      anon_sym_PERCENT,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(96), 1,
      anon_sym_AMP,
    ACTIONS(99), 1,
      anon_sym_AMP_POUND,
    ACTIONS(102), 1,
      anon_sym_AMP_POUNDx,
    STATE(87), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(16), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [548] = 8,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_CDATA,
    ACTIONS(109), 1,
      sym_TokenizedType,
    ACTIONS(111), 1,
      anon_sym_NOTATION,
    ACTIONS(113), 1,
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
  [576] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_BANG,
    ACTIONS(117), 1,
      anon_sym_LT_QMARK,
    ACTIONS(119), 1,
      anon_sym_LT,
    STATE(32), 1,
      sym_doctypedecl,
    ACTIONS(115), 2,
      sym_Comment,
      sym__S,
    STATE(21), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [600] = 8,
    ACTIONS(121), 1,
      anon_sym_PERCENT,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(129), 1,
      anon_sym_AMP,
    ACTIONS(132), 1,
      anon_sym_AMP_POUND,
    ACTIONS(135), 1,
      anon_sym_AMP_POUNDx,
    STATE(97), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(19), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [628] = 8,
    ACTIONS(138), 1,
      anon_sym_PERCENT,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(144), 1,
      anon_sym_AMP,
    ACTIONS(146), 1,
      anon_sym_AMP_POUND,
    ACTIONS(148), 1,
      anon_sym_AMP_POUNDx,
    STATE(87), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(16), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [656] = 5,
    ACTIONS(155), 1,
      anon_sym_LT_QMARK,
    ACTIONS(158), 1,
      anon_sym_LT,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
    ACTIONS(152), 2,
      sym_Comment,
      sym__S,
    STATE(21), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [678] = 8,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    ACTIONS(160), 1,
      anon_sym_PERCENT,
    ACTIONS(162), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      anon_sym_AMP_POUND,
    ACTIONS(168), 1,
      anon_sym_AMP_POUNDx,
    STATE(97), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(19), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [706] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_BANG,
    ACTIONS(117), 1,
      anon_sym_LT_QMARK,
    ACTIONS(119), 1,
      anon_sym_LT,
    STATE(32), 1,
      sym_doctypedecl,
    ACTIONS(170), 2,
      sym_Comment,
      sym__S,
    STATE(24), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [730] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_BANG,
    ACTIONS(117), 1,
      anon_sym_LT_QMARK,
    ACTIONS(172), 1,
      anon_sym_LT,
    STATE(61), 1,
      sym_doctypedecl,
    ACTIONS(115), 2,
      sym_Comment,
      sym__S,
    STATE(21), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [754] = 8,
    ACTIONS(160), 1,
      anon_sym_PERCENT,
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      anon_sym_AMP_POUND,
    ACTIONS(168), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(176), 1,
      aux_sym_EntityValue_token1,
    STATE(97), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(22), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [782] = 6,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(66), 1,
      sym_Comment,
    STATE(146), 1,
      sym__markupdecl,
    STATE(303), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(302), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [806] = 8,
    ACTIONS(138), 1,
      anon_sym_PERCENT,
    ACTIONS(144), 1,
      anon_sym_AMP,
    ACTIONS(146), 1,
      anon_sym_AMP_POUND,
    ACTIONS(148), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(174), 1,
      anon_sym_SQUOTE,
    ACTIONS(178), 1,
      aux_sym_EntityValue_token2,
    STATE(87), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(20), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [834] = 1,
    ACTIONS(180), 10,
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
  [847] = 2,
    ACTIONS(184), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(182), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [861] = 4,
    ACTIONS(117), 1,
      anon_sym_LT_QMARK,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    ACTIONS(188), 2,
      sym_Comment,
      sym__S,
    STATE(47), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [879] = 4,
    ACTIONS(117), 1,
      anon_sym_LT_QMARK,
    ACTIONS(190), 1,
      anon_sym_LT,
    ACTIONS(115), 2,
      sym_Comment,
      sym__S,
    STATE(21), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [897] = 4,
    ACTIONS(117), 1,
      anon_sym_LT_QMARK,
    ACTIONS(172), 1,
      anon_sym_LT,
    ACTIONS(192), 2,
      sym_Comment,
      sym__S,
    STATE(60), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [915] = 4,
    ACTIONS(117), 1,
      anon_sym_LT_QMARK,
    ACTIONS(172), 1,
      anon_sym_LT,
    ACTIONS(115), 2,
      sym_Comment,
      sym__S,
    STATE(21), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [933] = 4,
    ACTIONS(117), 1,
      anon_sym_LT_QMARK,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 2,
      sym_Comment,
      sym__S,
    STATE(21), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [951] = 2,
    ACTIONS(198), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(196), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [965] = 7,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(202), 1,
      anon_sym_AMP,
    ACTIONS(204), 1,
      anon_sym_AMP_POUND,
    ACTIONS(206), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(208), 1,
      aux_sym_AttValue_token1,
    STATE(53), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(112), 2,
      sym_EntityRef,
      sym_CharRef,
  [989] = 2,
    ACTIONS(212), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(210), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1003] = 4,
    ACTIONS(117), 1,
      anon_sym_LT_QMARK,
    ACTIONS(119), 1,
      anon_sym_LT,
    ACTIONS(214), 2,
      sym_Comment,
      sym__S,
    STATE(33), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1021] = 6,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    STATE(122), 1,
      sym__choice,
    STATE(317), 1,
      sym_contentspec,
    ACTIONS(216), 2,
      anon_sym_EMPTY,
      anon_sym_ANY,
    STATE(243), 3,
      sym_Mixed,
      sym_children,
      sym_PEReference,
  [1043] = 2,
    ACTIONS(222), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(220), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1057] = 2,
    ACTIONS(226), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(224), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1071] = 2,
    ACTIONS(230), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(228), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1085] = 2,
    ACTIONS(234), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(232), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1099] = 7,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(238), 1,
      anon_sym_AMP,
    ACTIONS(241), 1,
      anon_sym_AMP_POUND,
    ACTIONS(244), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(247), 1,
      aux_sym_AttValue_token2,
    STATE(44), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(108), 2,
      sym_EntityRef,
      sym_CharRef,
  [1123] = 7,
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
    STATE(45), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(112), 2,
      sym_EntityRef,
      sym_CharRef,
  [1147] = 4,
    ACTIONS(117), 1,
      anon_sym_LT_QMARK,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
    ACTIONS(266), 2,
      sym_Comment,
      sym__S,
    STATE(67), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1165] = 4,
    ACTIONS(117), 1,
      anon_sym_LT_QMARK,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 2,
      sym_Comment,
      sym__S,
    STATE(21), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1183] = 2,
    ACTIONS(272), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(270), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1197] = 2,
    ACTIONS(276), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(274), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1211] = 7,
    ACTIONS(278), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      anon_sym_AMP,
    ACTIONS(282), 1,
      anon_sym_AMP_POUND,
    ACTIONS(284), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(286), 1,
      aux_sym_AttValue_token2,
    STATE(54), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(108), 2,
      sym_EntityRef,
      sym_CharRef,
  [1235] = 2,
    ACTIONS(290), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(288), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1249] = 7,
    ACTIONS(280), 1,
      anon_sym_AMP,
    ACTIONS(282), 1,
      anon_sym_AMP_POUND,
    ACTIONS(284), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    ACTIONS(294), 1,
      aux_sym_AttValue_token2,
    STATE(44), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(108), 2,
      sym_EntityRef,
      sym_CharRef,
  [1273] = 7,
    ACTIONS(202), 1,
      anon_sym_AMP,
    ACTIONS(204), 1,
      anon_sym_AMP_POUND,
    ACTIONS(206), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(296), 1,
      aux_sym_AttValue_token1,
    STATE(45), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(112), 2,
      sym_EntityRef,
      sym_CharRef,
  [1297] = 7,
    ACTIONS(280), 1,
      anon_sym_AMP,
    ACTIONS(282), 1,
      anon_sym_AMP_POUND,
    ACTIONS(284), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(294), 1,
      aux_sym_AttValue_token2,
    ACTIONS(298), 1,
      anon_sym_SQUOTE,
    STATE(44), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(108), 2,
      sym_EntityRef,
      sym_CharRef,
  [1321] = 7,
    ACTIONS(202), 1,
      anon_sym_AMP,
    ACTIONS(204), 1,
      anon_sym_AMP_POUND,
    ACTIONS(206), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(296), 1,
      aux_sym_AttValue_token1,
    ACTIONS(298), 1,
      anon_sym_DQUOTE,
    STATE(45), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(112), 2,
      sym_EntityRef,
      sym_CharRef,
  [1345] = 2,
    ACTIONS(302), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(300), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1359] = 7,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      anon_sym_AMP,
    ACTIONS(282), 1,
      anon_sym_AMP_POUND,
    ACTIONS(284), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(304), 1,
      aux_sym_AttValue_token2,
    STATE(52), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(108), 2,
      sym_EntityRef,
      sym_CharRef,
  [1383] = 2,
    ACTIONS(308), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(306), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1397] = 4,
    ACTIONS(117), 1,
      anon_sym_LT_QMARK,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 2,
      sym_Comment,
      sym__S,
    STATE(34), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1415] = 4,
    ACTIONS(117), 1,
      anon_sym_LT_QMARK,
    ACTIONS(314), 1,
      anon_sym_LT,
    ACTIONS(115), 2,
      sym_Comment,
      sym__S,
    STATE(21), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1433] = 4,
    ACTIONS(117), 1,
      anon_sym_LT_QMARK,
    ACTIONS(314), 1,
      anon_sym_LT,
    ACTIONS(316), 2,
      sym_Comment,
      sym__S,
    STATE(31), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1451] = 2,
    ACTIONS(320), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(318), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1465] = 2,
    ACTIONS(324), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(322), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1479] = 2,
    ACTIONS(328), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(326), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1493] = 7,
    ACTIONS(202), 1,
      anon_sym_AMP,
    ACTIONS(204), 1,
      anon_sym_AMP_POUND,
    ACTIONS(206), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(330), 1,
      aux_sym_AttValue_token1,
    STATE(55), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(112), 2,
      sym_EntityRef,
      sym_CharRef,
  [1517] = 2,
    ACTIONS(334), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(332), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1531] = 4,
    ACTIONS(117), 1,
      anon_sym_LT_QMARK,
    ACTIONS(336), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 2,
      sym_Comment,
      sym__S,
    STATE(21), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1549] = 2,
    ACTIONS(340), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(338), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1563] = 1,
    ACTIONS(342), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [1574] = 1,
    ACTIONS(344), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [1585] = 6,
    ACTIONS(346), 1,
      anon_sym_PIPE,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    ACTIONS(354), 1,
      sym__S,
    STATE(163), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(350), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [1606] = 1,
    ACTIONS(356), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [1617] = 6,
    ACTIONS(346), 1,
      anon_sym_PIPE,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
    ACTIONS(360), 1,
      sym__S,
    STATE(129), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(350), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [1638] = 8,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(362), 1,
      sym_Name,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_POUNDPCDATA,
    ACTIONS(368), 1,
      sym__S,
    STATE(71), 1,
      sym_PEReference,
    STATE(80), 1,
      sym__choice,
    STATE(125), 1,
      sym__cp,
  [1663] = 6,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(362), 1,
      sym_Name,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      sym__S,
    STATE(157), 1,
      sym__cp,
    STATE(80), 2,
      sym__choice,
      sym_PEReference,
  [1683] = 6,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(362), 1,
      sym_Name,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      sym__S,
    STATE(125), 1,
      sym__cp,
    STATE(80), 2,
      sym__choice,
      sym_PEReference,
  [1703] = 6,
    ACTIONS(376), 1,
      anon_sym_POUNDFIXED,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    STATE(244), 1,
      sym_AttValue,
    STATE(330), 1,
      sym_DefaultDecl,
    ACTIONS(374), 2,
      anon_sym_POUNDREQUIRED,
      anon_sym_POUNDIMPLIED,
  [1723] = 6,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(362), 1,
      sym_Name,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      sym__S,
    STATE(179), 1,
      sym__cp,
    STATE(80), 2,
      sym__choice,
      sym_PEReference,
  [1743] = 7,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(362), 1,
      sym_Name,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(384), 1,
      anon_sym_POUNDPCDATA,
    STATE(73), 1,
      sym_PEReference,
    STATE(80), 1,
      sym__choice,
    STATE(120), 1,
      sym__cp,
  [1765] = 2,
    ACTIONS(350), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
    ACTIONS(352), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1777] = 2,
    ACTIONS(388), 1,
      anon_sym_LT,
    ACTIONS(386), 5,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [1788] = 5,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(362), 1,
      sym_Name,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    STATE(157), 1,
      sym__cp,
    STATE(80), 2,
      sym__choice,
      sym_PEReference,
  [1805] = 6,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(390), 1,
      sym_Name,
    ACTIONS(392), 1,
      anon_sym_PIPE,
    ACTIONS(394), 1,
      sym__S,
    STATE(100), 1,
      aux_sym_NotationType_repeat1,
    STATE(304), 1,
      sym_PEReference,
  [1824] = 2,
    ACTIONS(334), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(332), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1835] = 6,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(392), 1,
      anon_sym_PIPE,
    ACTIONS(394), 1,
      sym__S,
    ACTIONS(396), 1,
      sym_Name,
    STATE(86), 1,
      aux_sym_NotationType_repeat1,
    STATE(309), 1,
      sym_PEReference,
  [1854] = 6,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(390), 1,
      sym_Name,
    ACTIONS(392), 1,
      anon_sym_PIPE,
    ACTIONS(394), 1,
      sym__S,
    STATE(109), 1,
      aux_sym_NotationType_repeat1,
    STATE(304), 1,
      sym_PEReference,
  [1873] = 2,
    ACTIONS(226), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(224), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1884] = 2,
    ACTIONS(398), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(180), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1895] = 2,
    ACTIONS(402), 1,
      anon_sym_LT,
    ACTIONS(400), 5,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [1906] = 5,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(362), 1,
      sym_Name,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    STATE(144), 1,
      sym__cp,
    STATE(80), 2,
      sym__choice,
      sym_PEReference,
  [1923] = 2,
    ACTIONS(340), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(338), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1934] = 5,
    ACTIONS(404), 1,
      anon_sym_DQUOTE,
    ACTIONS(406), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_SYSTEM,
    ACTIONS(410), 1,
      anon_sym_PUBLIC,
    STATE(291), 2,
      sym_EntityValue,
      sym_ExternalID,
  [1951] = 2,
    ACTIONS(334), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(332), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1962] = 6,
    ACTIONS(404), 1,
      anon_sym_DQUOTE,
    ACTIONS(406), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_SYSTEM,
    ACTIONS(410), 1,
      anon_sym_PUBLIC,
    STATE(240), 1,
      sym_ExternalID,
    STATE(251), 1,
      sym_EntityValue,
  [1981] = 5,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(408), 1,
      anon_sym_SYSTEM,
    ACTIONS(412), 1,
      anon_sym_PUBLIC,
    STATE(418), 1,
      sym_PEReference,
    STATE(249), 2,
      sym_ExternalID,
      sym_PublicID,
  [1998] = 5,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(362), 1,
      sym_Name,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    STATE(120), 1,
      sym__cp,
    STATE(80), 2,
      sym__choice,
      sym_PEReference,
  [2015] = 2,
    ACTIONS(226), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(224), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [2026] = 2,
    ACTIONS(416), 1,
      anon_sym_LT,
    ACTIONS(414), 5,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2037] = 2,
    ACTIONS(398), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(180), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [2048] = 6,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(392), 1,
      anon_sym_PIPE,
    ACTIONS(394), 1,
      sym__S,
    ACTIONS(418), 1,
      sym_Name,
    STATE(109), 1,
      aux_sym_NotationType_repeat1,
    STATE(294), 1,
      sym_PEReference,
  [2067] = 2,
    ACTIONS(422), 1,
      anon_sym_LT,
    ACTIONS(420), 5,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2078] = 2,
    ACTIONS(184), 1,
      anon_sym_LT,
    ACTIONS(182), 5,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2089] = 2,
    ACTIONS(426), 1,
      anon_sym_LT,
    ACTIONS(424), 5,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2100] = 2,
    ACTIONS(340), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(338), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [2111] = 2,
    ACTIONS(430), 1,
      anon_sym_LT,
    ACTIONS(428), 5,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2122] = 2,
    ACTIONS(276), 1,
      anon_sym_LT,
    ACTIONS(274), 5,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2133] = 2,
    ACTIONS(334), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(332), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [2143] = 2,
    ACTIONS(226), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(224), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [2153] = 4,
    ACTIONS(434), 1,
      anon_sym_PIPE,
    ACTIONS(437), 1,
      sym__S,
    STATE(109), 1,
      aux_sym_NotationType_repeat1,
    ACTIONS(432), 2,
      anon_sym_PERCENT,
      sym_Name,
  [2167] = 4,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
    ACTIONS(444), 1,
      sym__S,
    STATE(116), 1,
      aux_sym__choice_repeat1,
    ACTIONS(440), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2181] = 2,
    ACTIONS(448), 1,
      anon_sym_LT,
    ACTIONS(446), 4,
      sym_Comment,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2191] = 2,
    ACTIONS(226), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(224), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2201] = 2,
    ACTIONS(340), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(338), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [2211] = 4,
    ACTIONS(444), 1,
      sym__S,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym__choice_repeat1,
    ACTIONS(440), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2225] = 1,
    ACTIONS(79), 5,
      sym_Comment,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
      anon_sym_RBRACK,
  [2233] = 4,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
    ACTIONS(457), 1,
      sym__S,
    STATE(116), 1,
      aux_sym__choice_repeat1,
    ACTIONS(452), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2247] = 5,
    ACTIONS(408), 1,
      anon_sym_SYSTEM,
    ACTIONS(410), 1,
      anon_sym_PUBLIC,
    ACTIONS(460), 1,
      anon_sym_LBRACK,
    ACTIONS(462), 1,
      anon_sym_GT,
    STATE(242), 1,
      sym_ExternalID,
  [2263] = 1,
    ACTIONS(180), 5,
      sym_Comment,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
      anon_sym_RBRACK,
  [2271] = 1,
    ACTIONS(464), 5,
      sym_Comment,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
      anon_sym_RBRACK,
  [2279] = 4,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
    ACTIONS(444), 1,
      sym__S,
    STATE(114), 1,
      aux_sym__choice_repeat1,
    ACTIONS(440), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2293] = 2,
    ACTIONS(468), 1,
      anon_sym_LT,
    ACTIONS(466), 4,
      sym_Comment,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2303] = 2,
    ACTIONS(470), 2,
      anon_sym_GT,
      sym__S,
    ACTIONS(472), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [2313] = 2,
    ACTIONS(476), 1,
      anon_sym_LT,
    ACTIONS(474), 4,
      sym_Comment,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2323] = 2,
    ACTIONS(340), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(338), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2333] = 4,
    ACTIONS(444), 1,
      sym__S,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym__choice_repeat1,
    ACTIONS(440), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2347] = 2,
    ACTIONS(482), 1,
      anon_sym_LT,
    ACTIONS(480), 4,
      sym_Comment,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2357] = 2,
    ACTIONS(334), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(332), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2367] = 2,
    ACTIONS(486), 1,
      anon_sym_LT,
    ACTIONS(484), 3,
      sym_Comment,
      sym__S,
      anon_sym_LT_QMARK,
  [2376] = 4,
    ACTIONS(346), 1,
      anon_sym_PIPE,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
    ACTIONS(490), 1,
      sym__S,
    STATE(180), 1,
      aux_sym_Mixed_repeat1,
  [2389] = 2,
    ACTIONS(494), 1,
      sym__S,
    ACTIONS(492), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [2398] = 4,
    ACTIONS(497), 1,
      anon_sym_xml,
    ACTIONS(499), 1,
      anon_sym_xml_DASHstylesheet,
    ACTIONS(501), 1,
      anon_sym_xml_DASHmodel,
    ACTIONS(503), 1,
      sym_PITarget,
  [2411] = 2,
    ACTIONS(507), 1,
      anon_sym_LT,
    ACTIONS(505), 3,
      sym_Comment,
      sym__S,
      anon_sym_LT_QMARK,
  [2420] = 4,
    ACTIONS(509), 1,
      anon_sym_GT,
    ACTIONS(511), 1,
      sym__S,
    ACTIONS(513), 1,
      anon_sym_SLASH_GT,
    STATE(160), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2433] = 4,
    ACTIONS(509), 1,
      anon_sym_GT,
    ACTIONS(513), 1,
      anon_sym_SLASH_GT,
    ACTIONS(515), 1,
      sym_Name,
    STATE(215), 1,
      sym_Attribute,
  [2446] = 3,
    ACTIONS(517), 1,
      anon_sym_GT,
    ACTIONS(519), 1,
      sym__S,
    STATE(135), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2457] = 4,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(522), 1,
      sym_Name,
    ACTIONS(524), 1,
      anon_sym_GT,
    STATE(338), 1,
      sym_PEReference,
  [2470] = 4,
    ACTIONS(346), 1,
      anon_sym_PIPE,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
    ACTIONS(354), 1,
      sym__S,
    STATE(163), 1,
      aux_sym_Mixed_repeat1,
  [2483] = 1,
    ACTIONS(196), 4,
      sym_Comment,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
  [2490] = 4,
    ACTIONS(509), 1,
      anon_sym_GT,
    ACTIONS(526), 1,
      sym__S,
    ACTIONS(528), 1,
      anon_sym_SLASH_GT,
    STATE(160), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2503] = 1,
    ACTIONS(232), 4,
      sym_Comment,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
  [2510] = 4,
    ACTIONS(530), 1,
      anon_sym_GT,
    ACTIONS(532), 1,
      sym__S,
    ACTIONS(534), 1,
      anon_sym_SLASH_GT,
    STATE(139), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2523] = 4,
    ACTIONS(536), 1,
      anon_sym_LT,
    STATE(2), 1,
      sym_STag,
    STATE(30), 1,
      sym_element,
    STATE(162), 1,
      sym_EmptyElemTag,
  [2536] = 4,
    ACTIONS(538), 1,
      anon_sym_PIPE,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    ACTIONS(542), 1,
      sym__S,
    STATE(145), 1,
      aux_sym_Enumeration_repeat1,
  [2549] = 1,
    ACTIONS(544), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2556] = 4,
    ACTIONS(546), 1,
      anon_sym_PIPE,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
    ACTIONS(551), 1,
      sym__S,
    STATE(145), 1,
      aux_sym_Enumeration_repeat1,
  [2569] = 3,
    ACTIONS(554), 1,
      anon_sym_PERCENT,
    ACTIONS(556), 1,
      sym__S,
    STATE(119), 2,
      sym__DeclSep,
      sym_PEReference,
  [2580] = 2,
    ACTIONS(560), 1,
      anon_sym_LT,
    ACTIONS(558), 3,
      sym_Comment,
      sym__S,
      anon_sym_LT_QMARK,
  [2589] = 4,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(562), 1,
      sym_Name,
    ACTIONS(564), 1,
      sym__S,
    STATE(85), 1,
      sym_PEReference,
  [2602] = 4,
    ACTIONS(515), 1,
      sym_Name,
    ACTIONS(566), 1,
      anon_sym_GT,
    ACTIONS(568), 1,
      anon_sym_SLASH_GT,
    STATE(215), 1,
      sym_Attribute,
  [2615] = 1,
    ACTIONS(220), 4,
      sym_Comment,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
  [2622] = 2,
    ACTIONS(572), 1,
      anon_sym_LT,
    ACTIONS(570), 3,
      sym_Comment,
      sym__S,
      anon_sym_LT_QMARK,
  [2631] = 3,
    ACTIONS(574), 1,
      anon_sym_GT,
    ACTIONS(576), 1,
      sym__S,
    STATE(135), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2642] = 4,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(522), 1,
      sym_Name,
    ACTIONS(574), 1,
      anon_sym_GT,
    STATE(338), 1,
      sym_PEReference,
  [2655] = 2,
    ACTIONS(580), 1,
      anon_sym_LT,
    ACTIONS(578), 3,
      sym_Comment,
      sym__S,
      anon_sym_LT_QMARK,
  [2664] = 4,
    ACTIONS(538), 1,
      anon_sym_PIPE,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
    ACTIONS(584), 1,
      sym__S,
    STATE(145), 1,
      aux_sym_Enumeration_repeat1,
  [2677] = 4,
    ACTIONS(538), 1,
      anon_sym_PIPE,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
    ACTIONS(584), 1,
      sym__S,
    STATE(143), 1,
      aux_sym_Enumeration_repeat1,
  [2690] = 1,
    ACTIONS(586), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2697] = 4,
    ACTIONS(509), 1,
      anon_sym_GT,
    ACTIONS(515), 1,
      sym_Name,
    ACTIONS(528), 1,
      anon_sym_SLASH_GT,
    STATE(215), 1,
      sym_Attribute,
  [2710] = 4,
    ACTIONS(515), 1,
      sym_Name,
    ACTIONS(566), 1,
      anon_sym_GT,
    ACTIONS(588), 1,
      anon_sym_SLASH_GT,
    STATE(215), 1,
      sym_Attribute,
  [2723] = 3,
    ACTIONS(592), 1,
      sym__S,
    STATE(160), 1,
      aux_sym_EmptyElemTag_repeat1,
    ACTIONS(590), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
  [2734] = 4,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(595), 1,
      sym_Name,
    ACTIONS(597), 1,
      sym__S,
    STATE(190), 1,
      sym_PEReference,
  [2747] = 1,
    ACTIONS(288), 4,
      sym_Comment,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
  [2754] = 4,
    ACTIONS(346), 1,
      anon_sym_PIPE,
    ACTIONS(490), 1,
      sym__S,
    ACTIONS(599), 1,
      anon_sym_RPAREN,
    STATE(180), 1,
      aux_sym_Mixed_repeat1,
  [2767] = 4,
    ACTIONS(346), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
    ACTIONS(360), 1,
      sym__S,
    STATE(129), 1,
      aux_sym_Mixed_repeat1,
  [2780] = 1,
    ACTIONS(326), 4,
      sym_Comment,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
  [2787] = 1,
    ACTIONS(210), 4,
      sym_Comment,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
  [2794] = 1,
    ACTIONS(601), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2801] = 2,
    ACTIONS(605), 1,
      anon_sym_LT,
    ACTIONS(603), 3,
      sym_Comment,
      sym__S,
      anon_sym_LT_QMARK,
  [2810] = 4,
    ACTIONS(530), 1,
      anon_sym_GT,
    ACTIONS(607), 1,
      sym__S,
    ACTIONS(609), 1,
      anon_sym_SLASH_GT,
    STATE(133), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2823] = 3,
    ACTIONS(611), 1,
      anon_sym_GT,
    ACTIONS(613), 1,
      sym__S,
    STATE(152), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2834] = 4,
    ACTIONS(536), 1,
      anon_sym_LT,
    STATE(2), 1,
      sym_STag,
    STATE(46), 1,
      sym_element,
    STATE(162), 1,
      sym_EmptyElemTag,
  [2847] = 1,
    ACTIONS(615), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [2854] = 3,
    ACTIONS(554), 1,
      anon_sym_PERCENT,
    ACTIONS(617), 1,
      sym__S,
    STATE(115), 2,
      sym__DeclSep,
      sym_PEReference,
  [2865] = 4,
    ACTIONS(619), 1,
      anon_sym_ELEMENT,
    ACTIONS(621), 1,
      anon_sym_ATTLIST,
    ACTIONS(623), 1,
      anon_sym_NOTATION,
    ACTIONS(625), 1,
      anon_sym_ENTITY,
  [2878] = 2,
    ACTIONS(629), 1,
      anon_sym_LT,
    ACTIONS(627), 3,
      sym_Comment,
      sym__S,
      anon_sym_LT_QMARK,
  [2887] = 4,
    ACTIONS(538), 1,
      anon_sym_PIPE,
    ACTIONS(631), 1,
      anon_sym_RPAREN,
    ACTIONS(633), 1,
      sym__S,
    STATE(155), 1,
      aux_sym_Enumeration_repeat1,
  [2900] = 1,
    ACTIONS(318), 4,
      sym_Comment,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
  [2907] = 4,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(635), 1,
      sym_Name,
    ACTIONS(637), 1,
      sym__S,
    STATE(211), 1,
      sym_PEReference,
  [2920] = 1,
    ACTIONS(455), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2927] = 4,
    ACTIONS(639), 1,
      anon_sym_PIPE,
    ACTIONS(642), 1,
      anon_sym_RPAREN,
    ACTIONS(644), 1,
      sym__S,
    STATE(180), 1,
      aux_sym_Mixed_repeat1,
  [2940] = 1,
    ACTIONS(432), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [2947] = 1,
    ACTIONS(322), 4,
      sym_Comment,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
  [2954] = 4,
    ACTIONS(647), 1,
      sym__S,
    ACTIONS(649), 1,
      anon_sym_QMARK_GT,
    STATE(233), 1,
      sym__EncodingDecl,
    STATE(274), 1,
      sym__SDDecl,
  [2967] = 2,
    ACTIONS(653), 1,
      anon_sym_LT,
    ACTIONS(651), 3,
      sym_Comment,
      sym__S,
      anon_sym_LT_QMARK,
  [2976] = 2,
    ACTIONS(655), 1,
      sym__S,
    ACTIONS(432), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [2985] = 3,
    ACTIONS(658), 1,
      sym__S,
    ACTIONS(660), 1,
      anon_sym_QMARK_GT,
    STATE(202), 1,
      aux_sym_StyleSheetPI_repeat1,
  [2995] = 3,
    ACTIONS(662), 1,
      sym__S,
    ACTIONS(664), 1,
      anon_sym_EQ,
    STATE(216), 1,
      sym__Eq,
  [3005] = 1,
    ACTIONS(666), 3,
      anon_sym_LBRACK,
      anon_sym_GT,
      sym__S,
  [3011] = 3,
    ACTIONS(668), 1,
      sym_Name,
    ACTIONS(670), 1,
      anon_sym_QMARK_GT,
    STATE(275), 1,
      sym_PseudoAtt,
  [3021] = 2,
    ACTIONS(672), 1,
      sym__S,
    ACTIONS(642), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [3029] = 3,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(635), 1,
      sym_Name,
    STATE(211), 1,
      sym_PEReference,
  [3039] = 3,
    ACTIONS(675), 1,
      anon_sym_DQUOTE,
    ACTIONS(677), 1,
      anon_sym_SQUOTE,
    STATE(314), 1,
      sym_PseudoAttValue,
  [3049] = 3,
    ACTIONS(679), 1,
      sym_Name,
    ACTIONS(681), 1,
      anon_sym_PERCENT,
    STATE(383), 1,
      sym_PEReference,
  [3059] = 1,
    ACTIONS(683), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3065] = 3,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(685), 1,
      sym_Name,
    STATE(380), 1,
      sym_PEReference,
  [3075] = 3,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(687), 1,
      sym_Name,
    STATE(170), 1,
      sym_PEReference,
  [3085] = 3,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(689), 1,
      sym_Name,
    STATE(375), 1,
      sym_PEReference,
  [3095] = 3,
    ACTIONS(662), 1,
      sym__S,
    ACTIONS(664), 1,
      anon_sym_EQ,
    STATE(313), 1,
      sym__Eq,
  [3105] = 3,
    ACTIONS(662), 1,
      sym__S,
    ACTIONS(664), 1,
      anon_sym_EQ,
    STATE(293), 1,
      sym__Eq,
  [3115] = 2,
    ACTIONS(693), 1,
      sym__S,
    ACTIONS(691), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3123] = 3,
    ACTIONS(695), 1,
      anon_sym_LBRACK,
    ACTIONS(697), 1,
      anon_sym_GT,
    ACTIONS(699), 1,
      sym__S,
  [3133] = 3,
    ACTIONS(670), 1,
      anon_sym_QMARK_GT,
    ACTIONS(701), 1,
      sym__S,
    STATE(228), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3143] = 3,
    ACTIONS(668), 1,
      sym_Name,
    ACTIONS(703), 1,
      anon_sym_QMARK_GT,
    STATE(275), 1,
      sym_PseudoAtt,
  [3153] = 1,
    ACTIONS(705), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3159] = 1,
    ACTIONS(707), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3165] = 3,
    ACTIONS(703), 1,
      anon_sym_QMARK_GT,
    ACTIONS(709), 1,
      sym__S,
    STATE(228), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3175] = 3,
    ACTIONS(711), 1,
      anon_sym_DQUOTE,
    ACTIONS(713), 1,
      anon_sym_SQUOTE,
    STATE(222), 1,
      sym_SystemLiteral,
  [3185] = 3,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(715), 1,
      sym_Name,
    STATE(328), 1,
      sym_PEReference,
  [3195] = 3,
    ACTIONS(662), 1,
      sym__S,
    ACTIONS(664), 1,
      anon_sym_EQ,
    STATE(276), 1,
      sym__Eq,
  [3205] = 2,
    ACTIONS(719), 1,
      anon_sym_STAR,
    ACTIONS(717), 2,
      anon_sym_GT,
      sym__S,
  [3213] = 2,
    ACTIONS(723), 1,
      sym__S,
    ACTIONS(721), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [3221] = 1,
    ACTIONS(721), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3227] = 3,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(726), 1,
      sym_Name,
    STATE(221), 1,
      sym_PEReference,
  [3237] = 2,
    ACTIONS(730), 1,
      anon_sym_STAR,
    ACTIONS(728), 2,
      anon_sym_GT,
      sym__S,
  [3245] = 1,
    ACTIONS(590), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3251] = 3,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    STATE(226), 1,
      sym_AttValue,
  [3261] = 3,
    ACTIONS(711), 1,
      anon_sym_DQUOTE,
    ACTIONS(713), 1,
      anon_sym_SQUOTE,
    STATE(188), 1,
      sym_SystemLiteral,
  [3271] = 3,
    ACTIONS(732), 1,
      sym__S,
    ACTIONS(734), 1,
      anon_sym_QMARK_GT,
    STATE(206), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3281] = 1,
    ACTIONS(736), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3287] = 1,
    ACTIONS(738), 3,
      anon_sym_LBRACK,
      anon_sym_GT,
      sym__S,
  [3293] = 2,
    ACTIONS(740), 1,
      sym__S,
    ACTIONS(736), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [3301] = 1,
    ACTIONS(743), 3,
      anon_sym_LBRACK,
      anon_sym_GT,
      sym__S,
  [3307] = 3,
    ACTIONS(745), 1,
      anon_sym_DQUOTE,
    ACTIONS(747), 1,
      anon_sym_SQUOTE,
    STATE(366), 1,
      sym_PubidLiteral,
  [3317] = 3,
    ACTIONS(668), 1,
      sym_Name,
    ACTIONS(749), 1,
      anon_sym_QMARK_GT,
    STATE(275), 1,
      sym_PseudoAtt,
  [3327] = 1,
    ACTIONS(549), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3333] = 1,
    ACTIONS(751), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3339] = 3,
    ACTIONS(499), 1,
      anon_sym_xml_DASHstylesheet,
    ACTIONS(501), 1,
      anon_sym_xml_DASHmodel,
    ACTIONS(503), 1,
      sym_PITarget,
  [3349] = 3,
    ACTIONS(753), 1,
      sym__S,
    ACTIONS(756), 1,
      anon_sym_QMARK_GT,
    STATE(228), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3359] = 3,
    ACTIONS(668), 1,
      sym_Name,
    ACTIONS(758), 1,
      anon_sym_QMARK_GT,
    STATE(275), 1,
      sym_PseudoAtt,
  [3369] = 3,
    ACTIONS(662), 1,
      sym__S,
    ACTIONS(664), 1,
      anon_sym_EQ,
    STATE(192), 1,
      sym__Eq,
  [3379] = 3,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(760), 1,
      sym_Name,
    STATE(83), 1,
      sym_PEReference,
  [3389] = 3,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    STATE(307), 1,
      sym_AttValue,
  [3399] = 3,
    ACTIONS(762), 1,
      sym__S,
    ACTIONS(764), 1,
      anon_sym_QMARK_GT,
    STATE(278), 1,
      sym__SDDecl,
  [3409] = 3,
    ACTIONS(764), 1,
      anon_sym_QMARK_GT,
    ACTIONS(766), 1,
      anon_sym_encoding,
    ACTIONS(768), 1,
      anon_sym_standalone,
  [3419] = 3,
    ACTIONS(745), 1,
      anon_sym_DQUOTE,
    ACTIONS(747), 1,
      anon_sym_SQUOTE,
    STATE(289), 1,
      sym_PubidLiteral,
  [3429] = 3,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(522), 1,
      sym_Name,
    STATE(338), 1,
      sym_PEReference,
  [3439] = 1,
    ACTIONS(770), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3445] = 1,
    ACTIONS(772), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3451] = 3,
    ACTIONS(745), 1,
      anon_sym_DQUOTE,
    ACTIONS(747), 1,
      anon_sym_SQUOTE,
    STATE(288), 1,
      sym_PubidLiteral,
  [3461] = 3,
    ACTIONS(774), 1,
      anon_sym_GT,
    ACTIONS(776), 1,
      sym__S,
    STATE(266), 1,
      sym_NDataDecl,
  [3471] = 2,
    ACTIONS(780), 1,
      sym__S,
    ACTIONS(778), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3479] = 3,
    ACTIONS(782), 1,
      anon_sym_LBRACK,
    ACTIONS(784), 1,
      anon_sym_GT,
    ACTIONS(786), 1,
      sym__S,
  [3489] = 1,
    ACTIONS(788), 2,
      anon_sym_GT,
      sym__S,
  [3494] = 1,
    ACTIONS(790), 2,
      anon_sym_GT,
      sym__S,
  [3499] = 1,
    ACTIONS(792), 2,
      anon_sym_PERCENT,
      sym__S,
  [3504] = 2,
    ACTIONS(794), 1,
      sym__S,
    ACTIONS(796), 1,
      anon_sym_QMARK_GT,
  [3511] = 2,
    ACTIONS(798), 1,
      anon_sym_GT,
    ACTIONS(800), 1,
      sym__S,
  [3518] = 2,
    ACTIONS(29), 1,
      anon_sym_LT_SLASH,
    STATE(35), 1,
      sym_ETag,
  [3525] = 2,
    ACTIONS(802), 1,
      anon_sym_GT,
    ACTIONS(804), 1,
      sym__S,
  [3532] = 2,
    ACTIONS(806), 1,
      sym__S,
    ACTIONS(808), 1,
      anon_sym_QMARK_GT,
  [3539] = 2,
    ACTIONS(774), 1,
      anon_sym_GT,
    ACTIONS(810), 1,
      sym__S,
  [3546] = 2,
    ACTIONS(812), 1,
      sym__S,
    ACTIONS(814), 1,
      anon_sym_QMARK_GT,
  [3553] = 1,
    ACTIONS(816), 2,
      anon_sym_PERCENT,
      sym__S,
  [3558] = 2,
    ACTIONS(818), 1,
      sym__S,
    STATE(183), 1,
      sym__VersionInfo,
  [3565] = 1,
    ACTIONS(820), 2,
      anon_sym_GT,
      sym__S,
  [3570] = 1,
    ACTIONS(822), 2,
      anon_sym_PERCENT,
      sym__S,
  [3575] = 1,
    ACTIONS(824), 2,
      anon_sym_PERCENT,
      sym__S,
  [3580] = 2,
    ACTIONS(25), 1,
      anon_sym_LT_SLASH,
    STATE(138), 1,
      sym_ETag,
  [3587] = 2,
    ACTIONS(826), 1,
      sym_Name,
    ACTIONS(828), 1,
      sym__S,
  [3594] = 1,
    ACTIONS(830), 2,
      anon_sym_GT,
      sym__S,
  [3599] = 2,
    ACTIONS(832), 1,
      anon_sym_GT,
    ACTIONS(834), 1,
      sym__S,
  [3606] = 1,
    ACTIONS(182), 2,
      anon_sym_PERCENT,
      sym__S,
  [3611] = 1,
    ACTIONS(836), 2,
      anon_sym_PERCENT,
      sym__S,
  [3616] = 1,
    ACTIONS(274), 2,
      anon_sym_PERCENT,
      sym__S,
  [3621] = 2,
    ACTIONS(838), 1,
      anon_sym_GT,
    ACTIONS(840), 1,
      anon_sym_NDATA,
  [3628] = 2,
    ACTIONS(838), 1,
      anon_sym_GT,
    ACTIONS(842), 1,
      sym__S,
  [3635] = 1,
    ACTIONS(844), 2,
      anon_sym_GT,
      sym__S,
  [3640] = 2,
    ACTIONS(846), 1,
      anon_sym_GT,
    ACTIONS(848), 1,
      sym__S,
  [3647] = 1,
    ACTIONS(850), 2,
      anon_sym_PERCENT,
      sym__S,
  [3652] = 1,
    ACTIONS(852), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3657] = 2,
    ACTIONS(719), 1,
      anon_sym_RPAREN,
    ACTIONS(854), 1,
      anon_sym_PIPE,
  [3664] = 1,
    ACTIONS(856), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3669] = 2,
    ACTIONS(858), 1,
      anon_sym_GT,
    ACTIONS(860), 1,
      sym__S,
  [3676] = 2,
    ACTIONS(764), 1,
      anon_sym_QMARK_GT,
    ACTIONS(862), 1,
      sym__S,
  [3683] = 1,
    ACTIONS(756), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3688] = 2,
    ACTIONS(864), 1,
      anon_sym_DQUOTE,
    ACTIONS(866), 1,
      anon_sym_SQUOTE,
  [3695] = 2,
    ACTIONS(768), 1,
      anon_sym_standalone,
    ACTIONS(868), 1,
      anon_sym_QMARK_GT,
  [3702] = 2,
    ACTIONS(868), 1,
      anon_sym_QMARK_GT,
    ACTIONS(870), 1,
      sym__S,
  [3709] = 1,
    ACTIONS(872), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [3714] = 1,
    ACTIONS(874), 2,
      anon_sym_GT,
      sym__S,
  [3719] = 1,
    ACTIONS(876), 2,
      anon_sym_PERCENT,
      sym__S,
  [3724] = 2,
    ACTIONS(878), 1,
      sym__S,
    ACTIONS(880), 1,
      sym_Nmtoken,
  [3731] = 1,
    ACTIONS(882), 2,
      anon_sym_GT,
      sym__S,
  [3736] = 1,
    ACTIONS(884), 2,
      anon_sym_GT,
      sym__S,
  [3741] = 1,
    ACTIONS(886), 2,
      anon_sym_GT,
      sym__S,
  [3746] = 2,
    ACTIONS(888), 1,
      anon_sym_GT,
    ACTIONS(890), 1,
      sym__S,
  [3753] = 1,
    ACTIONS(892), 2,
      anon_sym_GT,
      sym__S,
  [3758] = 2,
    ACTIONS(894), 1,
      anon_sym_GT,
    ACTIONS(896), 1,
      sym__S,
  [3765] = 1,
    ACTIONS(894), 2,
      anon_sym_GT,
      sym__S,
  [3770] = 1,
    ACTIONS(898), 2,
      anon_sym_PERCENT,
      sym__S,
  [3775] = 2,
    ACTIONS(900), 1,
      anon_sym_GT,
    ACTIONS(902), 1,
      sym__S,
  [3782] = 1,
    ACTIONS(904), 2,
      anon_sym_GT,
      sym__S,
  [3787] = 2,
    ACTIONS(906), 1,
      anon_sym_DQUOTE,
    ACTIONS(908), 1,
      anon_sym_SQUOTE,
  [3794] = 2,
    ACTIONS(910), 1,
      anon_sym_RPAREN,
    ACTIONS(912), 1,
      sym__S,
  [3801] = 1,
    ACTIONS(914), 2,
      anon_sym_PERCENT,
      sym__S,
  [3806] = 1,
    ACTIONS(916), 2,
      anon_sym_GT,
      sym__S,
  [3811] = 2,
    ACTIONS(668), 1,
      sym_Name,
    STATE(275), 1,
      sym_PseudoAtt,
  [3818] = 1,
    ACTIONS(918), 2,
      anon_sym_GT,
      sym__S,
  [3823] = 1,
    ACTIONS(920), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3828] = 1,
    ACTIONS(728), 2,
      anon_sym_GT,
      sym__S,
  [3833] = 2,
    ACTIONS(515), 1,
      sym_Name,
    STATE(215), 1,
      sym_Attribute,
  [3840] = 1,
    ACTIONS(922), 2,
      anon_sym_PERCENT,
      sym__S,
  [3845] = 1,
    ACTIONS(924), 2,
      anon_sym_PERCENT,
      sym__S,
  [3850] = 2,
    ACTIONS(926), 1,
      anon_sym_RPAREN,
    ACTIONS(928), 1,
      sym__S,
  [3857] = 1,
    ACTIONS(930), 2,
      anon_sym_GT,
      sym__S,
  [3862] = 2,
    ACTIONS(730), 1,
      anon_sym_RPAREN,
    ACTIONS(854), 1,
      anon_sym_PIPE,
  [3869] = 1,
    ACTIONS(932), 2,
      anon_sym_GT,
      sym__S,
  [3874] = 1,
    ACTIONS(934), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3879] = 2,
    ACTIONS(936), 1,
      anon_sym_RPAREN,
    ACTIONS(938), 1,
      sym__S,
  [3886] = 1,
    ACTIONS(778), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3891] = 2,
    ACTIONS(940), 1,
      anon_sym_PIPE,
    ACTIONS(942), 1,
      anon_sym_RPAREN,
  [3898] = 1,
    ACTIONS(944), 2,
      anon_sym_GT,
      sym__S,
  [3903] = 2,
    ACTIONS(946), 1,
      anon_sym_DQUOTE,
    ACTIONS(948), 1,
      anon_sym_SQUOTE,
  [3910] = 1,
    ACTIONS(950), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3915] = 2,
    ACTIONS(952), 1,
      anon_sym_GT,
    ACTIONS(954), 1,
      sym__S,
  [3922] = 2,
    ACTIONS(956), 1,
      sym__S,
    ACTIONS(958), 1,
      sym_Nmtoken,
  [3929] = 2,
    ACTIONS(960), 1,
      anon_sym_GT,
    ACTIONS(962), 1,
      sym__S,
  [3936] = 1,
    ACTIONS(964), 2,
      anon_sym_PERCENT,
      sym__S,
  [3941] = 2,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    ACTIONS(940), 1,
      anon_sym_PIPE,
  [3948] = 1,
    ACTIONS(966), 2,
      anon_sym_GT,
      sym__S,
  [3953] = 1,
    ACTIONS(968), 2,
      anon_sym_PERCENT,
      sym__S,
  [3958] = 1,
    ACTIONS(970), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3963] = 1,
    ACTIONS(972), 2,
      anon_sym_yes,
      anon_sym_no,
  [3968] = 1,
    ACTIONS(974), 2,
      anon_sym_yes,
      anon_sym_no,
  [3973] = 1,
    ACTIONS(976), 2,
      anon_sym_GT,
      sym__S,
  [3978] = 1,
    ACTIONS(978), 2,
      anon_sym_GT,
      sym__S,
  [3983] = 2,
    ACTIONS(980), 1,
      anon_sym_GT,
    ACTIONS(982), 1,
      sym__S,
  [3990] = 1,
    ACTIONS(984), 2,
      anon_sym_GT,
      sym__S,
  [3995] = 1,
    ACTIONS(986), 2,
      anon_sym_PERCENT,
      sym__S,
  [4000] = 1,
    ACTIONS(988), 2,
      anon_sym_GT,
      sym__S,
  [4005] = 2,
    ACTIONS(990), 1,
      sym__S,
    ACTIONS(992), 1,
      sym_Nmtoken,
  [4012] = 1,
    ACTIONS(994), 2,
      anon_sym_GT,
      sym__S,
  [4017] = 2,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
    ACTIONS(940), 1,
      anon_sym_PIPE,
  [4024] = 1,
    ACTIONS(996), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4029] = 2,
    ACTIONS(980), 1,
      anon_sym_GT,
    ACTIONS(998), 1,
      anon_sym_LBRACK,
  [4036] = 1,
    ACTIONS(958), 1,
      sym_Nmtoken,
  [4040] = 1,
    ACTIONS(1000), 1,
      anon_sym_SEMI,
  [4044] = 1,
    ACTIONS(1002), 1,
      sym__S,
  [4048] = 1,
    ACTIONS(1004), 1,
      anon_sym_DQUOTE,
  [4052] = 1,
    ACTIONS(1004), 1,
      anon_sym_SQUOTE,
  [4056] = 1,
    ACTIONS(1006), 1,
      sym_EncName,
  [4060] = 1,
    ACTIONS(1008), 1,
      sym_Name,
  [4064] = 1,
    ACTIONS(1010), 1,
      sym_EncName,
  [4068] = 1,
    ACTIONS(1012), 1,
      sym__S,
  [4072] = 1,
    ACTIONS(1014), 1,
      anon_sym_STAR,
  [4076] = 1,
    ACTIONS(1016), 1,
      anon_sym_SEMI,
  [4080] = 1,
    ACTIONS(1018), 1,
      sym__S,
  [4084] = 1,
    ACTIONS(1020), 1,
      anon_sym_GT,
  [4088] = 1,
    ACTIONS(1022), 1,
      sym__S,
  [4092] = 1,
    ACTIONS(952), 1,
      anon_sym_GT,
  [4096] = 1,
    ACTIONS(1024), 1,
      sym__S,
  [4100] = 1,
    ACTIONS(1026), 1,
      anon_sym_LPAREN,
  [4104] = 1,
    ACTIONS(1028), 1,
      anon_sym_QMARK_GT,
  [4108] = 1,
    ACTIONS(1030), 1,
      sym_Nmtoken,
  [4112] = 1,
    ACTIONS(1032), 1,
      anon_sym_DOCTYPE,
  [4116] = 1,
    ACTIONS(1034), 1,
      aux_sym_SystemLiteral_token1,
  [4120] = 1,
    ACTIONS(1036), 1,
      aux_sym_SystemLiteral_token2,
  [4124] = 1,
    ACTIONS(1038), 1,
      sym_VersionNum,
  [4128] = 1,
    ACTIONS(1040), 1,
      sym_Nmtoken,
  [4132] = 1,
    ACTIONS(940), 1,
      anon_sym_PIPE,
  [4136] = 1,
    ACTIONS(1042), 1,
      sym_VersionNum,
  [4140] = 1,
    ACTIONS(1044), 1,
      aux_sym_PubidLiteral_token1,
  [4144] = 1,
    ACTIONS(1046), 1,
      anon_sym_PIPE,
  [4148] = 1,
    ACTIONS(1048), 1,
      aux_sym_PubidLiteral_token2,
  [4152] = 1,
    ACTIONS(1050), 1,
      sym__S,
  [4156] = 1,
    ACTIONS(896), 1,
      sym__S,
  [4160] = 1,
    ACTIONS(1052), 1,
      anon_sym_DQUOTE,
  [4164] = 1,
    ACTIONS(1054), 1,
      sym__S,
  [4168] = 1,
    ACTIONS(1052), 1,
      anon_sym_SQUOTE,
  [4172] = 1,
    ACTIONS(1056), 1,
      anon_sym_DQUOTE,
  [4176] = 1,
    ACTIONS(854), 1,
      anon_sym_PIPE,
  [4180] = 1,
    ACTIONS(730), 1,
      anon_sym_STAR,
  [4184] = 1,
    ACTIONS(1056), 1,
      anon_sym_SQUOTE,
  [4188] = 1,
    ACTIONS(926), 1,
      anon_sym_RPAREN,
  [4192] = 1,
    ACTIONS(1058), 1,
      sym__S,
  [4196] = 1,
    ACTIONS(1060), 1,
      anon_sym_GT,
  [4200] = 1,
    ACTIONS(910), 1,
      anon_sym_RPAREN,
  [4204] = 1,
    ACTIONS(1062), 1,
      sym__S,
  [4208] = 1,
    ACTIONS(868), 1,
      anon_sym_QMARK_GT,
  [4212] = 1,
    ACTIONS(1064), 1,
      sym__S,
  [4216] = 1,
    ACTIONS(1066), 1,
      anon_sym_RPAREN,
  [4220] = 1,
    ACTIONS(1068), 1,
      sym__S,
  [4224] = 1,
    ACTIONS(1070), 1,
      sym__S,
  [4228] = 1,
    ACTIONS(858), 1,
      anon_sym_GT,
  [4232] = 1,
    ACTIONS(1072), 1,
      anon_sym_DQUOTE,
  [4236] = 1,
    ACTIONS(1074), 1,
      anon_sym_EQ,
  [4240] = 1,
    ACTIONS(1076), 1,
      anon_sym_GT,
  [4244] = 1,
    ACTIONS(1078), 1,
      sym_CData,
  [4248] = 1,
    ACTIONS(1072), 1,
      anon_sym_SQUOTE,
  [4252] = 1,
    ACTIONS(1080), 1,
      anon_sym_DQUOTE,
  [4256] = 1,
    ACTIONS(1082), 1,
      anon_sym_QMARK_GT,
  [4260] = 1,
    ACTIONS(1084), 1,
      anon_sym_RBRACK_RBRACK_GT,
  [4264] = 1,
    ACTIONS(1080), 1,
      anon_sym_SQUOTE,
  [4268] = 1,
    ACTIONS(1086), 1,
      anon_sym_SEMI,
  [4272] = 1,
    ACTIONS(1088), 1,
      sym__S,
  [4276] = 1,
    ACTIONS(1090), 1,
      anon_sym_LBRACK,
  [4280] = 1,
    ACTIONS(1092), 1,
      anon_sym_version,
  [4284] = 1,
    ACTIONS(1094), 1,
      sym_Name,
  [4288] = 1,
    ACTIONS(1096), 1,
      sym__pi_content,
  [4292] = 1,
    ACTIONS(1098), 1,
      sym_Name,
  [4296] = 1,
    ACTIONS(838), 1,
      anon_sym_GT,
  [4300] = 1,
    ACTIONS(1100), 1,
      sym_CData,
  [4304] = 1,
    ACTIONS(832), 1,
      anon_sym_GT,
  [4308] = 1,
    ACTIONS(1102), 1,
      sym_Name,
  [4312] = 1,
    ACTIONS(1104), 1,
      sym_PITarget,
  [4316] = 1,
    ACTIONS(1106), 1,
      aux_sym_CharRef_token2,
  [4320] = 1,
    ACTIONS(1106), 1,
      aux_sym_CharRef_token1,
  [4324] = 1,
    ACTIONS(1108), 1,
      sym_Name,
  [4328] = 1,
    ACTIONS(1110), 1,
      anon_sym_CDATA,
  [4332] = 1,
    ACTIONS(1112), 1,
      anon_sym_GT,
  [4336] = 1,
    ACTIONS(1114), 1,
      anon_sym_GT,
  [4340] = 1,
    ACTIONS(1116), 1,
      anon_sym_GT,
  [4344] = 1,
    ACTIONS(1118), 1,
      sym__S,
  [4348] = 1,
    ACTIONS(1120), 1,
      sym__S,
  [4352] = 1,
    ACTIONS(1122), 1,
      ts_builtin_sym_end,
  [4356] = 1,
    ACTIONS(1124), 1,
      anon_sym_SEMI,
  [4360] = 1,
    ACTIONS(1126), 1,
      anon_sym_SEMI,
  [4364] = 1,
    ACTIONS(1128), 1,
      sym__S,
  [4368] = 1,
    ACTIONS(1130), 1,
      anon_sym_QMARK_GT,
  [4372] = 1,
    ACTIONS(1132), 1,
      sym_Name,
  [4376] = 1,
    ACTIONS(1134), 1,
      anon_sym_GT,
  [4380] = 1,
    ACTIONS(1136), 1,
      anon_sym_SEMI,
  [4384] = 1,
    ACTIONS(1138), 1,
      sym__S,
  [4388] = 1,
    ACTIONS(1140), 1,
      anon_sym_SEMI,
  [4392] = 1,
    ACTIONS(1142), 1,
      anon_sym_SEMI,
  [4396] = 1,
    ACTIONS(1144), 1,
      anon_sym_QMARK_GT,
  [4400] = 1,
    ACTIONS(1146), 1,
      anon_sym_SEMI,
  [4404] = 1,
    ACTIONS(1148), 1,
      anon_sym_SEMI,
  [4408] = 1,
    ACTIONS(1150), 1,
      anon_sym_SEMI,
  [4412] = 1,
    ACTIONS(1152), 1,
      anon_sym_SEMI,
  [4416] = 1,
    ACTIONS(1154), 1,
      anon_sym_SEMI,
  [4420] = 1,
    ACTIONS(1156), 1,
      anon_sym_SEMI,
  [4424] = 1,
    ACTIONS(1158), 1,
      sym_Name,
  [4428] = 1,
    ACTIONS(1160), 1,
      sym_Name,
  [4432] = 1,
    ACTIONS(1162), 1,
      aux_sym_CharRef_token1,
  [4436] = 1,
    ACTIONS(1162), 1,
      aux_sym_CharRef_token2,
  [4440] = 1,
    ACTIONS(1164), 1,
      sym_PITarget,
  [4444] = 1,
    ACTIONS(1166), 1,
      sym_Name,
  [4448] = 1,
    ACTIONS(1168), 1,
      sym__pi_content,
  [4452] = 1,
    ACTIONS(826), 1,
      sym_Name,
  [4456] = 1,
    ACTIONS(1170), 1,
      sym_Name,
  [4460] = 1,
    ACTIONS(1172), 1,
      aux_sym_CharRef_token1,
  [4464] = 1,
    ACTIONS(1172), 1,
      aux_sym_CharRef_token2,
  [4468] = 1,
    ACTIONS(1174), 1,
      sym__pi_content,
  [4472] = 1,
    ACTIONS(1176), 1,
      sym_Name,
  [4476] = 1,
    ACTIONS(1178), 1,
      sym_Name,
  [4480] = 1,
    ACTIONS(1180), 1,
      aux_sym_CharRef_token1,
  [4484] = 1,
    ACTIONS(1180), 1,
      aux_sym_CharRef_token2,
  [4488] = 1,
    ACTIONS(1182), 1,
      sym_Name,
  [4492] = 1,
    ACTIONS(1184), 1,
      sym_Name,
  [4496] = 1,
    ACTIONS(1186), 1,
      aux_sym_CharRef_token1,
  [4500] = 1,
    ACTIONS(1186), 1,
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
  [SMALL_STATE(10)] = 334,
  [SMALL_STATE(11)] = 367,
  [SMALL_STATE(12)] = 400,
  [SMALL_STATE(13)] = 430,
  [SMALL_STATE(14)] = 460,
  [SMALL_STATE(15)] = 490,
  [SMALL_STATE(16)] = 520,
  [SMALL_STATE(17)] = 548,
  [SMALL_STATE(18)] = 576,
  [SMALL_STATE(19)] = 600,
  [SMALL_STATE(20)] = 628,
  [SMALL_STATE(21)] = 656,
  [SMALL_STATE(22)] = 678,
  [SMALL_STATE(23)] = 706,
  [SMALL_STATE(24)] = 730,
  [SMALL_STATE(25)] = 754,
  [SMALL_STATE(26)] = 782,
  [SMALL_STATE(27)] = 806,
  [SMALL_STATE(28)] = 834,
  [SMALL_STATE(29)] = 847,
  [SMALL_STATE(30)] = 861,
  [SMALL_STATE(31)] = 879,
  [SMALL_STATE(32)] = 897,
  [SMALL_STATE(33)] = 915,
  [SMALL_STATE(34)] = 933,
  [SMALL_STATE(35)] = 951,
  [SMALL_STATE(36)] = 965,
  [SMALL_STATE(37)] = 989,
  [SMALL_STATE(38)] = 1003,
  [SMALL_STATE(39)] = 1021,
  [SMALL_STATE(40)] = 1043,
  [SMALL_STATE(41)] = 1057,
  [SMALL_STATE(42)] = 1071,
  [SMALL_STATE(43)] = 1085,
  [SMALL_STATE(44)] = 1099,
  [SMALL_STATE(45)] = 1123,
  [SMALL_STATE(46)] = 1147,
  [SMALL_STATE(47)] = 1165,
  [SMALL_STATE(48)] = 1183,
  [SMALL_STATE(49)] = 1197,
  [SMALL_STATE(50)] = 1211,
  [SMALL_STATE(51)] = 1235,
  [SMALL_STATE(52)] = 1249,
  [SMALL_STATE(53)] = 1273,
  [SMALL_STATE(54)] = 1297,
  [SMALL_STATE(55)] = 1321,
  [SMALL_STATE(56)] = 1345,
  [SMALL_STATE(57)] = 1359,
  [SMALL_STATE(58)] = 1383,
  [SMALL_STATE(59)] = 1397,
  [SMALL_STATE(60)] = 1415,
  [SMALL_STATE(61)] = 1433,
  [SMALL_STATE(62)] = 1451,
  [SMALL_STATE(63)] = 1465,
  [SMALL_STATE(64)] = 1479,
  [SMALL_STATE(65)] = 1493,
  [SMALL_STATE(66)] = 1517,
  [SMALL_STATE(67)] = 1531,
  [SMALL_STATE(68)] = 1549,
  [SMALL_STATE(69)] = 1563,
  [SMALL_STATE(70)] = 1574,
  [SMALL_STATE(71)] = 1585,
  [SMALL_STATE(72)] = 1606,
  [SMALL_STATE(73)] = 1617,
  [SMALL_STATE(74)] = 1638,
  [SMALL_STATE(75)] = 1663,
  [SMALL_STATE(76)] = 1683,
  [SMALL_STATE(77)] = 1703,
  [SMALL_STATE(78)] = 1723,
  [SMALL_STATE(79)] = 1743,
  [SMALL_STATE(80)] = 1765,
  [SMALL_STATE(81)] = 1777,
  [SMALL_STATE(82)] = 1788,
  [SMALL_STATE(83)] = 1805,
  [SMALL_STATE(84)] = 1824,
  [SMALL_STATE(85)] = 1835,
  [SMALL_STATE(86)] = 1854,
  [SMALL_STATE(87)] = 1873,
  [SMALL_STATE(88)] = 1884,
  [SMALL_STATE(89)] = 1895,
  [SMALL_STATE(90)] = 1906,
  [SMALL_STATE(91)] = 1923,
  [SMALL_STATE(92)] = 1934,
  [SMALL_STATE(93)] = 1951,
  [SMALL_STATE(94)] = 1962,
  [SMALL_STATE(95)] = 1981,
  [SMALL_STATE(96)] = 1998,
  [SMALL_STATE(97)] = 2015,
  [SMALL_STATE(98)] = 2026,
  [SMALL_STATE(99)] = 2037,
  [SMALL_STATE(100)] = 2048,
  [SMALL_STATE(101)] = 2067,
  [SMALL_STATE(102)] = 2078,
  [SMALL_STATE(103)] = 2089,
  [SMALL_STATE(104)] = 2100,
  [SMALL_STATE(105)] = 2111,
  [SMALL_STATE(106)] = 2122,
  [SMALL_STATE(107)] = 2133,
  [SMALL_STATE(108)] = 2143,
  [SMALL_STATE(109)] = 2153,
  [SMALL_STATE(110)] = 2167,
  [SMALL_STATE(111)] = 2181,
  [SMALL_STATE(112)] = 2191,
  [SMALL_STATE(113)] = 2201,
  [SMALL_STATE(114)] = 2211,
  [SMALL_STATE(115)] = 2225,
  [SMALL_STATE(116)] = 2233,
  [SMALL_STATE(117)] = 2247,
  [SMALL_STATE(118)] = 2263,
  [SMALL_STATE(119)] = 2271,
  [SMALL_STATE(120)] = 2279,
  [SMALL_STATE(121)] = 2293,
  [SMALL_STATE(122)] = 2303,
  [SMALL_STATE(123)] = 2313,
  [SMALL_STATE(124)] = 2323,
  [SMALL_STATE(125)] = 2333,
  [SMALL_STATE(126)] = 2347,
  [SMALL_STATE(127)] = 2357,
  [SMALL_STATE(128)] = 2367,
  [SMALL_STATE(129)] = 2376,
  [SMALL_STATE(130)] = 2389,
  [SMALL_STATE(131)] = 2398,
  [SMALL_STATE(132)] = 2411,
  [SMALL_STATE(133)] = 2420,
  [SMALL_STATE(134)] = 2433,
  [SMALL_STATE(135)] = 2446,
  [SMALL_STATE(136)] = 2457,
  [SMALL_STATE(137)] = 2470,
  [SMALL_STATE(138)] = 2483,
  [SMALL_STATE(139)] = 2490,
  [SMALL_STATE(140)] = 2503,
  [SMALL_STATE(141)] = 2510,
  [SMALL_STATE(142)] = 2523,
  [SMALL_STATE(143)] = 2536,
  [SMALL_STATE(144)] = 2549,
  [SMALL_STATE(145)] = 2556,
  [SMALL_STATE(146)] = 2569,
  [SMALL_STATE(147)] = 2580,
  [SMALL_STATE(148)] = 2589,
  [SMALL_STATE(149)] = 2602,
  [SMALL_STATE(150)] = 2615,
  [SMALL_STATE(151)] = 2622,
  [SMALL_STATE(152)] = 2631,
  [SMALL_STATE(153)] = 2642,
  [SMALL_STATE(154)] = 2655,
  [SMALL_STATE(155)] = 2664,
  [SMALL_STATE(156)] = 2677,
  [SMALL_STATE(157)] = 2690,
  [SMALL_STATE(158)] = 2697,
  [SMALL_STATE(159)] = 2710,
  [SMALL_STATE(160)] = 2723,
  [SMALL_STATE(161)] = 2734,
  [SMALL_STATE(162)] = 2747,
  [SMALL_STATE(163)] = 2754,
  [SMALL_STATE(164)] = 2767,
  [SMALL_STATE(165)] = 2780,
  [SMALL_STATE(166)] = 2787,
  [SMALL_STATE(167)] = 2794,
  [SMALL_STATE(168)] = 2801,
  [SMALL_STATE(169)] = 2810,
  [SMALL_STATE(170)] = 2823,
  [SMALL_STATE(171)] = 2834,
  [SMALL_STATE(172)] = 2847,
  [SMALL_STATE(173)] = 2854,
  [SMALL_STATE(174)] = 2865,
  [SMALL_STATE(175)] = 2878,
  [SMALL_STATE(176)] = 2887,
  [SMALL_STATE(177)] = 2900,
  [SMALL_STATE(178)] = 2907,
  [SMALL_STATE(179)] = 2920,
  [SMALL_STATE(180)] = 2927,
  [SMALL_STATE(181)] = 2940,
  [SMALL_STATE(182)] = 2947,
  [SMALL_STATE(183)] = 2954,
  [SMALL_STATE(184)] = 2967,
  [SMALL_STATE(185)] = 2976,
  [SMALL_STATE(186)] = 2985,
  [SMALL_STATE(187)] = 2995,
  [SMALL_STATE(188)] = 3005,
  [SMALL_STATE(189)] = 3011,
  [SMALL_STATE(190)] = 3021,
  [SMALL_STATE(191)] = 3029,
  [SMALL_STATE(192)] = 3039,
  [SMALL_STATE(193)] = 3049,
  [SMALL_STATE(194)] = 3059,
  [SMALL_STATE(195)] = 3065,
  [SMALL_STATE(196)] = 3075,
  [SMALL_STATE(197)] = 3085,
  [SMALL_STATE(198)] = 3095,
  [SMALL_STATE(199)] = 3105,
  [SMALL_STATE(200)] = 3115,
  [SMALL_STATE(201)] = 3123,
  [SMALL_STATE(202)] = 3133,
  [SMALL_STATE(203)] = 3143,
  [SMALL_STATE(204)] = 3153,
  [SMALL_STATE(205)] = 3159,
  [SMALL_STATE(206)] = 3165,
  [SMALL_STATE(207)] = 3175,
  [SMALL_STATE(208)] = 3185,
  [SMALL_STATE(209)] = 3195,
  [SMALL_STATE(210)] = 3205,
  [SMALL_STATE(211)] = 3213,
  [SMALL_STATE(212)] = 3221,
  [SMALL_STATE(213)] = 3227,
  [SMALL_STATE(214)] = 3237,
  [SMALL_STATE(215)] = 3245,
  [SMALL_STATE(216)] = 3251,
  [SMALL_STATE(217)] = 3261,
  [SMALL_STATE(218)] = 3271,
  [SMALL_STATE(219)] = 3281,
  [SMALL_STATE(220)] = 3287,
  [SMALL_STATE(221)] = 3293,
  [SMALL_STATE(222)] = 3301,
  [SMALL_STATE(223)] = 3307,
  [SMALL_STATE(224)] = 3317,
  [SMALL_STATE(225)] = 3327,
  [SMALL_STATE(226)] = 3333,
  [SMALL_STATE(227)] = 3339,
  [SMALL_STATE(228)] = 3349,
  [SMALL_STATE(229)] = 3359,
  [SMALL_STATE(230)] = 3369,
  [SMALL_STATE(231)] = 3379,
  [SMALL_STATE(232)] = 3389,
  [SMALL_STATE(233)] = 3399,
  [SMALL_STATE(234)] = 3409,
  [SMALL_STATE(235)] = 3419,
  [SMALL_STATE(236)] = 3429,
  [SMALL_STATE(237)] = 3439,
  [SMALL_STATE(238)] = 3445,
  [SMALL_STATE(239)] = 3451,
  [SMALL_STATE(240)] = 3461,
  [SMALL_STATE(241)] = 3471,
  [SMALL_STATE(242)] = 3479,
  [SMALL_STATE(243)] = 3489,
  [SMALL_STATE(244)] = 3494,
  [SMALL_STATE(245)] = 3499,
  [SMALL_STATE(246)] = 3504,
  [SMALL_STATE(247)] = 3511,
  [SMALL_STATE(248)] = 3518,
  [SMALL_STATE(249)] = 3525,
  [SMALL_STATE(250)] = 3532,
  [SMALL_STATE(251)] = 3539,
  [SMALL_STATE(252)] = 3546,
  [SMALL_STATE(253)] = 3553,
  [SMALL_STATE(254)] = 3558,
  [SMALL_STATE(255)] = 3565,
  [SMALL_STATE(256)] = 3570,
  [SMALL_STATE(257)] = 3575,
  [SMALL_STATE(258)] = 3580,
  [SMALL_STATE(259)] = 3587,
  [SMALL_STATE(260)] = 3594,
  [SMALL_STATE(261)] = 3599,
  [SMALL_STATE(262)] = 3606,
  [SMALL_STATE(263)] = 3611,
  [SMALL_STATE(264)] = 3616,
  [SMALL_STATE(265)] = 3621,
  [SMALL_STATE(266)] = 3628,
  [SMALL_STATE(267)] = 3635,
  [SMALL_STATE(268)] = 3640,
  [SMALL_STATE(269)] = 3647,
  [SMALL_STATE(270)] = 3652,
  [SMALL_STATE(271)] = 3657,
  [SMALL_STATE(272)] = 3664,
  [SMALL_STATE(273)] = 3669,
  [SMALL_STATE(274)] = 3676,
  [SMALL_STATE(275)] = 3683,
  [SMALL_STATE(276)] = 3688,
  [SMALL_STATE(277)] = 3695,
  [SMALL_STATE(278)] = 3702,
  [SMALL_STATE(279)] = 3709,
  [SMALL_STATE(280)] = 3714,
  [SMALL_STATE(281)] = 3719,
  [SMALL_STATE(282)] = 3724,
  [SMALL_STATE(283)] = 3731,
  [SMALL_STATE(284)] = 3736,
  [SMALL_STATE(285)] = 3741,
  [SMALL_STATE(286)] = 3746,
  [SMALL_STATE(287)] = 3753,
  [SMALL_STATE(288)] = 3758,
  [SMALL_STATE(289)] = 3765,
  [SMALL_STATE(290)] = 3770,
  [SMALL_STATE(291)] = 3775,
  [SMALL_STATE(292)] = 3782,
  [SMALL_STATE(293)] = 3787,
  [SMALL_STATE(294)] = 3794,
  [SMALL_STATE(295)] = 3801,
  [SMALL_STATE(296)] = 3806,
  [SMALL_STATE(297)] = 3811,
  [SMALL_STATE(298)] = 3818,
  [SMALL_STATE(299)] = 3823,
  [SMALL_STATE(300)] = 3828,
  [SMALL_STATE(301)] = 3833,
  [SMALL_STATE(302)] = 3840,
  [SMALL_STATE(303)] = 3845,
  [SMALL_STATE(304)] = 3850,
  [SMALL_STATE(305)] = 3857,
  [SMALL_STATE(306)] = 3862,
  [SMALL_STATE(307)] = 3869,
  [SMALL_STATE(308)] = 3874,
  [SMALL_STATE(309)] = 3879,
  [SMALL_STATE(310)] = 3886,
  [SMALL_STATE(311)] = 3891,
  [SMALL_STATE(312)] = 3898,
  [SMALL_STATE(313)] = 3903,
  [SMALL_STATE(314)] = 3910,
  [SMALL_STATE(315)] = 3915,
  [SMALL_STATE(316)] = 3922,
  [SMALL_STATE(317)] = 3929,
  [SMALL_STATE(318)] = 3936,
  [SMALL_STATE(319)] = 3941,
  [SMALL_STATE(320)] = 3948,
  [SMALL_STATE(321)] = 3953,
  [SMALL_STATE(322)] = 3958,
  [SMALL_STATE(323)] = 3963,
  [SMALL_STATE(324)] = 3968,
  [SMALL_STATE(325)] = 3973,
  [SMALL_STATE(326)] = 3978,
  [SMALL_STATE(327)] = 3983,
  [SMALL_STATE(328)] = 3990,
  [SMALL_STATE(329)] = 3995,
  [SMALL_STATE(330)] = 4000,
  [SMALL_STATE(331)] = 4005,
  [SMALL_STATE(332)] = 4012,
  [SMALL_STATE(333)] = 4017,
  [SMALL_STATE(334)] = 4024,
  [SMALL_STATE(335)] = 4029,
  [SMALL_STATE(336)] = 4036,
  [SMALL_STATE(337)] = 4040,
  [SMALL_STATE(338)] = 4044,
  [SMALL_STATE(339)] = 4048,
  [SMALL_STATE(340)] = 4052,
  [SMALL_STATE(341)] = 4056,
  [SMALL_STATE(342)] = 4060,
  [SMALL_STATE(343)] = 4064,
  [SMALL_STATE(344)] = 4068,
  [SMALL_STATE(345)] = 4072,
  [SMALL_STATE(346)] = 4076,
  [SMALL_STATE(347)] = 4080,
  [SMALL_STATE(348)] = 4084,
  [SMALL_STATE(349)] = 4088,
  [SMALL_STATE(350)] = 4092,
  [SMALL_STATE(351)] = 4096,
  [SMALL_STATE(352)] = 4100,
  [SMALL_STATE(353)] = 4104,
  [SMALL_STATE(354)] = 4108,
  [SMALL_STATE(355)] = 4112,
  [SMALL_STATE(356)] = 4116,
  [SMALL_STATE(357)] = 4120,
  [SMALL_STATE(358)] = 4124,
  [SMALL_STATE(359)] = 4128,
  [SMALL_STATE(360)] = 4132,
  [SMALL_STATE(361)] = 4136,
  [SMALL_STATE(362)] = 4140,
  [SMALL_STATE(363)] = 4144,
  [SMALL_STATE(364)] = 4148,
  [SMALL_STATE(365)] = 4152,
  [SMALL_STATE(366)] = 4156,
  [SMALL_STATE(367)] = 4160,
  [SMALL_STATE(368)] = 4164,
  [SMALL_STATE(369)] = 4168,
  [SMALL_STATE(370)] = 4172,
  [SMALL_STATE(371)] = 4176,
  [SMALL_STATE(372)] = 4180,
  [SMALL_STATE(373)] = 4184,
  [SMALL_STATE(374)] = 4188,
  [SMALL_STATE(375)] = 4192,
  [SMALL_STATE(376)] = 4196,
  [SMALL_STATE(377)] = 4200,
  [SMALL_STATE(378)] = 4204,
  [SMALL_STATE(379)] = 4208,
  [SMALL_STATE(380)] = 4212,
  [SMALL_STATE(381)] = 4216,
  [SMALL_STATE(382)] = 4220,
  [SMALL_STATE(383)] = 4224,
  [SMALL_STATE(384)] = 4228,
  [SMALL_STATE(385)] = 4232,
  [SMALL_STATE(386)] = 4236,
  [SMALL_STATE(387)] = 4240,
  [SMALL_STATE(388)] = 4244,
  [SMALL_STATE(389)] = 4248,
  [SMALL_STATE(390)] = 4252,
  [SMALL_STATE(391)] = 4256,
  [SMALL_STATE(392)] = 4260,
  [SMALL_STATE(393)] = 4264,
  [SMALL_STATE(394)] = 4268,
  [SMALL_STATE(395)] = 4272,
  [SMALL_STATE(396)] = 4276,
  [SMALL_STATE(397)] = 4280,
  [SMALL_STATE(398)] = 4284,
  [SMALL_STATE(399)] = 4288,
  [SMALL_STATE(400)] = 4292,
  [SMALL_STATE(401)] = 4296,
  [SMALL_STATE(402)] = 4300,
  [SMALL_STATE(403)] = 4304,
  [SMALL_STATE(404)] = 4308,
  [SMALL_STATE(405)] = 4312,
  [SMALL_STATE(406)] = 4316,
  [SMALL_STATE(407)] = 4320,
  [SMALL_STATE(408)] = 4324,
  [SMALL_STATE(409)] = 4328,
  [SMALL_STATE(410)] = 4332,
  [SMALL_STATE(411)] = 4336,
  [SMALL_STATE(412)] = 4340,
  [SMALL_STATE(413)] = 4344,
  [SMALL_STATE(414)] = 4348,
  [SMALL_STATE(415)] = 4352,
  [SMALL_STATE(416)] = 4356,
  [SMALL_STATE(417)] = 4360,
  [SMALL_STATE(418)] = 4364,
  [SMALL_STATE(419)] = 4368,
  [SMALL_STATE(420)] = 4372,
  [SMALL_STATE(421)] = 4376,
  [SMALL_STATE(422)] = 4380,
  [SMALL_STATE(423)] = 4384,
  [SMALL_STATE(424)] = 4388,
  [SMALL_STATE(425)] = 4392,
  [SMALL_STATE(426)] = 4396,
  [SMALL_STATE(427)] = 4400,
  [SMALL_STATE(428)] = 4404,
  [SMALL_STATE(429)] = 4408,
  [SMALL_STATE(430)] = 4412,
  [SMALL_STATE(431)] = 4416,
  [SMALL_STATE(432)] = 4420,
  [SMALL_STATE(433)] = 4424,
  [SMALL_STATE(434)] = 4428,
  [SMALL_STATE(435)] = 4432,
  [SMALL_STATE(436)] = 4436,
  [SMALL_STATE(437)] = 4440,
  [SMALL_STATE(438)] = 4444,
  [SMALL_STATE(439)] = 4448,
  [SMALL_STATE(440)] = 4452,
  [SMALL_STATE(441)] = 4456,
  [SMALL_STATE(442)] = 4460,
  [SMALL_STATE(443)] = 4464,
  [SMALL_STATE(444)] = 4468,
  [SMALL_STATE(445)] = 4472,
  [SMALL_STATE(446)] = 4476,
  [SMALL_STATE(447)] = 4480,
  [SMALL_STATE(448)] = 4484,
  [SMALL_STATE(449)] = 4488,
  [SMALL_STATE(450)] = 4492,
  [SMALL_STATE(451)] = 4496,
  [SMALL_STATE(452)] = 4500,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(409),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(408),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(407),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(406),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(405),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(433),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(4),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(174),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(26),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(437),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__intSubset, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(302),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(449),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(16),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(450),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(451),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(452),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 1),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(445),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(19),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(446),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(447),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(448),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(21),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(227),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEReference, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 5),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 5),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, .production_id = 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, .production_id = 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EmptyElemTag, 4),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EmptyElemTag, 4),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Reference, 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__Reference, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CDSect, 3),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CDSect, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EmptyElemTag, 3),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EmptyElemTag, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(441),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(442),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(443),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(44),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(434),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(435),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(436),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(45),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3, .production_id = 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3, .production_id = 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STag, 4),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STag, 4),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 3),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STag, 3),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STag, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STag, 5),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STag, 5),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, .production_id = 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ETag, 4),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ETag, 4),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EmptyElemTag, 5),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EmptyElemTag, 5),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ETag, 3),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ETag, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityRef, 3),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EntityRef, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4, .production_id = 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CharRef, 3),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CharRef, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 5),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 4),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XmlModelPI, 4),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XmlModelPI, 4),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEReference, 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StyleSheetPI, 4),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StyleSheetPI, 4),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XmlModelPI, 3),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XmlModelPI, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StyleSheetPI, 3),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StyleSheetPI, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XmlModelPI, 5),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XmlModelPI, 5),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StyleSheetPI, 5),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StyleSheetPI, 5),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(130),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(363),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 5),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 5),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(78),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(279),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__intSubset, 3),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 7),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 7),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 1),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 4),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 4),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 6),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 6),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 9),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 9),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1), SHIFT_REPEAT(181),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 11),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 11),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2), SHIFT_REPEAT(236),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 4),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(331),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(360),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 10),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 10),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 12),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 12),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 7),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 7),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 3),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EmptyElemTag_repeat1, 2),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EmptyElemTag_repeat1, 2), SHIFT_REPEAT(301),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 2),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 5),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 5),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 3),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 8),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 8),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [639] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(161),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(371),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 6),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 6),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(172),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 3),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(212),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 3, .production_id = 4),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 1),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 2),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 4),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 3),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3), SHIFT_REPEAT(219),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 4),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SystemLiteral, 3),
  [740] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4), SHIFT_REPEAT(237),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 5),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Attribute, 3),
  [753] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_StyleSheetPI_repeat1, 2), SHIFT_REPEAT(297),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_StyleSheetPI_repeat1, 2),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 5),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 3),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 2),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contentspec, 1),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 1),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 6),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 7),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 7),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 7),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 2),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 7),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PubidLiteral, 3),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 5),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__SDDecl, 6),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EncodingDecl, 6),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 9),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 8),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StringType, 1),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__AttType, 1),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 8),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 4),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EnumeratedType, 1),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PublicID, 3),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 8),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 3, .production_id = 4),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 8),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 7),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 6),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PseudoAttValue, 3, .production_id = 4),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markupdecl, 1),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EntityDecl, 1),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 6),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 3),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__VersionInfo, 6),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 5),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PseudoAtt, 3),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 9),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 4),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 9),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PseudoAttValue, 2),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 5),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 6),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NDataDecl, 4),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 10),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 6),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 3),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 3),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CDStart, 3),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1122] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
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
