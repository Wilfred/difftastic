#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 275
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 94
#define ALIAS_COUNT 1
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 3

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
  sym_document = 50,
  sym__markupdecl = 51,
  sym__DeclSep = 52,
  sym_elementdecl = 53,
  sym_contentspec = 54,
  sym_Mixed = 55,
  sym_children = 56,
  sym__cp = 57,
  sym__choice = 58,
  sym__seq = 59,
  sym_AttlistDecl = 60,
  sym_AttDef = 61,
  sym__AttType = 62,
  sym__EnumeratedType = 63,
  sym_NotationType = 64,
  sym_Enumeration = 65,
  sym_DefaultDecl = 66,
  sym__EntityDecl = 67,
  sym_GEDecl = 68,
  sym_PEDecl = 69,
  sym_EntityValue = 70,
  sym_NDataDecl = 71,
  sym_NotationDecl = 72,
  sym_PEReference = 73,
  sym__Reference = 74,
  sym_EntityRef = 75,
  sym_CharRef = 76,
  sym_AttValue = 77,
  sym_ExternalID = 78,
  sym_PublicID = 79,
  sym_SystemLiteral = 80,
  sym_PubidLiteral = 81,
  sym_PI = 82,
  aux_sym_document_repeat1 = 83,
  aux_sym_Mixed_repeat1 = 84,
  aux_sym__choice_repeat1 = 85,
  aux_sym__seq_repeat1 = 86,
  aux_sym_AttlistDecl_repeat1 = 87,
  aux_sym_NotationType_repeat1 = 88,
  aux_sym_Enumeration_repeat1 = 89,
  aux_sym_EntityValue_repeat1 = 90,
  aux_sym_EntityValue_repeat2 = 91,
  aux_sym_AttValue_repeat1 = 92,
  aux_sym_AttValue_repeat2 = 93,
  alias_sym_PITarget = 94,
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
  [50] = 4,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 4,
  [56] = 56,
  [57] = 53,
  [58] = 48,
  [59] = 46,
  [60] = 53,
  [61] = 46,
  [62] = 48,
  [63] = 63,
  [64] = 48,
  [65] = 46,
  [66] = 53,
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
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
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
  [256] = 221,
  [257] = 205,
  [258] = 206,
  [259] = 221,
  [260] = 205,
  [261] = 206,
  [262] = 205,
  [263] = 206,
  [264] = 237,
  [265] = 240,
  [266] = 241,
  [267] = 242,
  [268] = 237,
  [269] = 240,
  [270] = 241,
  [271] = 242,
  [272] = 240,
  [273] = 241,
  [274] = 242,
};

static inline bool aux_sym_EntityValue_token1_character_set_1(int32_t c) {
  return (c < 248
    ? (c < '_'
      ? (c < ':'
        ? c == 0
        : (c <= ':' || (c >= 'G' && c <= 'Z')))
      : (c <= '_' || (c < 192
        ? (c >= 'g' && c <= 'z')
        : (c <= 214 || (c >= 216 && c <= 246)))))
    : (c <= 893 || (c < 11264
      ? (c < 8204
        ? (c >= 895 && c <= 8191)
        : (c <= 8205 || (c >= 8304 && c <= 8591)))
      : (c <= 12271 || (c < 63744
        ? (c >= 12289 && c <= 55295)
        : (c <= 64975 || (c >= 65008 && c <= 983039)))))));
}

static inline bool aux_sym_EntityValue_token1_character_set_2(int32_t c) {
  return (c < 895
    ? (c < 'g'
      ? (c < 'G'
        ? c == ':'
        : (c <= 'Z' || c == '_'))
      : (c <= 'z' || (c < 216
        ? (c >= 192 && c <= 214)
        : (c <= 246 || (c >= 248 && c <= 893)))))
    : (c <= 8191 || (c < 12289
      ? (c < 8304
        ? (c >= 8204 && c <= 8205)
        : (c <= 8591 || (c >= 11264 && c <= 12271)))
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
      if (eof) ADVANCE(62);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '&') ADVANCE(98);
      if (lookahead == '\'') ADVANCE(85);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(68);
      if (lookahead == '*') ADVANCE(69);
      if (lookahead == '+') ADVANCE(90);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '<') ADVANCE(91);
      if (lookahead == '>') ADVANCE(64);
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == '|') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(83);
      if (lookahead == 0 ||
          lookahead == 65534 ||
          lookahead == 65535) ADVANCE(78);
      if (!aux_sym_EntityValue_token1_character_set_1(lookahead)) ADVANCE(78);
      if (aux_sym_EntityValue_token1_character_set_2(lookahead)) ADVANCE(84);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '?') ADVANCE(113);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '&') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(78);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '&') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(103);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '&') ADVANCE(98);
      if (lookahead == '\'') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(86);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(98);
      if (lookahead == '\'') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(104);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'E') ADVANCE(35);
      if (lookahead == 'N') ADVANCE(42);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(10);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(116);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(115);
      END_STATE();
    case 12:
      if (lookahead == '?') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(66);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(51);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(53);
      END_STATE();
    case 16:
      if (lookahead == 'C') ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'D') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 'D') ADVANCE(74);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(73);
      END_STATE();
    case 20:
      if (lookahead == 'D') ADVANCE(72);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(44);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(40);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(18);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 'F') ADVANCE(28);
      if (lookahead == 'I') ADVANCE(37);
      if (lookahead == 'P') ADVANCE(16);
      if (lookahead == 'R') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 'I') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == 'I') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 'I') ADVANCE(46);
      END_STATE();
    case 31:
      if (lookahead == 'I') ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == 'I') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'I') ADVANCE(25);
      END_STATE();
    case 34:
      if (lookahead == 'L') ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == 'L') ADVANCE(23);
      if (lookahead == 'N') ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead == 'L') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == 'M') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == 'M') ADVANCE(22);
      END_STATE();
    case 39:
      if (lookahead == 'N') ADVANCE(87);
      END_STATE();
    case 40:
      if (lookahead == 'N') ADVANCE(49);
      END_STATE();
    case 41:
      if (lookahead == 'O') ADVANCE(39);
      END_STATE();
    case 42:
      if (lookahead == 'O') ADVANCE(55);
      END_STATE();
    case 43:
      if (lookahead == 'P') ADVANCE(34);
      END_STATE();
    case 44:
      if (lookahead == 'Q') ADVANCE(56);
      END_STATE();
    case 45:
      if (lookahead == 'R') ADVANCE(26);
      END_STATE();
    case 46:
      if (lookahead == 'S') ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == 'T') ADVANCE(58);
      END_STATE();
    case 48:
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(63);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(54);
      END_STATE();
    case 51:
      if (lookahead == 'T') ADVANCE(13);
      END_STATE();
    case 52:
      if (lookahead == 'T') ADVANCE(32);
      END_STATE();
    case 53:
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 54:
      if (lookahead == 'T') ADVANCE(36);
      END_STATE();
    case 55:
      if (lookahead == 'T') ADVANCE(15);
      END_STATE();
    case 56:
      if (lookahead == 'U') ADVANCE(29);
      END_STATE();
    case 57:
      if (lookahead == 'X') ADVANCE(24);
      END_STATE();
    case 58:
      if (lookahead == 'Y') ADVANCE(75);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 60:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(114);
      END_STATE();
    case 61:
      if (eof) ADVANCE(62);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(85);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(68);
      if (lookahead == '*') ADVANCE(69);
      if (lookahead == '+') ADVANCE(90);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '>') ADVANCE(64);
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == '|') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (sym_Name_character_set_1(lookahead)) ADVANCE(94);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT_BANGELEMENT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_POUNDPCDATA);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LT_BANGATTLIST);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_POUNDREQUIRED);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_POUNDIMPLIED);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_POUNDFIXED);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LT_BANGENTITY);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'F') ADVANCE(28);
      if (lookahead == 'I') ADVANCE(37);
      if (lookahead == 'P') ADVANCE(16);
      if (lookahead == 'R') ADVANCE(21);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      if (sym_Nmtoken_character_set_2(lookahead)) ADVANCE(97);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      if (sym_Nmtoken_character_set_2(lookahead)) ADVANCE(94);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(94);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_EntityValue_token2);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LT_BANGNOTATION);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__Char);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '?') ADVANCE(113);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      if (sym_Nmtoken_character_set_2(lookahead)) ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_Name);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      if (sym_Nmtoken_character_set_2(lookahead)) ADVANCE(97);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      if (sym_Nmtoken_character_set_2(lookahead)) ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '#') ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_AMP_POUND);
      if (lookahead == 'x') ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_CharRef_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_CharRef_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_AttValue_token1);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_AttValue_token2);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token1);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token2);
      if (lookahead == '\'') ADVANCE(85);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token1);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '%') ||
          ('\'' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token1);
      if (aux_sym_PubidLiteral_token1_character_set_1(lookahead)) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token2);
      if (lookahead == '\'') ADVANCE(85);
      if (aux_sym_PubidLiteral_token2_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token2);
      if (aux_sym_PubidLiteral_token2_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_PI_token1);
      if (lookahead == '?') ADVANCE(60);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_Comment);
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
      END_STATE();
    case 1:
      if (lookahead == 'N') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == 'D') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'M') ADVANCE(10);
      if (lookahead == 'N') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'D') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'D') ADVANCE(13);
      if (lookahead == 'M') ADVANCE(14);
      if (lookahead == 'O') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == 'U') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 'Y') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == 'Y') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'P') ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == 'T') ADVANCE(21);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'R') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == 'T') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == 'T') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == 'B') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'S') ADVANCE(27);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_ANY);
      END_STATE();
    case 19:
      if (lookahead == 'T') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'T') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'I') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'T') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 'O') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'L') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 'T') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == 'Y') ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == 'T') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 'F') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == 'K') ADVANCE(42);
      END_STATE();
    case 34:
      if (lookahead == 'T') ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == 'I') ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(45);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_StringType);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_EMPTY);
      END_STATE();
    case 39:
      if (lookahead == 'I') ADVANCE(46);
      if (lookahead == 'Y') ADVANCE(47);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(47);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_NDATA);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == 'I') ADVANCE(49);
      END_STATE();
    case 44:
      if (lookahead == 'C') ADVANCE(50);
      END_STATE();
    case 45:
      if (lookahead == 'M') ADVANCE(51);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(52);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_TokenizedType);
      END_STATE();
    case 48:
      if (lookahead == 'N') ADVANCE(53);
      END_STATE();
    case 49:
      if (lookahead == 'O') ADVANCE(54);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_PUBLIC);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SYSTEM);
      END_STATE();
    case 52:
      if (lookahead == 'S') ADVANCE(47);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(47);
      END_STATE();
    case 54:
      if (lookahead == 'N') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_NOTATION);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 61},
  [2] = {.lex_state = 61},
  [3] = {.lex_state = 61},
  [4] = {.lex_state = 61},
  [5] = {.lex_state = 61},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 61},
  [13] = {.lex_state = 61},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 61},
  [21] = {.lex_state = 61},
  [22] = {.lex_state = 61},
  [23] = {.lex_state = 61},
  [24] = {.lex_state = 61},
  [25] = {.lex_state = 61},
  [26] = {.lex_state = 61},
  [27] = {.lex_state = 61},
  [28] = {.lex_state = 61},
  [29] = {.lex_state = 61},
  [30] = {.lex_state = 61},
  [31] = {.lex_state = 61},
  [32] = {.lex_state = 61},
  [33] = {.lex_state = 61},
  [34] = {.lex_state = 61},
  [35] = {.lex_state = 61},
  [36] = {.lex_state = 61},
  [37] = {.lex_state = 61},
  [38] = {.lex_state = 61},
  [39] = {.lex_state = 61},
  [40] = {.lex_state = 61},
  [41] = {.lex_state = 61},
  [42] = {.lex_state = 61},
  [43] = {.lex_state = 61},
  [44] = {.lex_state = 61},
  [45] = {.lex_state = 61},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 61},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 61},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 61},
  [52] = {.lex_state = 61},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 61},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 61},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 61},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 61},
  [68] = {.lex_state = 61},
  [69] = {.lex_state = 61},
  [70] = {.lex_state = 61},
  [71] = {.lex_state = 61},
  [72] = {.lex_state = 61},
  [73] = {.lex_state = 61},
  [74] = {.lex_state = 61},
  [75] = {.lex_state = 61},
  [76] = {.lex_state = 61},
  [77] = {.lex_state = 61},
  [78] = {.lex_state = 61},
  [79] = {.lex_state = 61},
  [80] = {.lex_state = 61},
  [81] = {.lex_state = 61},
  [82] = {.lex_state = 61},
  [83] = {.lex_state = 61},
  [84] = {.lex_state = 61},
  [85] = {.lex_state = 61},
  [86] = {.lex_state = 61},
  [87] = {.lex_state = 61},
  [88] = {.lex_state = 61},
  [89] = {.lex_state = 61},
  [90] = {.lex_state = 61},
  [91] = {.lex_state = 61},
  [92] = {.lex_state = 61},
  [93] = {.lex_state = 61},
  [94] = {.lex_state = 61},
  [95] = {.lex_state = 61},
  [96] = {.lex_state = 61},
  [97] = {.lex_state = 61},
  [98] = {.lex_state = 61},
  [99] = {.lex_state = 61},
  [100] = {.lex_state = 61},
  [101] = {.lex_state = 61},
  [102] = {.lex_state = 61},
  [103] = {.lex_state = 61},
  [104] = {.lex_state = 61},
  [105] = {.lex_state = 61},
  [106] = {.lex_state = 61},
  [107] = {.lex_state = 61},
  [108] = {.lex_state = 61},
  [109] = {.lex_state = 61},
  [110] = {.lex_state = 61},
  [111] = {.lex_state = 61},
  [112] = {.lex_state = 61},
  [113] = {.lex_state = 61},
  [114] = {.lex_state = 61},
  [115] = {.lex_state = 61},
  [116] = {.lex_state = 61},
  [117] = {.lex_state = 61},
  [118] = {.lex_state = 61},
  [119] = {.lex_state = 61},
  [120] = {.lex_state = 61},
  [121] = {.lex_state = 61},
  [122] = {.lex_state = 61},
  [123] = {.lex_state = 61},
  [124] = {.lex_state = 61},
  [125] = {.lex_state = 61},
  [126] = {.lex_state = 61},
  [127] = {.lex_state = 61},
  [128] = {.lex_state = 61},
  [129] = {.lex_state = 61},
  [130] = {.lex_state = 61},
  [131] = {.lex_state = 61},
  [132] = {.lex_state = 61},
  [133] = {.lex_state = 61},
  [134] = {.lex_state = 111},
  [135] = {.lex_state = 61},
  [136] = {.lex_state = 61},
  [137] = {.lex_state = 61},
  [138] = {.lex_state = 61},
  [139] = {.lex_state = 61},
  [140] = {.lex_state = 61},
  [141] = {.lex_state = 61},
  [142] = {.lex_state = 61},
  [143] = {.lex_state = 61},
  [144] = {.lex_state = 61},
  [145] = {.lex_state = 61},
  [146] = {.lex_state = 61},
  [147] = {.lex_state = 61},
  [148] = {.lex_state = 61},
  [149] = {.lex_state = 61},
  [150] = {.lex_state = 61},
  [151] = {.lex_state = 12},
  [152] = {.lex_state = 61},
  [153] = {.lex_state = 61},
  [154] = {.lex_state = 61},
  [155] = {.lex_state = 61},
  [156] = {.lex_state = 61},
  [157] = {.lex_state = 61},
  [158] = {.lex_state = 61},
  [159] = {.lex_state = 12},
  [160] = {.lex_state = 61},
  [161] = {.lex_state = 61},
  [162] = {.lex_state = 61},
  [163] = {.lex_state = 61},
  [164] = {.lex_state = 61},
  [165] = {.lex_state = 61},
  [166] = {.lex_state = 61},
  [167] = {.lex_state = 61},
  [168] = {.lex_state = 61},
  [169] = {.lex_state = 61},
  [170] = {.lex_state = 61},
  [171] = {.lex_state = 61},
  [172] = {.lex_state = 61},
  [173] = {.lex_state = 61},
  [174] = {.lex_state = 61},
  [175] = {.lex_state = 61},
  [176] = {.lex_state = 61},
  [177] = {.lex_state = 61},
  [178] = {.lex_state = 61},
  [179] = {.lex_state = 61},
  [180] = {.lex_state = 107},
  [181] = {.lex_state = 12},
  [182] = {.lex_state = 61},
  [183] = {.lex_state = 61},
  [184] = {.lex_state = 61},
  [185] = {.lex_state = 61},
  [186] = {.lex_state = 61},
  [187] = {.lex_state = 61},
  [188] = {.lex_state = 61},
  [189] = {.lex_state = 61},
  [190] = {.lex_state = 61},
  [191] = {.lex_state = 61},
  [192] = {.lex_state = 61},
  [193] = {.lex_state = 61},
  [194] = {.lex_state = 61},
  [195] = {.lex_state = 61},
  [196] = {.lex_state = 105},
  [197] = {.lex_state = 61},
  [198] = {.lex_state = 61},
  [199] = {.lex_state = 61},
  [200] = {.lex_state = 61},
  [201] = {.lex_state = 109},
  [202] = {.lex_state = 61},
  [203] = {.lex_state = 12},
  [204] = {.lex_state = 61},
  [205] = {.lex_state = 61},
  [206] = {.lex_state = 61},
  [207] = {.lex_state = 12},
  [208] = {.lex_state = 61},
  [209] = {.lex_state = 61},
  [210] = {.lex_state = 61},
  [211] = {.lex_state = 61},
  [212] = {.lex_state = 12},
  [213] = {.lex_state = 61},
  [214] = {.lex_state = 61},
  [215] = {.lex_state = 61},
  [216] = {.lex_state = 61},
  [217] = {.lex_state = 61},
  [218] = {.lex_state = 12},
  [219] = {.lex_state = 61},
  [220] = {.lex_state = 61},
  [221] = {.lex_state = 61},
  [222] = {.lex_state = 61},
  [223] = {.lex_state = 61},
  [224] = {.lex_state = 61},
  [225] = {.lex_state = 61},
  [226] = {.lex_state = 61},
  [227] = {.lex_state = 114},
  [228] = {.lex_state = 61},
  [229] = {.lex_state = 61},
  [230] = {.lex_state = 61},
  [231] = {.lex_state = 61},
  [232] = {.lex_state = 61},
  [233] = {.lex_state = 12},
  [234] = {.lex_state = 61},
  [235] = {.lex_state = 61},
  [236] = {.lex_state = 61},
  [237] = {.lex_state = 61},
  [238] = {.lex_state = 61},
  [239] = {.lex_state = 61},
  [240] = {.lex_state = 61},
  [241] = {.lex_state = 61},
  [242] = {.lex_state = 59},
  [243] = {.lex_state = 61},
  [244] = {.lex_state = 61},
  [245] = {.lex_state = 61},
  [246] = {.lex_state = 61},
  [247] = {.lex_state = 61},
  [248] = {.lex_state = 61},
  [249] = {.lex_state = 61},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 61},
  [252] = {.lex_state = 61},
  [253] = {.lex_state = 61},
  [254] = {.lex_state = 61},
  [255] = {.lex_state = 61},
  [256] = {.lex_state = 61},
  [257] = {.lex_state = 61},
  [258] = {.lex_state = 61},
  [259] = {.lex_state = 61},
  [260] = {.lex_state = 61},
  [261] = {.lex_state = 61},
  [262] = {.lex_state = 61},
  [263] = {.lex_state = 61},
  [264] = {.lex_state = 61},
  [265] = {.lex_state = 61},
  [266] = {.lex_state = 61},
  [267] = {.lex_state = 59},
  [268] = {.lex_state = 61},
  [269] = {.lex_state = 61},
  [270] = {.lex_state = 61},
  [271] = {.lex_state = 59},
  [272] = {.lex_state = 61},
  [273] = {.lex_state = 61},
  [274] = {.lex_state = 59},
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
  },
  [1] = {
    [sym_document] = STATE(250),
    [sym__markupdecl] = STATE(92),
    [sym_elementdecl] = STATE(135),
    [sym_AttlistDecl] = STATE(135),
    [sym__EntityDecl] = STATE(135),
    [sym_GEDecl] = STATE(137),
    [sym_PEDecl] = STATE(137),
    [sym_NotationDecl] = STATE(135),
    [sym_PI] = STATE(135),
    [aux_sym_document_repeat1] = STATE(3),
    [anon_sym_LT_BANGELEMENT] = ACTIONS(3),
    [anon_sym_LT_BANGATTLIST] = ACTIONS(5),
    [anon_sym_LT_BANGENTITY] = ACTIONS(7),
    [anon_sym_LT_BANGNOTATION] = ACTIONS(9),
    [sym__S] = ACTIONS(11),
    [anon_sym_LT_QMARK] = ACTIONS(13),
    [sym_Comment] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(22), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(25), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(28), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(31), 1,
      sym__S,
    ACTIONS(34), 1,
      anon_sym_LT_QMARK,
    ACTIONS(37), 1,
      sym_Comment,
    STATE(2), 1,
      aux_sym_document_repeat1,
    STATE(92), 1,
      sym__markupdecl,
    STATE(137), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(135), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [42] = 12,
    ACTIONS(3), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(5), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(7), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(9), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(11), 1,
      sym__S,
    ACTIONS(13), 1,
      anon_sym_LT_QMARK,
    ACTIONS(15), 1,
      sym_Comment,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_document_repeat1,
    STATE(92), 1,
      sym__markupdecl,
    STATE(137), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(135), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [84] = 1,
    ACTIONS(42), 17,
      ts_builtin_sym_end,
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
  [104] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(5), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(7), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(9), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(13), 1,
      anon_sym_LT_QMARK,
    ACTIONS(15), 1,
      sym_Comment,
    STATE(86), 1,
      sym__markupdecl,
    STATE(137), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(135), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [137] = 8,
    ACTIONS(44), 1,
      anon_sym_PERCENT,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(52), 1,
      anon_sym_AMP,
    ACTIONS(55), 1,
      anon_sym_AMP_POUND,
    ACTIONS(58), 1,
      anon_sym_AMP_POUNDx,
    STATE(58), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(6), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [165] = 8,
    ACTIONS(61), 1,
      anon_sym_PERCENT,
    ACTIONS(64), 1,
      anon_sym_SQUOTE,
    ACTIONS(66), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(69), 1,
      anon_sym_AMP,
    ACTIONS(72), 1,
      anon_sym_AMP_POUND,
    ACTIONS(75), 1,
      anon_sym_AMP_POUNDx,
    STATE(48), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(7), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [193] = 8,
    ACTIONS(78), 1,
      anon_sym_PERCENT,
    ACTIONS(80), 1,
      anon_sym_SQUOTE,
    ACTIONS(82), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(84), 1,
      anon_sym_AMP,
    ACTIONS(86), 1,
      anon_sym_AMP_POUND,
    ACTIONS(88), 1,
      anon_sym_AMP_POUNDx,
    STATE(48), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(7), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [221] = 8,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_PERCENT,
    ACTIONS(92), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(94), 1,
      anon_sym_AMP,
    ACTIONS(96), 1,
      anon_sym_AMP_POUND,
    ACTIONS(98), 1,
      anon_sym_AMP_POUNDx,
    STATE(58), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(6), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [249] = 8,
    ACTIONS(78), 1,
      anon_sym_PERCENT,
    ACTIONS(84), 1,
      anon_sym_AMP,
    ACTIONS(86), 1,
      anon_sym_AMP_POUND,
    ACTIONS(88), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(102), 1,
      aux_sym_EntityValue_token2,
    STATE(48), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(8), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [277] = 8,
    ACTIONS(90), 1,
      anon_sym_PERCENT,
    ACTIONS(94), 1,
      anon_sym_AMP,
    ACTIONS(96), 1,
      anon_sym_AMP_POUND,
    ACTIONS(98), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      aux_sym_EntityValue_token1,
    STATE(58), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(9), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [305] = 7,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_NOTATION,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    STATE(179), 1,
      sym__AttType,
    ACTIONS(108), 2,
      sym_StringType,
      sym_TokenizedType,
    STATE(162), 2,
      sym__EnumeratedType,
      sym_PEReference,
    STATE(187), 2,
      sym_NotationType,
      sym_Enumeration,
  [330] = 6,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(116), 1,
      anon_sym_LPAREN,
    STATE(167), 1,
      sym_contentspec,
    ACTIONS(114), 2,
      anon_sym_EMPTY,
      anon_sym_ANY,
    STATE(67), 2,
      sym__choice,
      sym__seq,
    STATE(188), 3,
      sym_Mixed,
      sym_children,
      sym_PEReference,
  [353] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_AMP,
    ACTIONS(122), 1,
      anon_sym_AMP_POUND,
    ACTIONS(124), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(126), 1,
      aux_sym_AttValue_token1,
    STATE(18), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(62), 2,
      sym_EntityRef,
      sym_CharRef,
  [377] = 7,
    ACTIONS(128), 1,
      anon_sym_SQUOTE,
    ACTIONS(130), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_AMP_POUND,
    ACTIONS(136), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(139), 1,
      aux_sym_AttValue_token2,
    STATE(15), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(64), 2,
      sym_EntityRef,
      sym_CharRef,
  [401] = 7,
    ACTIONS(142), 1,
      anon_sym_DQUOTE,
    ACTIONS(144), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_AMP_POUND,
    ACTIONS(150), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(153), 1,
      aux_sym_AttValue_token1,
    STATE(16), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(62), 2,
      sym_EntityRef,
      sym_CharRef,
  [425] = 7,
    ACTIONS(156), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_AMP,
    ACTIONS(160), 1,
      anon_sym_AMP_POUND,
    ACTIONS(162), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(164), 1,
      aux_sym_AttValue_token2,
    STATE(15), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(64), 2,
      sym_EntityRef,
      sym_CharRef,
  [449] = 7,
    ACTIONS(120), 1,
      anon_sym_AMP,
    ACTIONS(122), 1,
      anon_sym_AMP_POUND,
    ACTIONS(124), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(166), 1,
      aux_sym_AttValue_token1,
    STATE(16), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(62), 2,
      sym_EntityRef,
      sym_CharRef,
  [473] = 7,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_AMP,
    ACTIONS(160), 1,
      anon_sym_AMP_POUND,
    ACTIONS(162), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(168), 1,
      aux_sym_AttValue_token2,
    STATE(17), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(64), 2,
      sym_EntityRef,
      sym_CharRef,
  [497] = 8,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(170), 1,
      sym_Name,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_POUNDPCDATA,
    ACTIONS(176), 1,
      sym__S,
    STATE(35), 1,
      sym_PEReference,
    STATE(56), 1,
      sym__cp,
    STATE(37), 2,
      sym__choice,
      sym__seq,
  [523] = 6,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(170), 1,
      sym_Name,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      sym__S,
    STATE(117), 1,
      sym__cp,
    STATE(37), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [544] = 1,
    ACTIONS(180), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PLUS,
      sym__S,
  [555] = 6,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(170), 1,
      sym_Name,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      sym__S,
    STATE(130), 1,
      sym__cp,
    STATE(37), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [576] = 6,
    ACTIONS(184), 1,
      anon_sym_PIPE,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      sym__S,
    STATE(69), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(188), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [597] = 1,
    ACTIONS(194), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PLUS,
      sym__S,
  [608] = 6,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(170), 1,
      sym_Name,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      sym__S,
    STATE(100), 1,
      sym__cp,
    STATE(37), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [629] = 1,
    ACTIONS(198), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PLUS,
      sym__S,
  [640] = 1,
    ACTIONS(200), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PLUS,
      sym__S,
  [651] = 7,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(170), 1,
      sym_Name,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_POUNDPCDATA,
    STATE(24), 1,
      sym_PEReference,
    STATE(51), 1,
      sym__cp,
    STATE(37), 2,
      sym__choice,
      sym__seq,
  [674] = 1,
    ACTIONS(17), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [685] = 6,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(170), 1,
      sym_Name,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym__S,
    STATE(118), 1,
      sym__cp,
    STATE(37), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [706] = 6,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(170), 1,
      sym_Name,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      sym__S,
    STATE(56), 1,
      sym__cp,
    STATE(37), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [727] = 1,
    ACTIONS(208), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PLUS,
      sym__S,
  [738] = 1,
    ACTIONS(210), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [749] = 6,
    ACTIONS(184), 1,
      anon_sym_PIPE,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    ACTIONS(214), 1,
      sym__S,
    STATE(93), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(188), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [770] = 6,
    ACTIONS(218), 1,
      anon_sym_POUNDFIXED,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      anon_sym_SQUOTE,
    STATE(186), 1,
      sym_AttValue,
    STATE(190), 1,
      sym_DefaultDecl,
    ACTIONS(216), 2,
      anon_sym_POUNDREQUIRED,
      anon_sym_POUNDIMPLIED,
  [790] = 2,
    ACTIONS(188), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
    ACTIONS(190), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [802] = 5,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(170), 1,
      sym_Name,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    STATE(117), 1,
      sym__cp,
    STATE(37), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [820] = 5,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(170), 1,
      sym_Name,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    STATE(112), 1,
      sym__cp,
    STATE(37), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [838] = 5,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(170), 1,
      sym_Name,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym__cp,
    STATE(37), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [856] = 5,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(170), 1,
      sym_Name,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    STATE(118), 1,
      sym__cp,
    STATE(37), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [874] = 5,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(170), 1,
      sym_Name,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    STATE(51), 1,
      sym__cp,
    STATE(37), 3,
      sym__choice,
      sym__seq,
      sym_PEReference,
  [892] = 5,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(224), 1,
      anon_sym_SYSTEM,
    ACTIONS(226), 1,
      anon_sym_PUBLIC,
    STATE(216), 1,
      sym_PEReference,
    STATE(175), 2,
      sym_ExternalID,
      sym_PublicID,
  [909] = 6,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(228), 1,
      sym_Name,
    ACTIONS(230), 1,
      anon_sym_PIPE,
    ACTIONS(232), 1,
      sym__S,
    STATE(63), 1,
      aux_sym_NotationType_repeat1,
    STATE(152), 1,
      sym_PEReference,
  [928] = 6,
    ACTIONS(224), 1,
      anon_sym_SYSTEM,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(238), 1,
      anon_sym_PUBLIC,
    STATE(116), 1,
      sym_ExternalID,
    STATE(184), 1,
      sym_EntityValue,
  [947] = 2,
    ACTIONS(242), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(240), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [958] = 6,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(230), 1,
      anon_sym_PIPE,
    ACTIONS(232), 1,
      sym__S,
    ACTIONS(244), 1,
      sym_Name,
    STATE(49), 1,
      aux_sym_NotationType_repeat1,
    STATE(169), 1,
      sym_PEReference,
  [977] = 2,
    ACTIONS(248), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(246), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [988] = 6,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(230), 1,
      anon_sym_PIPE,
    ACTIONS(232), 1,
      sym__S,
    ACTIONS(250), 1,
      sym_Name,
    STATE(63), 1,
      aux_sym_NotationType_repeat1,
    STATE(157), 1,
      sym_PEReference,
  [1007] = 2,
    ACTIONS(252), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(42), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1018] = 6,
    ACTIONS(254), 1,
      anon_sym_PIPE,
    ACTIONS(256), 1,
      anon_sym_RPAREN,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(260), 1,
      sym__S,
    STATE(80), 1,
      aux_sym__seq_repeat1,
    STATE(81), 1,
      aux_sym__choice_repeat1,
  [1037] = 5,
    ACTIONS(224), 1,
      anon_sym_SYSTEM,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(238), 1,
      anon_sym_PUBLIC,
    STATE(189), 2,
      sym_EntityValue,
      sym_ExternalID,
  [1054] = 2,
    ACTIONS(264), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(262), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1065] = 6,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(230), 1,
      anon_sym_PIPE,
    ACTIONS(232), 1,
      sym__S,
    ACTIONS(250), 1,
      sym_Name,
    STATE(44), 1,
      aux_sym_NotationType_repeat1,
    STATE(157), 1,
      sym_PEReference,
  [1084] = 2,
    ACTIONS(252), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(42), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1095] = 6,
    ACTIONS(254), 1,
      anon_sym_PIPE,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(260), 1,
      sym__S,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      aux_sym__choice_repeat1,
    STATE(91), 1,
      aux_sym__seq_repeat1,
  [1114] = 2,
    ACTIONS(264), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(262), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1125] = 2,
    ACTIONS(248), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(246), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1136] = 2,
    ACTIONS(242), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(240), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1147] = 2,
    ACTIONS(264), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(262), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [1157] = 2,
    ACTIONS(242), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(240), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [1167] = 2,
    ACTIONS(248), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(246), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [1177] = 4,
    ACTIONS(270), 1,
      anon_sym_PIPE,
    ACTIONS(273), 1,
      sym__S,
    STATE(63), 1,
      aux_sym_NotationType_repeat1,
    ACTIONS(268), 2,
      anon_sym_PERCENT,
      sym_Name,
  [1191] = 2,
    ACTIONS(248), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(246), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [1201] = 2,
    ACTIONS(242), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(240), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [1211] = 2,
    ACTIONS(264), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(262), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [1221] = 2,
    ACTIONS(276), 2,
      anon_sym_GT,
      sym__S,
    ACTIONS(278), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [1231] = 4,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      sym__S,
    STATE(68), 1,
      aux_sym__seq_repeat1,
  [1244] = 4,
    ACTIONS(184), 1,
      anon_sym_PIPE,
    ACTIONS(288), 1,
      anon_sym_RPAREN,
    ACTIONS(290), 1,
      sym__S,
    STATE(84), 1,
      aux_sym_Mixed_repeat1,
  [1257] = 4,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    ACTIONS(294), 1,
      anon_sym_RPAREN,
    ACTIONS(296), 1,
      sym__S,
    STATE(82), 1,
      aux_sym_Enumeration_repeat1,
  [1270] = 3,
    ACTIONS(298), 1,
      anon_sym_GT,
    ACTIONS(300), 1,
      sym__S,
    STATE(95), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [1281] = 4,
    ACTIONS(302), 1,
      anon_sym_PIPE,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    ACTIONS(307), 1,
      sym__S,
    STATE(72), 1,
      aux_sym__choice_repeat1,
  [1294] = 4,
    ACTIONS(310), 1,
      anon_sym_PIPE,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    ACTIONS(315), 1,
      sym__S,
    STATE(73), 1,
      aux_sym_Enumeration_repeat1,
  [1307] = 3,
    ACTIONS(318), 1,
      anon_sym_GT,
    ACTIONS(320), 1,
      sym__S,
    STATE(71), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [1318] = 1,
    ACTIONS(268), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [1325] = 4,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(298), 1,
      anon_sym_GT,
    ACTIONS(322), 1,
      sym_Name,
    STATE(204), 1,
      sym_PEReference,
  [1338] = 4,
    ACTIONS(184), 1,
      anon_sym_PIPE,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    ACTIONS(214), 1,
      sym__S,
    STATE(93), 1,
      aux_sym_Mixed_repeat1,
  [1351] = 4,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    ACTIONS(326), 1,
      sym__S,
    STATE(98), 1,
      aux_sym_Enumeration_repeat1,
  [1364] = 2,
    ACTIONS(328), 1,
      sym__S,
    ACTIONS(268), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [1373] = 4,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    ACTIONS(333), 1,
      sym__S,
    STATE(68), 1,
      aux_sym__seq_repeat1,
  [1386] = 4,
    ACTIONS(254), 1,
      anon_sym_PIPE,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    ACTIONS(337), 1,
      sym__S,
    STATE(72), 1,
      aux_sym__choice_repeat1,
  [1399] = 4,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    ACTIONS(326), 1,
      sym__S,
    STATE(73), 1,
      aux_sym_Enumeration_repeat1,
  [1412] = 2,
    ACTIONS(341), 1,
      sym__S,
    ACTIONS(339), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [1421] = 4,
    ACTIONS(344), 1,
      anon_sym_PIPE,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
    ACTIONS(349), 1,
      sym__S,
    STATE(84), 1,
      aux_sym_Mixed_repeat1,
  [1434] = 4,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(352), 1,
      sym_Name,
    ACTIONS(354), 1,
      sym__S,
    STATE(124), 1,
      sym_PEReference,
  [1447] = 3,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(356), 1,
      sym__S,
    STATE(34), 2,
      sym__DeclSep,
      sym_PEReference,
  [1458] = 4,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(358), 1,
      sym_Name,
    ACTIONS(360), 1,
      sym__S,
    STATE(47), 1,
      sym_PEReference,
  [1471] = 4,
    ACTIONS(254), 1,
      anon_sym_PIPE,
    ACTIONS(337), 1,
      sym__S,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      aux_sym__choice_repeat1,
  [1484] = 1,
    ACTIONS(364), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [1491] = 4,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(366), 1,
      sym_Name,
    ACTIONS(368), 1,
      sym__S,
    STATE(129), 1,
      sym_PEReference,
  [1504] = 4,
    ACTIONS(256), 1,
      anon_sym_RPAREN,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(333), 1,
      sym__S,
    STATE(68), 1,
      aux_sym__seq_repeat1,
  [1517] = 3,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(370), 1,
      sym__S,
    STATE(30), 2,
      sym__DeclSep,
      sym_PEReference,
  [1528] = 4,
    ACTIONS(184), 1,
      anon_sym_PIPE,
    ACTIONS(290), 1,
      sym__S,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_Mixed_repeat1,
  [1541] = 4,
    ACTIONS(184), 1,
      anon_sym_PIPE,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    ACTIONS(192), 1,
      sym__S,
    STATE(69), 1,
      aux_sym_Mixed_repeat1,
  [1554] = 3,
    ACTIONS(374), 1,
      anon_sym_GT,
    ACTIONS(376), 1,
      sym__S,
    STATE(95), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [1565] = 4,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(322), 1,
      sym_Name,
    ACTIONS(379), 1,
      anon_sym_GT,
    STATE(204), 1,
      sym_PEReference,
  [1578] = 1,
    ACTIONS(381), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1585] = 4,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    ACTIONS(385), 1,
      sym__S,
    STATE(73), 1,
      aux_sym_Enumeration_repeat1,
  [1598] = 1,
    ACTIONS(313), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [1604] = 1,
    ACTIONS(280), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1610] = 3,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(387), 1,
      sym_Name,
    STATE(234), 1,
      sym_PEReference,
  [1620] = 3,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(389), 1,
      sym_Name,
    STATE(74), 1,
      sym_PEReference,
  [1630] = 2,
    ACTIONS(393), 1,
      anon_sym_STAR,
    ACTIONS(391), 2,
      anon_sym_GT,
      sym__S,
  [1638] = 3,
    ACTIONS(395), 1,
      sym_Name,
    ACTIONS(397), 1,
      anon_sym_PERCENT,
    STATE(232), 1,
      sym_PEReference,
  [1648] = 3,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(399), 1,
      sym_Name,
    STATE(228), 1,
      sym_PEReference,
  [1658] = 1,
    ACTIONS(401), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [1664] = 3,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 1,
      anon_sym_SQUOTE,
    STATE(140), 1,
      sym_PubidLiteral,
  [1674] = 1,
    ACTIONS(407), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [1680] = 1,
    ACTIONS(409), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [1686] = 3,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      anon_sym_SQUOTE,
    STATE(166), 1,
      sym_AttValue,
  [1696] = 3,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(411), 1,
      sym_Name,
    STATE(54), 1,
      sym_PEReference,
  [1706] = 1,
    ACTIONS(413), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1712] = 1,
    ACTIONS(415), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [1718] = 2,
    ACTIONS(419), 1,
      sym__S,
    ACTIONS(417), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [1726] = 1,
    ACTIONS(417), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [1732] = 3,
    ACTIONS(422), 1,
      anon_sym_GT,
    ACTIONS(424), 1,
      sym__S,
    STATE(147), 1,
      sym_NDataDecl,
  [1742] = 1,
    ACTIONS(426), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1748] = 1,
    ACTIONS(428), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [1754] = 3,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(322), 1,
      sym_Name,
    STATE(204), 1,
      sym_PEReference,
  [1764] = 3,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 1,
      anon_sym_SQUOTE,
    STATE(139), 1,
      sym_PubidLiteral,
  [1774] = 2,
    ACTIONS(432), 1,
      anon_sym_STAR,
    ACTIONS(430), 2,
      anon_sym_GT,
      sym__S,
  [1782] = 3,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(434), 1,
      sym_Name,
    STATE(195), 1,
      sym_PEReference,
  [1792] = 3,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(436), 1,
      sym_Name,
    STATE(114), 1,
      sym_PEReference,
  [1802] = 2,
    ACTIONS(440), 1,
      sym__S,
    ACTIONS(438), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [1810] = 1,
    ACTIONS(438), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [1816] = 3,
    ACTIONS(443), 1,
      anon_sym_DQUOTE,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    STATE(194), 1,
      sym_SystemLiteral,
  [1826] = 3,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 1,
      anon_sym_SQUOTE,
    STATE(208), 1,
      sym_PubidLiteral,
  [1836] = 3,
    ACTIONS(112), 1,
      anon_sym_PERCENT,
    ACTIONS(352), 1,
      sym_Name,
    STATE(124), 1,
      sym_PEReference,
  [1846] = 2,
    ACTIONS(447), 1,
      sym__S,
    ACTIONS(347), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [1854] = 1,
    ACTIONS(305), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [1860] = 3,
    ACTIONS(443), 1,
      anon_sym_DQUOTE,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    STATE(177), 1,
      sym_SystemLiteral,
  [1870] = 1,
    ACTIONS(450), 2,
      anon_sym_GT,
      sym__S,
  [1875] = 1,
    ACTIONS(452), 2,
      anon_sym_PERCENT,
      sym__S,
  [1880] = 2,
    ACTIONS(454), 1,
      anon_sym_SQUOTE,
    ACTIONS(456), 1,
      aux_sym_PubidLiteral_token2,
  [1887] = 1,
    ACTIONS(458), 2,
      anon_sym_PERCENT,
      sym__S,
  [1892] = 1,
    ACTIONS(460), 2,
      anon_sym_PERCENT,
      sym__S,
  [1897] = 1,
    ACTIONS(462), 2,
      anon_sym_PERCENT,
      sym__S,
  [1902] = 2,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    ACTIONS(464), 1,
      anon_sym_PIPE,
  [1909] = 2,
    ACTIONS(466), 1,
      anon_sym_GT,
    ACTIONS(468), 1,
      sym__S,
  [1916] = 1,
    ACTIONS(466), 2,
      anon_sym_GT,
      sym__S,
  [1921] = 1,
    ACTIONS(470), 2,
      anon_sym_PERCENT,
      sym__S,
  [1926] = 1,
    ACTIONS(430), 2,
      anon_sym_GT,
      sym__S,
  [1931] = 2,
    ACTIONS(472), 1,
      anon_sym_PIPE,
    ACTIONS(474), 1,
      anon_sym_COMMA,
  [1938] = 1,
    ACTIONS(476), 2,
      anon_sym_PERCENT,
      sym__S,
  [1943] = 1,
    ACTIONS(478), 2,
      anon_sym_GT,
      sym__S,
  [1948] = 2,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    ACTIONS(464), 1,
      anon_sym_PIPE,
  [1955] = 2,
    ACTIONS(480), 1,
      anon_sym_GT,
    ACTIONS(482), 1,
      sym__S,
  [1962] = 2,
    ACTIONS(480), 1,
      anon_sym_GT,
    ACTIONS(484), 1,
      anon_sym_NDATA,
  [1969] = 1,
    ACTIONS(486), 2,
      anon_sym_GT,
      sym__S,
  [1974] = 1,
    ACTIONS(488), 2,
      anon_sym_PERCENT,
      sym__S,
  [1979] = 2,
    ACTIONS(490), 1,
      sym__S,
    ACTIONS(492), 1,
      anon_sym_QMARK_GT,
  [1986] = 2,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    ACTIONS(496), 1,
      sym__S,
  [1993] = 1,
    ACTIONS(498), 2,
      anon_sym_GT,
      sym__S,
  [1998] = 1,
    ACTIONS(500), 2,
      anon_sym_GT,
      sym__S,
  [2003] = 1,
    ACTIONS(502), 2,
      anon_sym_GT,
      sym__S,
  [2008] = 2,
    ACTIONS(504), 1,
      sym_Name,
    ACTIONS(506), 1,
      sym__S,
  [2015] = 2,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
    ACTIONS(510), 1,
      sym__S,
  [2022] = 1,
    ACTIONS(512), 2,
      anon_sym_PERCENT,
      sym__S,
  [2027] = 2,
    ACTIONS(514), 1,
      sym__S,
    ACTIONS(516), 1,
      sym_Nmtoken,
  [2034] = 1,
    ACTIONS(518), 2,
      anon_sym_GT,
      sym__S,
  [2039] = 1,
    ACTIONS(520), 2,
      anon_sym_PERCENT,
      sym__S,
  [2044] = 1,
    ACTIONS(522), 2,
      anon_sym_GT,
      sym__S,
  [2049] = 1,
    ACTIONS(524), 2,
      anon_sym_GT,
      sym__S,
  [2054] = 1,
    ACTIONS(526), 2,
      anon_sym_PERCENT,
      sym__S,
  [2059] = 1,
    ACTIONS(528), 2,
      anon_sym_GT,
      sym__S,
  [2064] = 1,
    ACTIONS(530), 2,
      anon_sym_GT,
      sym__S,
  [2069] = 2,
    ACTIONS(532), 1,
      anon_sym_GT,
    ACTIONS(534), 1,
      sym__S,
  [2076] = 1,
    ACTIONS(536), 2,
      anon_sym_GT,
      sym__S,
  [2081] = 2,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    ACTIONS(540), 1,
      sym__S,
  [2088] = 1,
    ACTIONS(542), 2,
      anon_sym_PERCENT,
      sym__S,
  [2093] = 1,
    ACTIONS(544), 2,
      anon_sym_PERCENT,
      sym__S,
  [2098] = 1,
    ACTIONS(546), 2,
      anon_sym_GT,
      sym__S,
  [2103] = 2,
    ACTIONS(548), 1,
      anon_sym_PIPE,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
  [2110] = 1,
    ACTIONS(552), 2,
      anon_sym_PERCENT,
      sym__S,
  [2115] = 2,
    ACTIONS(554), 1,
      anon_sym_GT,
    ACTIONS(556), 1,
      sym__S,
  [2122] = 1,
    ACTIONS(558), 2,
      anon_sym_PERCENT,
      sym__S,
  [2127] = 1,
    ACTIONS(560), 2,
      anon_sym_GT,
      sym__S,
  [2132] = 1,
    ACTIONS(562), 2,
      anon_sym_GT,
      sym__S,
  [2137] = 2,
    ACTIONS(564), 1,
      anon_sym_GT,
    ACTIONS(566), 1,
      sym__S,
  [2144] = 2,
    ACTIONS(568), 1,
      anon_sym_SQUOTE,
    ACTIONS(570), 1,
      aux_sym_SystemLiteral_token2,
  [2151] = 2,
    ACTIONS(572), 1,
      sym__S,
    ACTIONS(574), 1,
      sym_Nmtoken,
  [2158] = 1,
    ACTIONS(576), 2,
      anon_sym_GT,
      sym__S,
  [2163] = 2,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    ACTIONS(548), 1,
      anon_sym_PIPE,
  [2170] = 2,
    ACTIONS(422), 1,
      anon_sym_GT,
    ACTIONS(578), 1,
      sym__S,
  [2177] = 1,
    ACTIONS(580), 2,
      anon_sym_GT,
      sym__S,
  [2182] = 1,
    ACTIONS(582), 2,
      anon_sym_GT,
      sym__S,
  [2187] = 1,
    ACTIONS(584), 2,
      anon_sym_GT,
      sym__S,
  [2192] = 1,
    ACTIONS(586), 2,
      anon_sym_GT,
      sym__S,
  [2197] = 2,
    ACTIONS(588), 1,
      anon_sym_GT,
    ACTIONS(590), 1,
      sym__S,
  [2204] = 1,
    ACTIONS(592), 2,
      anon_sym_GT,
      sym__S,
  [2209] = 1,
    ACTIONS(594), 2,
      anon_sym_PERCENT,
      sym__S,
  [2214] = 1,
    ACTIONS(596), 2,
      anon_sym_GT,
      sym__S,
  [2219] = 1,
    ACTIONS(598), 2,
      anon_sym_GT,
      sym__S,
  [2224] = 1,
    ACTIONS(600), 2,
      anon_sym_GT,
      sym__S,
  [2229] = 1,
    ACTIONS(602), 2,
      anon_sym_GT,
      sym__S,
  [2234] = 2,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
    ACTIONS(604), 1,
      aux_sym_SystemLiteral_token1,
  [2241] = 1,
    ACTIONS(606), 2,
      anon_sym_GT,
      sym__S,
  [2246] = 1,
    ACTIONS(608), 2,
      anon_sym_GT,
      sym__S,
  [2251] = 1,
    ACTIONS(610), 2,
      anon_sym_GT,
      sym__S,
  [2256] = 2,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    ACTIONS(548), 1,
      anon_sym_PIPE,
  [2263] = 2,
    ACTIONS(454), 1,
      anon_sym_DQUOTE,
    ACTIONS(612), 1,
      aux_sym_PubidLiteral_token1,
  [2270] = 1,
    ACTIONS(614), 2,
      anon_sym_PERCENT,
      sym__S,
  [2275] = 2,
    ACTIONS(616), 1,
      sym__S,
    ACTIONS(618), 1,
      sym_Nmtoken,
  [2282] = 1,
    ACTIONS(620), 1,
      sym__S,
  [2286] = 1,
    ACTIONS(622), 1,
      anon_sym_SEMI,
  [2290] = 1,
    ACTIONS(624), 1,
      anon_sym_SEMI,
  [2294] = 1,
    ACTIONS(618), 1,
      sym_Nmtoken,
  [2298] = 1,
    ACTIONS(468), 1,
      sym__S,
  [2302] = 1,
    ACTIONS(626), 1,
      sym__S,
  [2306] = 1,
    ACTIONS(628), 1,
      sym__S,
  [2310] = 1,
    ACTIONS(630), 1,
      sym__S,
  [2314] = 1,
    ACTIONS(632), 1,
      anon_sym_QMARK_GT,
  [2318] = 1,
    ACTIONS(634), 1,
      sym_Name,
  [2322] = 1,
    ACTIONS(636), 1,
      sym__S,
  [2326] = 1,
    ACTIONS(638), 1,
      sym__S,
  [2330] = 1,
    ACTIONS(640), 1,
      sym__S,
  [2334] = 1,
    ACTIONS(642), 1,
      sym__S,
  [2338] = 1,
    ACTIONS(644), 1,
      sym_Nmtoken,
  [2342] = 1,
    ACTIONS(548), 1,
      anon_sym_PIPE,
  [2346] = 1,
    ACTIONS(646), 1,
      anon_sym_STAR,
  [2350] = 1,
    ACTIONS(648), 1,
      anon_sym_SEMI,
  [2354] = 1,
    ACTIONS(650), 1,
      anon_sym_PIPE,
  [2358] = 1,
    ACTIONS(652), 1,
      anon_sym_SQUOTE,
  [2362] = 1,
    ACTIONS(652), 1,
      anon_sym_DQUOTE,
  [2366] = 1,
    ACTIONS(654), 1,
      anon_sym_SQUOTE,
  [2370] = 1,
    ACTIONS(654), 1,
      anon_sym_DQUOTE,
  [2374] = 1,
    ACTIONS(656), 1,
      aux_sym_PI_token1,
  [2378] = 1,
    ACTIONS(658), 1,
      sym__S,
  [2382] = 1,
    ACTIONS(660), 1,
      anon_sym_GT,
  [2386] = 1,
    ACTIONS(662), 1,
      anon_sym_GT,
  [2390] = 1,
    ACTIONS(664), 1,
      anon_sym_LPAREN,
  [2394] = 1,
    ACTIONS(666), 1,
      sym__S,
  [2398] = 1,
    ACTIONS(668), 1,
      sym_Nmtoken,
  [2402] = 1,
    ACTIONS(670), 1,
      sym__S,
  [2406] = 1,
    ACTIONS(474), 1,
      anon_sym_COMMA,
  [2410] = 1,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
  [2414] = 1,
    ACTIONS(504), 1,
      sym_Name,
  [2418] = 1,
    ACTIONS(472), 1,
      anon_sym_PIPE,
  [2422] = 1,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
  [2426] = 1,
    ACTIONS(672), 1,
      sym_Name,
  [2430] = 1,
    ACTIONS(674), 1,
      aux_sym_CharRef_token1,
  [2434] = 1,
    ACTIONS(674), 1,
      aux_sym_CharRef_token2,
  [2438] = 1,
    ACTIONS(676), 1,
      anon_sym_RPAREN,
  [2442] = 1,
    ACTIONS(480), 1,
      anon_sym_GT,
  [2446] = 1,
    ACTIONS(464), 1,
      anon_sym_PIPE,
  [2450] = 1,
    ACTIONS(432), 1,
      anon_sym_STAR,
  [2454] = 1,
    ACTIONS(678), 1,
      sym__S,
  [2458] = 1,
    ACTIONS(680), 1,
      anon_sym_GT,
  [2462] = 1,
    ACTIONS(682), 1,
      anon_sym_GT,
  [2466] = 1,
    ACTIONS(684), 1,
      ts_builtin_sym_end,
  [2470] = 1,
    ACTIONS(686), 1,
      sym__S,
  [2474] = 1,
    ACTIONS(688), 1,
      sym_Name,
  [2478] = 1,
    ACTIONS(690), 1,
      sym__S,
  [2482] = 1,
    ACTIONS(692), 1,
      sym__S,
  [2486] = 1,
    ACTIONS(694), 1,
      sym__S,
  [2490] = 1,
    ACTIONS(696), 1,
      anon_sym_SEMI,
  [2494] = 1,
    ACTIONS(698), 1,
      anon_sym_SEMI,
  [2498] = 1,
    ACTIONS(700), 1,
      anon_sym_SEMI,
  [2502] = 1,
    ACTIONS(702), 1,
      anon_sym_SEMI,
  [2506] = 1,
    ACTIONS(704), 1,
      anon_sym_SEMI,
  [2510] = 1,
    ACTIONS(706), 1,
      anon_sym_SEMI,
  [2514] = 1,
    ACTIONS(708), 1,
      anon_sym_SEMI,
  [2518] = 1,
    ACTIONS(710), 1,
      anon_sym_SEMI,
  [2522] = 1,
    ACTIONS(712), 1,
      sym_Name,
  [2526] = 1,
    ACTIONS(714), 1,
      sym_Name,
  [2530] = 1,
    ACTIONS(716), 1,
      aux_sym_CharRef_token1,
  [2534] = 1,
    ACTIONS(716), 1,
      aux_sym_CharRef_token2,
  [2538] = 1,
    ACTIONS(718), 1,
      sym_Name,
  [2542] = 1,
    ACTIONS(720), 1,
      sym_Name,
  [2546] = 1,
    ACTIONS(722), 1,
      aux_sym_CharRef_token1,
  [2550] = 1,
    ACTIONS(722), 1,
      aux_sym_CharRef_token2,
  [2554] = 1,
    ACTIONS(724), 1,
      sym_Name,
  [2558] = 1,
    ACTIONS(726), 1,
      aux_sym_CharRef_token1,
  [2562] = 1,
    ACTIONS(726), 1,
      aux_sym_CharRef_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 104,
  [SMALL_STATE(6)] = 137,
  [SMALL_STATE(7)] = 165,
  [SMALL_STATE(8)] = 193,
  [SMALL_STATE(9)] = 221,
  [SMALL_STATE(10)] = 249,
  [SMALL_STATE(11)] = 277,
  [SMALL_STATE(12)] = 305,
  [SMALL_STATE(13)] = 330,
  [SMALL_STATE(14)] = 353,
  [SMALL_STATE(15)] = 377,
  [SMALL_STATE(16)] = 401,
  [SMALL_STATE(17)] = 425,
  [SMALL_STATE(18)] = 449,
  [SMALL_STATE(19)] = 473,
  [SMALL_STATE(20)] = 497,
  [SMALL_STATE(21)] = 523,
  [SMALL_STATE(22)] = 544,
  [SMALL_STATE(23)] = 555,
  [SMALL_STATE(24)] = 576,
  [SMALL_STATE(25)] = 597,
  [SMALL_STATE(26)] = 608,
  [SMALL_STATE(27)] = 629,
  [SMALL_STATE(28)] = 640,
  [SMALL_STATE(29)] = 651,
  [SMALL_STATE(30)] = 674,
  [SMALL_STATE(31)] = 685,
  [SMALL_STATE(32)] = 706,
  [SMALL_STATE(33)] = 727,
  [SMALL_STATE(34)] = 738,
  [SMALL_STATE(35)] = 749,
  [SMALL_STATE(36)] = 770,
  [SMALL_STATE(37)] = 790,
  [SMALL_STATE(38)] = 802,
  [SMALL_STATE(39)] = 820,
  [SMALL_STATE(40)] = 838,
  [SMALL_STATE(41)] = 856,
  [SMALL_STATE(42)] = 874,
  [SMALL_STATE(43)] = 892,
  [SMALL_STATE(44)] = 909,
  [SMALL_STATE(45)] = 928,
  [SMALL_STATE(46)] = 947,
  [SMALL_STATE(47)] = 958,
  [SMALL_STATE(48)] = 977,
  [SMALL_STATE(49)] = 988,
  [SMALL_STATE(50)] = 1007,
  [SMALL_STATE(51)] = 1018,
  [SMALL_STATE(52)] = 1037,
  [SMALL_STATE(53)] = 1054,
  [SMALL_STATE(54)] = 1065,
  [SMALL_STATE(55)] = 1084,
  [SMALL_STATE(56)] = 1095,
  [SMALL_STATE(57)] = 1114,
  [SMALL_STATE(58)] = 1125,
  [SMALL_STATE(59)] = 1136,
  [SMALL_STATE(60)] = 1147,
  [SMALL_STATE(61)] = 1157,
  [SMALL_STATE(62)] = 1167,
  [SMALL_STATE(63)] = 1177,
  [SMALL_STATE(64)] = 1191,
  [SMALL_STATE(65)] = 1201,
  [SMALL_STATE(66)] = 1211,
  [SMALL_STATE(67)] = 1221,
  [SMALL_STATE(68)] = 1231,
  [SMALL_STATE(69)] = 1244,
  [SMALL_STATE(70)] = 1257,
  [SMALL_STATE(71)] = 1270,
  [SMALL_STATE(72)] = 1281,
  [SMALL_STATE(73)] = 1294,
  [SMALL_STATE(74)] = 1307,
  [SMALL_STATE(75)] = 1318,
  [SMALL_STATE(76)] = 1325,
  [SMALL_STATE(77)] = 1338,
  [SMALL_STATE(78)] = 1351,
  [SMALL_STATE(79)] = 1364,
  [SMALL_STATE(80)] = 1373,
  [SMALL_STATE(81)] = 1386,
  [SMALL_STATE(82)] = 1399,
  [SMALL_STATE(83)] = 1412,
  [SMALL_STATE(84)] = 1421,
  [SMALL_STATE(85)] = 1434,
  [SMALL_STATE(86)] = 1447,
  [SMALL_STATE(87)] = 1458,
  [SMALL_STATE(88)] = 1471,
  [SMALL_STATE(89)] = 1484,
  [SMALL_STATE(90)] = 1491,
  [SMALL_STATE(91)] = 1504,
  [SMALL_STATE(92)] = 1517,
  [SMALL_STATE(93)] = 1528,
  [SMALL_STATE(94)] = 1541,
  [SMALL_STATE(95)] = 1554,
  [SMALL_STATE(96)] = 1565,
  [SMALL_STATE(97)] = 1578,
  [SMALL_STATE(98)] = 1585,
  [SMALL_STATE(99)] = 1598,
  [SMALL_STATE(100)] = 1604,
  [SMALL_STATE(101)] = 1610,
  [SMALL_STATE(102)] = 1620,
  [SMALL_STATE(103)] = 1630,
  [SMALL_STATE(104)] = 1638,
  [SMALL_STATE(105)] = 1648,
  [SMALL_STATE(106)] = 1658,
  [SMALL_STATE(107)] = 1664,
  [SMALL_STATE(108)] = 1674,
  [SMALL_STATE(109)] = 1680,
  [SMALL_STATE(110)] = 1686,
  [SMALL_STATE(111)] = 1696,
  [SMALL_STATE(112)] = 1706,
  [SMALL_STATE(113)] = 1712,
  [SMALL_STATE(114)] = 1718,
  [SMALL_STATE(115)] = 1726,
  [SMALL_STATE(116)] = 1732,
  [SMALL_STATE(117)] = 1742,
  [SMALL_STATE(118)] = 1748,
  [SMALL_STATE(119)] = 1754,
  [SMALL_STATE(120)] = 1764,
  [SMALL_STATE(121)] = 1774,
  [SMALL_STATE(122)] = 1782,
  [SMALL_STATE(123)] = 1792,
  [SMALL_STATE(124)] = 1802,
  [SMALL_STATE(125)] = 1810,
  [SMALL_STATE(126)] = 1816,
  [SMALL_STATE(127)] = 1826,
  [SMALL_STATE(128)] = 1836,
  [SMALL_STATE(129)] = 1846,
  [SMALL_STATE(130)] = 1854,
  [SMALL_STATE(131)] = 1860,
  [SMALL_STATE(132)] = 1870,
  [SMALL_STATE(133)] = 1875,
  [SMALL_STATE(134)] = 1880,
  [SMALL_STATE(135)] = 1887,
  [SMALL_STATE(136)] = 1892,
  [SMALL_STATE(137)] = 1897,
  [SMALL_STATE(138)] = 1902,
  [SMALL_STATE(139)] = 1909,
  [SMALL_STATE(140)] = 1916,
  [SMALL_STATE(141)] = 1921,
  [SMALL_STATE(142)] = 1926,
  [SMALL_STATE(143)] = 1931,
  [SMALL_STATE(144)] = 1938,
  [SMALL_STATE(145)] = 1943,
  [SMALL_STATE(146)] = 1948,
  [SMALL_STATE(147)] = 1955,
  [SMALL_STATE(148)] = 1962,
  [SMALL_STATE(149)] = 1969,
  [SMALL_STATE(150)] = 1974,
  [SMALL_STATE(151)] = 1979,
  [SMALL_STATE(152)] = 1986,
  [SMALL_STATE(153)] = 1993,
  [SMALL_STATE(154)] = 1998,
  [SMALL_STATE(155)] = 2003,
  [SMALL_STATE(156)] = 2008,
  [SMALL_STATE(157)] = 2015,
  [SMALL_STATE(158)] = 2022,
  [SMALL_STATE(159)] = 2027,
  [SMALL_STATE(160)] = 2034,
  [SMALL_STATE(161)] = 2039,
  [SMALL_STATE(162)] = 2044,
  [SMALL_STATE(163)] = 2049,
  [SMALL_STATE(164)] = 2054,
  [SMALL_STATE(165)] = 2059,
  [SMALL_STATE(166)] = 2064,
  [SMALL_STATE(167)] = 2069,
  [SMALL_STATE(168)] = 2076,
  [SMALL_STATE(169)] = 2081,
  [SMALL_STATE(170)] = 2088,
  [SMALL_STATE(171)] = 2093,
  [SMALL_STATE(172)] = 2098,
  [SMALL_STATE(173)] = 2103,
  [SMALL_STATE(174)] = 2110,
  [SMALL_STATE(175)] = 2115,
  [SMALL_STATE(176)] = 2122,
  [SMALL_STATE(177)] = 2127,
  [SMALL_STATE(178)] = 2132,
  [SMALL_STATE(179)] = 2137,
  [SMALL_STATE(180)] = 2144,
  [SMALL_STATE(181)] = 2151,
  [SMALL_STATE(182)] = 2158,
  [SMALL_STATE(183)] = 2163,
  [SMALL_STATE(184)] = 2170,
  [SMALL_STATE(185)] = 2177,
  [SMALL_STATE(186)] = 2182,
  [SMALL_STATE(187)] = 2187,
  [SMALL_STATE(188)] = 2192,
  [SMALL_STATE(189)] = 2197,
  [SMALL_STATE(190)] = 2204,
  [SMALL_STATE(191)] = 2209,
  [SMALL_STATE(192)] = 2214,
  [SMALL_STATE(193)] = 2219,
  [SMALL_STATE(194)] = 2224,
  [SMALL_STATE(195)] = 2229,
  [SMALL_STATE(196)] = 2234,
  [SMALL_STATE(197)] = 2241,
  [SMALL_STATE(198)] = 2246,
  [SMALL_STATE(199)] = 2251,
  [SMALL_STATE(200)] = 2256,
  [SMALL_STATE(201)] = 2263,
  [SMALL_STATE(202)] = 2270,
  [SMALL_STATE(203)] = 2275,
  [SMALL_STATE(204)] = 2282,
  [SMALL_STATE(205)] = 2286,
  [SMALL_STATE(206)] = 2290,
  [SMALL_STATE(207)] = 2294,
  [SMALL_STATE(208)] = 2298,
  [SMALL_STATE(209)] = 2302,
  [SMALL_STATE(210)] = 2306,
  [SMALL_STATE(211)] = 2310,
  [SMALL_STATE(212)] = 2314,
  [SMALL_STATE(213)] = 2318,
  [SMALL_STATE(214)] = 2322,
  [SMALL_STATE(215)] = 2326,
  [SMALL_STATE(216)] = 2330,
  [SMALL_STATE(217)] = 2334,
  [SMALL_STATE(218)] = 2338,
  [SMALL_STATE(219)] = 2342,
  [SMALL_STATE(220)] = 2346,
  [SMALL_STATE(221)] = 2350,
  [SMALL_STATE(222)] = 2354,
  [SMALL_STATE(223)] = 2358,
  [SMALL_STATE(224)] = 2362,
  [SMALL_STATE(225)] = 2366,
  [SMALL_STATE(226)] = 2370,
  [SMALL_STATE(227)] = 2374,
  [SMALL_STATE(228)] = 2378,
  [SMALL_STATE(229)] = 2382,
  [SMALL_STATE(230)] = 2386,
  [SMALL_STATE(231)] = 2390,
  [SMALL_STATE(232)] = 2394,
  [SMALL_STATE(233)] = 2398,
  [SMALL_STATE(234)] = 2402,
  [SMALL_STATE(235)] = 2406,
  [SMALL_STATE(236)] = 2410,
  [SMALL_STATE(237)] = 2414,
  [SMALL_STATE(238)] = 2418,
  [SMALL_STATE(239)] = 2422,
  [SMALL_STATE(240)] = 2426,
  [SMALL_STATE(241)] = 2430,
  [SMALL_STATE(242)] = 2434,
  [SMALL_STATE(243)] = 2438,
  [SMALL_STATE(244)] = 2442,
  [SMALL_STATE(245)] = 2446,
  [SMALL_STATE(246)] = 2450,
  [SMALL_STATE(247)] = 2454,
  [SMALL_STATE(248)] = 2458,
  [SMALL_STATE(249)] = 2462,
  [SMALL_STATE(250)] = 2466,
  [SMALL_STATE(251)] = 2470,
  [SMALL_STATE(252)] = 2474,
  [SMALL_STATE(253)] = 2478,
  [SMALL_STATE(254)] = 2482,
  [SMALL_STATE(255)] = 2486,
  [SMALL_STATE(256)] = 2490,
  [SMALL_STATE(257)] = 2494,
  [SMALL_STATE(258)] = 2498,
  [SMALL_STATE(259)] = 2502,
  [SMALL_STATE(260)] = 2506,
  [SMALL_STATE(261)] = 2510,
  [SMALL_STATE(262)] = 2514,
  [SMALL_STATE(263)] = 2518,
  [SMALL_STATE(264)] = 2522,
  [SMALL_STATE(265)] = 2526,
  [SMALL_STATE(266)] = 2530,
  [SMALL_STATE(267)] = 2534,
  [SMALL_STATE(268)] = 2538,
  [SMALL_STATE(269)] = 2542,
  [SMALL_STATE(270)] = 2546,
  [SMALL_STATE(271)] = 2550,
  [SMALL_STATE(272)] = 2554,
  [SMALL_STATE(273)] = 2558,
  [SMALL_STATE(274)] = 2562,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(247),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(255),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(254),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(253),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(252),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(135),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEReference, 3),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(264),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(6),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(240),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(241),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(242),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(268),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(7),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(265),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(266),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(267),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(272),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(273),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(274),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(15),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(269),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(270),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(271),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(16),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__seq, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 5),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__seq, 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__seq, 5),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 4),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CharRef, 3),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CharRef, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Reference, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__Reference, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEReference, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityRef, 3),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EntityRef, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(83),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(222),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__seq_repeat1, 2),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__seq_repeat1, 2), SHIFT_REPEAT(26),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__seq_repeat1, 2), SHIFT_REPEAT(235),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(23),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(238),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(181),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(219),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(89),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1), SHIFT_REPEAT(75),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(90),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(245),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2), SHIFT_REPEAT(119),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 4),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 3),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 5),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__seq_repeat1, 4),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 4),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4), SHIFT_REPEAT(109),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__seq_repeat1, 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 4),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3), SHIFT_REPEAT(115),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(125),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 6),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 3, .production_id = 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markupdecl, 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 7),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EntityDecl, 1),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PublicID, 3),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 7),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 7),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 9),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 8),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 6),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 7),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 6),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 2),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 6),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 8),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__AttType, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 3),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 6),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SystemLiteral, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 3),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PubidLiteral, 2),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 4),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 8),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 5),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 5, .production_id = 1),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 6),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 3),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 5),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 4),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 3),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 2),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 1),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EnumeratedType, 1),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contentspec, 1),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 6),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 9),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SystemLiteral, 3, .production_id = 2),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PubidLiteral, 3, .production_id = 2),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 5),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NDataDecl, 4),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 3),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 6),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 4),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 5),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [684] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
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
