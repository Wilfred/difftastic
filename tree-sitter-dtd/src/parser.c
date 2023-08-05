#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 270
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 94
#define ALIAS_COUNT 1
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 3

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
  sym__AttDef = 61,
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
  [37] = 11,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 11,
  [43] = 31,
  [44] = 34,
  [45] = 45,
  [46] = 46,
  [47] = 35,
  [48] = 48,
  [49] = 49,
  [50] = 34,
  [51] = 51,
  [52] = 31,
  [53] = 53,
  [54] = 54,
  [55] = 35,
  [56] = 34,
  [57] = 31,
  [58] = 35,
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
  [251] = 204,
  [252] = 232,
  [253] = 229,
  [254] = 204,
  [255] = 232,
  [256] = 229,
  [257] = 232,
  [258] = 229,
  [259] = 227,
  [260] = 182,
  [261] = 212,
  [262] = 216,
  [263] = 227,
  [264] = 182,
  [265] = 212,
  [266] = 216,
  [267] = 182,
  [268] = 212,
  [269] = 216,
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

static inline bool sym_Name_character_set_2(int32_t c) {
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

static inline bool sym_Name_character_set_3(int32_t c) {
  return (c < 895
    ? (c < 'a'
      ? (c < 'B'
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
      if (eof) ADVANCE(108);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '#') ADVANCE(142);
      if (lookahead == '%') ADVANCE(136);
      if (lookahead == '&') ADVANCE(204);
      if (lookahead == '\'') ADVANCE(152);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(118);
      if (lookahead == '*') ADVANCE(119);
      if (lookahead == '+') ADVANCE(159);
      if (lookahead == ',') ADVANCE(120);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == '<') ADVANCE(160);
      if (lookahead == '>') ADVANCE(110);
      if (lookahead == '?') ADVANCE(158);
      if (lookahead == 'A') ADVANCE(144);
      if (lookahead == 'C') ADVANCE(139);
      if (lookahead == 'E') ADVANCE(143);
      if (lookahead == 'I') ADVANCE(140);
      if (lookahead == 'N') ADVANCE(141);
      if (lookahead == 'P') ADVANCE(145);
      if (lookahead == 'S') ADVANCE(146);
      if (lookahead == '|') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(147);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(151);
      if (lookahead == 0 ||
          lookahead == 65534 ||
          lookahead == 65535) ADVANCE(138);
      if (!aux_sym_EntityValue_token1_character_set_1(lookahead)) ADVANCE(138);
      if (aux_sym_EntityValue_token1_character_set_2(lookahead)) ADVANCE(150);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '?') ADVANCE(223);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '%') ADVANCE(136);
      if (lookahead == '&') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(138);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '&') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(209);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '%') ADVANCE(136);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == '>') ADVANCE(110);
      if (lookahead == '?') ADVANCE(12);
      if (lookahead == '|') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (sym_Name_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(136);
      if (lookahead == '&') ADVANCE(204);
      if (lookahead == '\'') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(153);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(204);
      if (lookahead == '\'') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(210);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(83);
      if (lookahead == 'E') ADVANCE(55);
      if (lookahead == 'N') ADVANCE(69);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(226);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(225);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(116);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(122);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(154);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(84);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(86);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(88);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(90);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(95);
      END_STATE();
    case 21:
      if (lookahead == 'B') ADVANCE(57);
      END_STATE();
    case 22:
      if (lookahead == 'C') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'C') ADVANCE(213);
      END_STATE();
    case 24:
      if (lookahead == 'D') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 'D') ADVANCE(134);
      END_STATE();
    case 26:
      if (lookahead == 'D') ADVANCE(133);
      END_STATE();
    case 27:
      if (lookahead == 'D') ADVANCE(132);
      END_STATE();
    case 28:
      if (lookahead == 'D') ADVANCE(126);
      END_STATE();
    case 29:
      if (lookahead == 'D') ADVANCE(17);
      END_STATE();
    case 30:
      if (lookahead == 'D') ADVANCE(18);
      if (lookahead == 'M') ADVANCE(85);
      if (lookahead == 'O') ADVANCE(96);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(74);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(66);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(42);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(61);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(25);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(76);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(26);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(27);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(63);
      END_STATE();
    case 41:
      if (lookahead == 'F') ADVANCE(43);
      if (lookahead == 'I') ADVANCE(58);
      if (lookahead == 'R') ADVANCE(31);
      END_STATE();
    case 42:
      if (lookahead == 'F') ADVANCE(128);
      END_STATE();
    case 43:
      if (lookahead == 'I') ADVANCE(99);
      END_STATE();
    case 44:
      if (lookahead == 'I') ADVANCE(75);
      END_STATE();
    case 45:
      if (lookahead == 'I') ADVANCE(77);
      END_STATE();
    case 46:
      if (lookahead == 'I') ADVANCE(23);
      END_STATE();
    case 47:
      if (lookahead == 'I') ADVANCE(68);
      END_STATE();
    case 48:
      if (lookahead == 'I') ADVANCE(79);
      END_STATE();
    case 49:
      if (lookahead == 'I') ADVANCE(36);
      if (lookahead == 'Y') ADVANCE(124);
      END_STATE();
    case 50:
      if (lookahead == 'I') ADVANCE(82);
      END_STATE();
    case 51:
      if (lookahead == 'I') ADVANCE(38);
      END_STATE();
    case 52:
      if (lookahead == 'I') ADVANCE(70);
      END_STATE();
    case 53:
      if (lookahead == 'K') ADVANCE(40);
      END_STATE();
    case 54:
      if (lookahead == 'L') ADVANCE(51);
      END_STATE();
    case 55:
      if (lookahead == 'L') ADVANCE(34);
      if (lookahead == 'N') ADVANCE(87);
      END_STATE();
    case 56:
      if (lookahead == 'L') ADVANCE(45);
      END_STATE();
    case 57:
      if (lookahead == 'L') ADVANCE(46);
      END_STATE();
    case 58:
      if (lookahead == 'M') ADVANCE(72);
      END_STATE();
    case 59:
      if (lookahead == 'M') ADVANCE(211);
      END_STATE();
    case 60:
      if (lookahead == 'M') ADVANCE(73);
      if (lookahead == 'N') ADVANCE(94);
      END_STATE();
    case 61:
      if (lookahead == 'M') ADVANCE(32);
      END_STATE();
    case 62:
      if (lookahead == 'N') ADVANCE(156);
      END_STATE();
    case 63:
      if (lookahead == 'N') ADVANCE(128);
      END_STATE();
    case 64:
      if (lookahead == 'N') ADVANCE(130);
      END_STATE();
    case 65:
      if (lookahead == 'N') ADVANCE(101);
      END_STATE();
    case 66:
      if (lookahead == 'N') ADVANCE(81);
      END_STATE();
    case 67:
      if (lookahead == 'O') ADVANCE(53);
      END_STATE();
    case 68:
      if (lookahead == 'O') ADVANCE(62);
      END_STATE();
    case 69:
      if (lookahead == 'O') ADVANCE(93);
      END_STATE();
    case 70:
      if (lookahead == 'O') ADVANCE(64);
      END_STATE();
    case 71:
      if (lookahead == 'P') ADVANCE(22);
      END_STATE();
    case 72:
      if (lookahead == 'P') ADVANCE(54);
      END_STATE();
    case 73:
      if (lookahead == 'P') ADVANCE(89);
      END_STATE();
    case 74:
      if (lookahead == 'Q') ADVANCE(98);
      END_STATE();
    case 75:
      if (lookahead == 'R') ADVANCE(39);
      END_STATE();
    case 76:
      if (lookahead == 'S') ADVANCE(124);
      END_STATE();
    case 77:
      if (lookahead == 'S') ADVANCE(80);
      END_STATE();
    case 78:
      if (lookahead == 'S') ADVANCE(91);
      END_STATE();
    case 79:
      if (lookahead == 'T') ADVANCE(100);
      END_STATE();
    case 80:
      if (lookahead == 'T') ADVANCE(121);
      END_STATE();
    case 81:
      if (lookahead == 'T') ADVANCE(109);
      END_STATE();
    case 82:
      if (lookahead == 'T') ADVANCE(49);
      END_STATE();
    case 83:
      if (lookahead == 'T') ADVANCE(92);
      END_STATE();
    case 84:
      if (lookahead == 'T') ADVANCE(13);
      END_STATE();
    case 85:
      if (lookahead == 'T') ADVANCE(67);
      END_STATE();
    case 86:
      if (lookahead == 'T') ADVANCE(14);
      END_STATE();
    case 87:
      if (lookahead == 'T') ADVANCE(48);
      END_STATE();
    case 88:
      if (lookahead == 'T') ADVANCE(15);
      END_STATE();
    case 89:
      if (lookahead == 'T') ADVANCE(102);
      END_STATE();
    case 90:
      if (lookahead == 'T') ADVANCE(47);
      END_STATE();
    case 91:
      if (lookahead == 'T') ADVANCE(37);
      END_STATE();
    case 92:
      if (lookahead == 'T') ADVANCE(56);
      END_STATE();
    case 93:
      if (lookahead == 'T') ADVANCE(19);
      END_STATE();
    case 94:
      if (lookahead == 'T') ADVANCE(50);
      END_STATE();
    case 95:
      if (lookahead == 'T') ADVANCE(52);
      END_STATE();
    case 96:
      if (lookahead == 'T') ADVANCE(20);
      END_STATE();
    case 97:
      if (lookahead == 'U') ADVANCE(21);
      END_STATE();
    case 98:
      if (lookahead == 'U') ADVANCE(44);
      END_STATE();
    case 99:
      if (lookahead == 'X') ADVANCE(35);
      END_STATE();
    case 100:
      if (lookahead == 'Y') ADVANCE(135);
      END_STATE();
    case 101:
      if (lookahead == 'Y') ADVANCE(113);
      END_STATE();
    case 102:
      if (lookahead == 'Y') ADVANCE(111);
      END_STATE();
    case 103:
      if (lookahead == 'Y') ADVANCE(78);
      END_STATE();
    case 104:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(203);
      END_STATE();
    case 105:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 106:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(224);
      END_STATE();
    case 107:
      if (eof) ADVANCE(108);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '%') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(152);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(118);
      if (lookahead == '*') ADVANCE(119);
      if (lookahead == '+') ADVANCE(159);
      if (lookahead == ',') ADVANCE(120);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '>') ADVANCE(110);
      if (lookahead == '?') ADVANCE(158);
      if (lookahead == 'A') ADVANCE(65);
      if (lookahead == 'C') ADVANCE(29);
      if (lookahead == 'E') ADVANCE(60);
      if (lookahead == 'I') ADVANCE(28);
      if (lookahead == 'N') ADVANCE(30);
      if (lookahead == 'P') ADVANCE(97);
      if (lookahead == 'S') ADVANCE(103);
      if (lookahead == '|') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LT_BANGELEMENT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_EMPTY);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_EMPTY);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_ANY);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_ANY);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_POUNDPCDATA);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LT_BANGATTLIST);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_StringType);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_StringType);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_TokenizedType);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'R') ADVANCE(169);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'R') ADVANCE(33);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(129);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(124);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_NOTATION);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_NOTATION);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_POUNDREQUIRED);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_POUNDIMPLIED);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_POUNDFIXED);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LT_BANGENTITY);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'D') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'D') ADVANCE(125);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'D') ADVANCE(165);
      if (lookahead == 'M') ADVANCE(189);
      if (lookahead == 'O') ADVANCE(192);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'F') ADVANCE(43);
      if (lookahead == 'I') ADVANCE(58);
      if (lookahead == 'P') ADVANCE(22);
      if (lookahead == 'R') ADVANCE(31);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'M') ADVANCE(185);
      if (lookahead == 'N') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'N') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'U') ADVANCE(167);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'Y') ADVANCE(187);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(203);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_EntityValue_token2);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_NDATA);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_NDATA);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LT_BANGNOTATION);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__Char);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '?') ADVANCE(223);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__S);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'A') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'A') ADVANCE(123);
      if (sym_Name_character_set_3(lookahead)) ADVANCE(200);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'A') ADVANCE(155);
      if (sym_Name_character_set_3(lookahead)) ADVANCE(200);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'A') ADVANCE(196);
      if (sym_Name_character_set_3(lookahead)) ADVANCE(200);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'A') ADVANCE(195);
      if (sym_Name_character_set_3(lookahead)) ADVANCE(200);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'B') ADVANCE(179);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'C') ADVANCE(214);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(173);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(180);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(181);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(186);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'F') ADVANCE(127);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(168);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(184);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(172);
      if (lookahead == 'Y') ADVANCE(129);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(190);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'K') ADVANCE(171);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'L') ADVANCE(174);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'M') ADVANCE(212);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(127);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(131);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'O') ADVANCE(178);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'O') ADVANCE(182);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'P') ADVANCE(191);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'S') ADVANCE(129);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'S') ADVANCE(193);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(177);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(183);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(176);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(198);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(166);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(170);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(175);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(164);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'Y') ADVANCE(114);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'Y') ADVANCE(112);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_Name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_Name);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '#') ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_AMP_POUND);
      if (lookahead == 'x') ADVANCE(207);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_CharRef_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_CharRef_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_AttValue_token1);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_AttValue_token2);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_SYSTEM);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_SYSTEM);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_PUBLIC);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_PUBLIC);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(200);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token1);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token2);
      if (lookahead == '\'') ADVANCE(152);
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token1);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '%') ||
          ('\'' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token1);
      if (aux_sym_PubidLiteral_token1_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token2);
      if (lookahead == '\'') ADVANCE(152);
      if (aux_sym_PubidLiteral_token2_character_set_1(lookahead)) ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token2);
      if (aux_sym_PubidLiteral_token2_character_set_1(lookahead)) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_PI_token1);
      if (lookahead == '?') ADVANCE(106);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_Comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 107},
  [2] = {.lex_state = 107},
  [3] = {.lex_state = 107},
  [4] = {.lex_state = 107},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 107},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 107},
  [19] = {.lex_state = 107},
  [20] = {.lex_state = 107},
  [21] = {.lex_state = 107},
  [22] = {.lex_state = 107},
  [23] = {.lex_state = 107},
  [24] = {.lex_state = 107},
  [25] = {.lex_state = 107},
  [26] = {.lex_state = 107},
  [27] = {.lex_state = 107},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 107},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 107},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 107},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 107},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 107},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 107},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 107},
  [62] = {.lex_state = 107},
  [63] = {.lex_state = 107},
  [64] = {.lex_state = 107},
  [65] = {.lex_state = 107},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 107},
  [69] = {.lex_state = 107},
  [70] = {.lex_state = 107},
  [71] = {.lex_state = 107},
  [72] = {.lex_state = 107},
  [73] = {.lex_state = 107},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 107},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 107},
  [79] = {.lex_state = 107},
  [80] = {.lex_state = 107},
  [81] = {.lex_state = 107},
  [82] = {.lex_state = 107},
  [83] = {.lex_state = 107},
  [84] = {.lex_state = 107},
  [85] = {.lex_state = 107},
  [86] = {.lex_state = 107},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 107},
  [89] = {.lex_state = 107},
  [90] = {.lex_state = 107},
  [91] = {.lex_state = 107},
  [92] = {.lex_state = 107},
  [93] = {.lex_state = 107},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 107},
  [96] = {.lex_state = 107},
  [97] = {.lex_state = 107},
  [98] = {.lex_state = 107},
  [99] = {.lex_state = 107},
  [100] = {.lex_state = 107},
  [101] = {.lex_state = 107},
  [102] = {.lex_state = 107},
  [103] = {.lex_state = 107},
  [104] = {.lex_state = 107},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 107},
  [107] = {.lex_state = 107},
  [108] = {.lex_state = 107},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 107},
  [112] = {.lex_state = 107},
  [113] = {.lex_state = 107},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 107},
  [116] = {.lex_state = 107},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 107},
  [119] = {.lex_state = 217},
  [120] = {.lex_state = 107},
  [121] = {.lex_state = 219},
  [122] = {.lex_state = 221},
  [123] = {.lex_state = 107},
  [124] = {.lex_state = 107},
  [125] = {.lex_state = 107},
  [126] = {.lex_state = 107},
  [127] = {.lex_state = 107},
  [128] = {.lex_state = 107},
  [129] = {.lex_state = 107},
  [130] = {.lex_state = 107},
  [131] = {.lex_state = 107},
  [132] = {.lex_state = 107},
  [133] = {.lex_state = 107},
  [134] = {.lex_state = 107},
  [135] = {.lex_state = 107},
  [136] = {.lex_state = 215},
  [137] = {.lex_state = 107},
  [138] = {.lex_state = 107},
  [139] = {.lex_state = 107},
  [140] = {.lex_state = 107},
  [141] = {.lex_state = 107},
  [142] = {.lex_state = 107},
  [143] = {.lex_state = 107},
  [144] = {.lex_state = 107},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 107},
  [147] = {.lex_state = 107},
  [148] = {.lex_state = 104},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 107},
  [151] = {.lex_state = 107},
  [152] = {.lex_state = 107},
  [153] = {.lex_state = 107},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 107},
  [156] = {.lex_state = 104},
  [157] = {.lex_state = 107},
  [158] = {.lex_state = 107},
  [159] = {.lex_state = 107},
  [160] = {.lex_state = 107},
  [161] = {.lex_state = 107},
  [162] = {.lex_state = 107},
  [163] = {.lex_state = 107},
  [164] = {.lex_state = 107},
  [165] = {.lex_state = 107},
  [166] = {.lex_state = 107},
  [167] = {.lex_state = 107},
  [168] = {.lex_state = 107},
  [169] = {.lex_state = 107},
  [170] = {.lex_state = 107},
  [171] = {.lex_state = 107},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 107},
  [174] = {.lex_state = 104},
  [175] = {.lex_state = 107},
  [176] = {.lex_state = 107},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 107},
  [179] = {.lex_state = 107},
  [180] = {.lex_state = 107},
  [181] = {.lex_state = 107},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 107},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 107},
  [186] = {.lex_state = 107},
  [187] = {.lex_state = 107},
  [188] = {.lex_state = 107},
  [189] = {.lex_state = 107},
  [190] = {.lex_state = 107},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 107},
  [193] = {.lex_state = 107},
  [194] = {.lex_state = 107},
  [195] = {.lex_state = 107},
  [196] = {.lex_state = 107},
  [197] = {.lex_state = 107},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 104},
  [200] = {.lex_state = 107},
  [201] = {.lex_state = 107},
  [202] = {.lex_state = 107},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 107},
  [205] = {.lex_state = 104},
  [206] = {.lex_state = 107},
  [207] = {.lex_state = 107},
  [208] = {.lex_state = 224},
  [209] = {.lex_state = 107},
  [210] = {.lex_state = 107},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 107},
  [213] = {.lex_state = 104},
  [214] = {.lex_state = 107},
  [215] = {.lex_state = 107},
  [216] = {.lex_state = 105},
  [217] = {.lex_state = 107},
  [218] = {.lex_state = 107},
  [219] = {.lex_state = 107},
  [220] = {.lex_state = 107},
  [221] = {.lex_state = 107},
  [222] = {.lex_state = 107},
  [223] = {.lex_state = 107},
  [224] = {.lex_state = 107},
  [225] = {.lex_state = 107},
  [226] = {.lex_state = 107},
  [227] = {.lex_state = 4},
  [228] = {.lex_state = 107},
  [229] = {.lex_state = 107},
  [230] = {.lex_state = 107},
  [231] = {.lex_state = 107},
  [232] = {.lex_state = 107},
  [233] = {.lex_state = 107},
  [234] = {.lex_state = 107},
  [235] = {.lex_state = 107},
  [236] = {.lex_state = 107},
  [237] = {.lex_state = 107},
  [238] = {.lex_state = 107},
  [239] = {.lex_state = 107},
  [240] = {.lex_state = 4},
  [241] = {.lex_state = 107},
  [242] = {.lex_state = 4},
  [243] = {.lex_state = 4},
  [244] = {.lex_state = 107},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 107},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 107},
  [249] = {.lex_state = 107},
  [250] = {.lex_state = 107},
  [251] = {.lex_state = 107},
  [252] = {.lex_state = 107},
  [253] = {.lex_state = 107},
  [254] = {.lex_state = 107},
  [255] = {.lex_state = 107},
  [256] = {.lex_state = 107},
  [257] = {.lex_state = 107},
  [258] = {.lex_state = 107},
  [259] = {.lex_state = 4},
  [260] = {.lex_state = 4},
  [261] = {.lex_state = 107},
  [262] = {.lex_state = 105},
  [263] = {.lex_state = 4},
  [264] = {.lex_state = 4},
  [265] = {.lex_state = 107},
  [266] = {.lex_state = 105},
  [267] = {.lex_state = 4},
  [268] = {.lex_state = 107},
  [269] = {.lex_state = 105},
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
  },
  [1] = {
    [sym_document] = STATE(245),
    [sym__markupdecl] = STATE(79),
    [sym_elementdecl] = STATE(171),
    [sym_AttlistDecl] = STATE(171),
    [sym__EntityDecl] = STATE(171),
    [sym_GEDecl] = STATE(164),
    [sym_PEDecl] = STATE(164),
    [sym_NotationDecl] = STATE(171),
    [sym_PI] = STATE(171),
    [aux_sym_document_repeat1] = STATE(2),
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
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_document_repeat1,
    STATE(79), 1,
      sym__markupdecl,
    STATE(164), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(171), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [42] = 12,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_LT_BANGELEMENT,
    ACTIONS(24), 1,
      anon_sym_LT_BANGATTLIST,
    ACTIONS(27), 1,
      anon_sym_LT_BANGENTITY,
    ACTIONS(30), 1,
      anon_sym_LT_BANGNOTATION,
    ACTIONS(33), 1,
      sym__S,
    ACTIONS(36), 1,
      anon_sym_LT_QMARK,
    ACTIONS(39), 1,
      sym_Comment,
    STATE(3), 1,
      aux_sym_document_repeat1,
    STATE(79), 1,
      sym__markupdecl,
    STATE(164), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(171), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [84] = 9,
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
    STATE(61), 1,
      sym__markupdecl,
    STATE(164), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(171), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [117] = 8,
    ACTIONS(42), 1,
      anon_sym_PERCENT,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(50), 1,
      anon_sym_AMP,
    ACTIONS(53), 1,
      anon_sym_AMP_POUND,
    ACTIONS(56), 1,
      anon_sym_AMP_POUNDx,
    STATE(47), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(5), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [145] = 8,
    ACTIONS(59), 1,
      anon_sym_PERCENT,
    ACTIONS(62), 1,
      anon_sym_SQUOTE,
    ACTIONS(64), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(67), 1,
      anon_sym_AMP,
    ACTIONS(70), 1,
      anon_sym_AMP_POUND,
    ACTIONS(73), 1,
      anon_sym_AMP_POUNDx,
    STATE(35), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(6), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [173] = 8,
    ACTIONS(76), 1,
      anon_sym_PERCENT,
    ACTIONS(78), 1,
      anon_sym_SQUOTE,
    ACTIONS(80), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(82), 1,
      anon_sym_AMP,
    ACTIONS(84), 1,
      anon_sym_AMP_POUND,
    ACTIONS(86), 1,
      anon_sym_AMP_POUNDx,
    STATE(35), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(8), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [201] = 8,
    ACTIONS(76), 1,
      anon_sym_PERCENT,
    ACTIONS(82), 1,
      anon_sym_AMP,
    ACTIONS(84), 1,
      anon_sym_AMP_POUND,
    ACTIONS(86), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(88), 1,
      anon_sym_SQUOTE,
    ACTIONS(90), 1,
      aux_sym_EntityValue_token2,
    STATE(35), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(6), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [229] = 8,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      anon_sym_PERCENT,
    ACTIONS(94), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(96), 1,
      anon_sym_AMP,
    ACTIONS(98), 1,
      anon_sym_AMP_POUND,
    ACTIONS(100), 1,
      anon_sym_AMP_POUNDx,
    STATE(47), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(10), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [257] = 8,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      anon_sym_PERCENT,
    ACTIONS(96), 1,
      anon_sym_AMP,
    ACTIONS(98), 1,
      anon_sym_AMP_POUND,
    ACTIONS(100), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(102), 1,
      aux_sym_EntityValue_token1,
    STATE(47), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(5), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [285] = 1,
    ACTIONS(104), 10,
      ts_builtin_sym_end,
      anon_sym_LT_BANGELEMENT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [298] = 7,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_AMP,
    ACTIONS(111), 1,
      anon_sym_AMP_POUND,
    ACTIONS(114), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(117), 1,
      aux_sym_AttValue_token1,
    STATE(12), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(58), 2,
      sym_EntityRef,
      sym_CharRef,
  [322] = 7,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_AMP,
    ACTIONS(124), 1,
      anon_sym_AMP_POUND,
    ACTIONS(126), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(128), 1,
      aux_sym_AttValue_token1,
    STATE(15), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(58), 2,
      sym_EntityRef,
      sym_CharRef,
  [346] = 7,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(130), 1,
      anon_sym_AMP,
    ACTIONS(132), 1,
      anon_sym_AMP_POUND,
    ACTIONS(134), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(136), 1,
      aux_sym_AttValue_token2,
    STATE(16), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(55), 2,
      sym_EntityRef,
      sym_CharRef,
  [370] = 7,
    ACTIONS(122), 1,
      anon_sym_AMP,
    ACTIONS(124), 1,
      anon_sym_AMP_POUND,
    ACTIONS(126), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      aux_sym_AttValue_token1,
    STATE(12), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(58), 2,
      sym_EntityRef,
      sym_CharRef,
  [394] = 7,
    ACTIONS(130), 1,
      anon_sym_AMP,
    ACTIONS(132), 1,
      anon_sym_AMP_POUND,
    ACTIONS(134), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      aux_sym_AttValue_token2,
    STATE(17), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(55), 2,
      sym_EntityRef,
      sym_CharRef,
  [418] = 7,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      anon_sym_AMP_POUND,
    ACTIONS(152), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(155), 1,
      aux_sym_AttValue_token2,
    STATE(17), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(55), 2,
      sym_EntityRef,
      sym_CharRef,
  [442] = 6,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_NOTATION,
    STATE(236), 1,
      sym__AttType,
    STATE(244), 1,
      sym__EnumeratedType,
    ACTIONS(160), 2,
      sym_StringType,
      sym_TokenizedType,
    STATE(235), 2,
      sym_NotationType,
      sym_Enumeration,
  [463] = 1,
    ACTIONS(164), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [474] = 1,
    ACTIONS(166), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PLUS,
      sym__S,
  [485] = 1,
    ACTIONS(168), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PLUS,
      sym__S,
  [496] = 1,
    ACTIONS(170), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PLUS,
      sym__S,
  [507] = 1,
    ACTIONS(19), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANGELEMENT,
      anon_sym_LT_BANGATTLIST,
      anon_sym_LT_BANGENTITY,
      anon_sym_LT_BANGNOTATION,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [518] = 1,
    ACTIONS(172), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PLUS,
      sym__S,
  [529] = 1,
    ACTIONS(174), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_PLUS,
      sym__S,
  [540] = 5,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    STATE(176), 1,
      sym_contentspec,
    ACTIONS(176), 2,
      anon_sym_EMPTY,
      anon_sym_ANY,
    STATE(53), 2,
      sym__choice,
      sym__seq,
    STATE(179), 2,
      sym_Mixed,
      sym_children,
  [559] = 2,
    ACTIONS(182), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
    ACTIONS(180), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [571] = 6,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_POUNDPCDATA,
    ACTIONS(188), 1,
      sym__S,
    ACTIONS(190), 1,
      sym_Name,
    STATE(33), 1,
      sym__cp,
    STATE(27), 2,
      sym__choice,
      sym__seq,
  [591] = 6,
    ACTIONS(194), 1,
      anon_sym_POUNDFIXED,
    ACTIONS(196), 1,
      anon_sym_DQUOTE,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    STATE(178), 1,
      sym_AttValue,
    STATE(180), 1,
      sym_DefaultDecl,
    ACTIONS(192), 2,
      anon_sym_POUNDREQUIRED,
      anon_sym_POUNDIMPLIED,
  [611] = 5,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      sym_Name,
    ACTIONS(200), 1,
      sym__S,
    STATE(107), 1,
      sym__cp,
    STATE(27), 2,
      sym__choice,
      sym__seq,
  [628] = 2,
    ACTIONS(204), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(202), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [639] = 5,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      sym_Name,
    ACTIONS(206), 1,
      sym__S,
    STATE(92), 1,
      sym__cp,
    STATE(27), 2,
      sym__choice,
      sym__seq,
  [656] = 6,
    ACTIONS(208), 1,
      anon_sym_PIPE,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    ACTIONS(214), 1,
      sym__S,
    STATE(85), 1,
      aux_sym__choice_repeat1,
    STATE(88), 1,
      aux_sym__seq_repeat1,
  [675] = 2,
    ACTIONS(218), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(216), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [686] = 2,
    ACTIONS(222), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(220), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [697] = 5,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      sym_Name,
    ACTIONS(224), 1,
      anon_sym_POUNDPCDATA,
    STATE(40), 1,
      sym__cp,
    STATE(27), 2,
      sym__choice,
      sym__seq,
  [714] = 2,
    ACTIONS(226), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(104), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [725] = 6,
    ACTIONS(228), 1,
      anon_sym_DQUOTE,
    ACTIONS(230), 1,
      anon_sym_SQUOTE,
    ACTIONS(232), 1,
      anon_sym_SYSTEM,
    ACTIONS(234), 1,
      anon_sym_PUBLIC,
    STATE(104), 1,
      sym_ExternalID,
    STATE(153), 1,
      sym_EntityValue,
  [744] = 5,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      sym_Name,
    ACTIONS(236), 1,
      sym__S,
    STATE(33), 1,
      sym__cp,
    STATE(27), 2,
      sym__choice,
      sym__seq,
  [761] = 6,
    ACTIONS(208), 1,
      anon_sym_PIPE,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    ACTIONS(214), 1,
      sym__S,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym__seq_repeat1,
    STATE(70), 1,
      aux_sym__choice_repeat1,
  [780] = 5,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      sym_Name,
    ACTIONS(240), 1,
      sym__S,
    STATE(108), 1,
      sym__cp,
    STATE(27), 2,
      sym__choice,
      sym__seq,
  [797] = 2,
    ACTIONS(226), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(104), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [808] = 2,
    ACTIONS(204), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(202), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [819] = 2,
    ACTIONS(218), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(216), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [830] = 5,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      sym_Name,
    ACTIONS(242), 1,
      sym__S,
    STATE(93), 1,
      sym__cp,
    STATE(27), 2,
      sym__choice,
      sym__seq,
  [847] = 5,
    ACTIONS(228), 1,
      anon_sym_DQUOTE,
    ACTIONS(230), 1,
      anon_sym_SQUOTE,
    ACTIONS(232), 1,
      anon_sym_SYSTEM,
    ACTIONS(234), 1,
      anon_sym_PUBLIC,
    STATE(139), 2,
      sym_EntityValue,
      sym_ExternalID,
  [864] = 2,
    ACTIONS(222), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(220), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [875] = 4,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      sym_Name,
    STATE(103), 1,
      sym__cp,
    STATE(27), 2,
      sym__choice,
      sym__seq,
  [889] = 4,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      sym_Name,
    STATE(93), 1,
      sym__cp,
    STATE(27), 2,
      sym__choice,
      sym__seq,
  [903] = 2,
    ACTIONS(218), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(216), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [913] = 4,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      sym_Name,
    STATE(102), 1,
      sym__cp,
    STATE(27), 2,
      sym__choice,
      sym__seq,
  [927] = 2,
    ACTIONS(204), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(202), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [937] = 2,
    ACTIONS(244), 2,
      anon_sym_GT,
      sym__S,
    ACTIONS(246), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [947] = 4,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      sym_Name,
    STATE(40), 1,
      sym__cp,
    STATE(27), 2,
      sym__choice,
      sym__seq,
  [961] = 2,
    ACTIONS(222), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(220), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [971] = 2,
    ACTIONS(218), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(216), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [981] = 2,
    ACTIONS(204), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(202), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [991] = 2,
    ACTIONS(222), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(220), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [1001] = 4,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      sym_Name,
    STATE(92), 1,
      sym__cp,
    STATE(27), 2,
      sym__choice,
      sym__seq,
  [1015] = 4,
    ACTIONS(248), 1,
      anon_sym_PIPE,
    ACTIONS(250), 1,
      sym__S,
    ACTIONS(252), 1,
      sym_Name,
    STATE(76), 1,
      aux_sym_NotationType_repeat1,
  [1028] = 3,
    ACTIONS(254), 1,
      anon_sym_PERCENT,
    ACTIONS(256), 1,
      sym__S,
    STATE(19), 2,
      sym__DeclSep,
      sym_PEReference,
  [1039] = 3,
    ACTIONS(232), 1,
      anon_sym_SYSTEM,
    ACTIONS(258), 1,
      anon_sym_PUBLIC,
    STATE(146), 2,
      sym_ExternalID,
      sym_PublicID,
  [1050] = 3,
    ACTIONS(260), 1,
      anon_sym_GT,
    ACTIONS(262), 1,
      sym__S,
    STATE(69), 2,
      sym__AttDef,
      aux_sym_AttlistDecl_repeat1,
  [1061] = 4,
    ACTIONS(264), 1,
      anon_sym_PIPE,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    ACTIONS(268), 1,
      sym__S,
    STATE(65), 1,
      aux_sym_Enumeration_repeat1,
  [1074] = 4,
    ACTIONS(270), 1,
      anon_sym_PIPE,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    ACTIONS(275), 1,
      sym__S,
    STATE(65), 1,
      aux_sym_Enumeration_repeat1,
  [1087] = 4,
    ACTIONS(248), 1,
      anon_sym_PIPE,
    ACTIONS(250), 1,
      sym__S,
    ACTIONS(278), 1,
      sym_Name,
    STATE(60), 1,
      aux_sym_NotationType_repeat1,
  [1100] = 4,
    ACTIONS(248), 1,
      anon_sym_PIPE,
    ACTIONS(250), 1,
      sym__S,
    ACTIONS(252), 1,
      sym_Name,
    STATE(74), 1,
      aux_sym_NotationType_repeat1,
  [1113] = 4,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
    ACTIONS(282), 1,
      sym__S,
    STATE(86), 1,
      aux_sym__seq_repeat1,
  [1126] = 3,
    ACTIONS(284), 1,
      anon_sym_GT,
    ACTIONS(286), 1,
      sym__S,
    STATE(69), 2,
      sym__AttDef,
      aux_sym_AttlistDecl_repeat1,
  [1137] = 4,
    ACTIONS(208), 1,
      anon_sym_PIPE,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    ACTIONS(291), 1,
      sym__S,
    STATE(84), 1,
      aux_sym__choice_repeat1,
  [1150] = 3,
    ACTIONS(293), 1,
      anon_sym_GT,
    ACTIONS(295), 1,
      sym__S,
    STATE(63), 2,
      sym__AttDef,
      aux_sym_AttlistDecl_repeat1,
  [1161] = 4,
    ACTIONS(297), 1,
      anon_sym_PIPE,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    ACTIONS(301), 1,
      sym__S,
    STATE(73), 1,
      aux_sym_Mixed_repeat1,
  [1174] = 4,
    ACTIONS(303), 1,
      anon_sym_PIPE,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    ACTIONS(308), 1,
      sym__S,
    STATE(73), 1,
      aux_sym_Mixed_repeat1,
  [1187] = 4,
    ACTIONS(248), 1,
      anon_sym_PIPE,
    ACTIONS(250), 1,
      sym__S,
    ACTIONS(311), 1,
      sym_Name,
    STATE(76), 1,
      aux_sym_NotationType_repeat1,
  [1200] = 4,
    ACTIONS(297), 1,
      anon_sym_PIPE,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    ACTIONS(315), 1,
      sym__S,
    STATE(81), 1,
      aux_sym_Mixed_repeat1,
  [1213] = 4,
    ACTIONS(317), 1,
      anon_sym_PIPE,
    ACTIONS(320), 1,
      sym__S,
    ACTIONS(323), 1,
      sym_Name,
    STATE(76), 1,
      aux_sym_NotationType_repeat1,
  [1226] = 4,
    ACTIONS(254), 1,
      anon_sym_PERCENT,
    ACTIONS(325), 1,
      sym__S,
    ACTIONS(327), 1,
      sym_Name,
    STATE(97), 1,
      sym_PEReference,
  [1239] = 4,
    ACTIONS(297), 1,
      anon_sym_PIPE,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    ACTIONS(331), 1,
      sym__S,
    STATE(72), 1,
      aux_sym_Mixed_repeat1,
  [1252] = 3,
    ACTIONS(254), 1,
      anon_sym_PERCENT,
    ACTIONS(333), 1,
      sym__S,
    STATE(23), 2,
      sym__DeclSep,
      sym_PEReference,
  [1263] = 1,
    ACTIONS(335), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1270] = 4,
    ACTIONS(297), 1,
      anon_sym_PIPE,
    ACTIONS(301), 1,
      sym__S,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      aux_sym_Mixed_repeat1,
  [1283] = 4,
    ACTIONS(264), 1,
      anon_sym_PIPE,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
    ACTIONS(341), 1,
      sym__S,
    STATE(65), 1,
      aux_sym_Enumeration_repeat1,
  [1296] = 4,
    ACTIONS(264), 1,
      anon_sym_PIPE,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
    ACTIONS(341), 1,
      sym__S,
    STATE(64), 1,
      aux_sym_Enumeration_repeat1,
  [1309] = 4,
    ACTIONS(343), 1,
      anon_sym_PIPE,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    ACTIONS(348), 1,
      sym__S,
    STATE(84), 1,
      aux_sym__choice_repeat1,
  [1322] = 4,
    ACTIONS(208), 1,
      anon_sym_PIPE,
    ACTIONS(291), 1,
      sym__S,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym__choice_repeat1,
  [1335] = 4,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(358), 1,
      sym__S,
    STATE(86), 1,
      aux_sym__seq_repeat1,
  [1348] = 4,
    ACTIONS(254), 1,
      anon_sym_PERCENT,
    ACTIONS(361), 1,
      sym__S,
    ACTIONS(363), 1,
      sym_Name,
    STATE(118), 1,
      sym_PEReference,
  [1361] = 4,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    ACTIONS(282), 1,
      sym__S,
    STATE(86), 1,
      aux_sym__seq_repeat1,
  [1374] = 4,
    ACTIONS(264), 1,
      anon_sym_PIPE,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    ACTIONS(367), 1,
      sym__S,
    STATE(82), 1,
      aux_sym_Enumeration_repeat1,
  [1387] = 1,
    ACTIONS(273), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [1393] = 1,
    ACTIONS(369), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [1399] = 1,
    ACTIONS(371), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1405] = 1,
    ACTIONS(373), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [1411] = 3,
    ACTIONS(254), 1,
      anon_sym_PERCENT,
    ACTIONS(375), 1,
      sym_Name,
    STATE(101), 1,
      sym_PEReference,
  [1421] = 1,
    ACTIONS(377), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [1427] = 3,
    ACTIONS(379), 1,
      anon_sym_DQUOTE,
    ACTIONS(381), 1,
      anon_sym_SQUOTE,
    STATE(126), 1,
      sym_PubidLiteral,
  [1437] = 2,
    ACTIONS(383), 1,
      sym__S,
    ACTIONS(377), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [1445] = 3,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
    ACTIONS(388), 1,
      anon_sym_SQUOTE,
    STATE(168), 1,
      sym_SystemLiteral,
  [1455] = 2,
    ACTIONS(392), 1,
      anon_sym_STAR,
    ACTIONS(390), 2,
      anon_sym_GT,
      sym__S,
  [1463] = 1,
    ACTIONS(394), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [1469] = 2,
    ACTIONS(396), 1,
      sym__S,
    ACTIONS(394), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [1477] = 1,
    ACTIONS(399), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [1483] = 1,
    ACTIONS(401), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1489] = 3,
    ACTIONS(403), 1,
      anon_sym_GT,
    ACTIONS(405), 1,
      sym__S,
    STATE(166), 1,
      sym_NDataDecl,
  [1499] = 1,
    ACTIONS(407), 3,
      anon_sym_PIPE,
      sym__S,
      sym_Name,
  [1505] = 3,
    ACTIONS(196), 1,
      anon_sym_DQUOTE,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    STATE(129), 1,
      sym_AttValue,
  [1515] = 1,
    ACTIONS(353), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1521] = 1,
    ACTIONS(346), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [1527] = 2,
    ACTIONS(409), 1,
      sym__S,
    ACTIONS(323), 2,
      anon_sym_PIPE,
      sym_Name,
  [1535] = 1,
    ACTIONS(323), 3,
      anon_sym_PIPE,
      sym__S,
      sym_Name,
  [1541] = 1,
    ACTIONS(412), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [1547] = 3,
    ACTIONS(379), 1,
      anon_sym_DQUOTE,
    ACTIONS(381), 1,
      anon_sym_SQUOTE,
    STATE(228), 1,
      sym_PubidLiteral,
  [1557] = 1,
    ACTIONS(414), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [1563] = 2,
    ACTIONS(418), 1,
      sym__S,
    ACTIONS(416), 2,
      anon_sym_PIPE,
      sym_Name,
  [1571] = 3,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
    ACTIONS(388), 1,
      anon_sym_SQUOTE,
    STATE(150), 1,
      sym_SystemLiteral,
  [1581] = 2,
    ACTIONS(423), 1,
      anon_sym_STAR,
    ACTIONS(421), 2,
      anon_sym_GT,
      sym__S,
  [1589] = 3,
    ACTIONS(254), 1,
      anon_sym_PERCENT,
    ACTIONS(327), 1,
      sym_Name,
    STATE(97), 1,
      sym_PEReference,
  [1599] = 2,
    ACTIONS(425), 1,
      sym__S,
    ACTIONS(306), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [1607] = 2,
    ACTIONS(428), 1,
      anon_sym_SQUOTE,
    ACTIONS(430), 1,
      aux_sym_SystemLiteral_token2,
  [1614] = 2,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    ACTIONS(434), 1,
      sym__S,
  [1621] = 2,
    ACTIONS(436), 1,
      anon_sym_DQUOTE,
    ACTIONS(438), 1,
      aux_sym_PubidLiteral_token1,
  [1628] = 2,
    ACTIONS(436), 1,
      anon_sym_SQUOTE,
    ACTIONS(440), 1,
      aux_sym_PubidLiteral_token2,
  [1635] = 2,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
    ACTIONS(444), 1,
      sym__S,
  [1642] = 1,
    ACTIONS(446), 2,
      anon_sym_PERCENT,
      sym__S,
  [1647] = 1,
    ACTIONS(448), 2,
      anon_sym_GT,
      sym__S,
  [1652] = 2,
    ACTIONS(450), 1,
      anon_sym_GT,
    ACTIONS(452), 1,
      sym__S,
  [1659] = 1,
    ACTIONS(454), 2,
      anon_sym_PERCENT,
      sym__S,
  [1664] = 1,
    ACTIONS(421), 2,
      anon_sym_GT,
      sym__S,
  [1669] = 1,
    ACTIONS(456), 2,
      anon_sym_GT,
      sym__S,
  [1674] = 2,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    ACTIONS(460), 1,
      sym__S,
  [1681] = 2,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    ACTIONS(462), 1,
      anon_sym_PIPE,
  [1688] = 1,
    ACTIONS(464), 2,
      anon_sym_PERCENT,
      sym__S,
  [1693] = 2,
    ACTIONS(466), 1,
      anon_sym_PIPE,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
  [1700] = 1,
    ACTIONS(470), 2,
      anon_sym_GT,
      sym__S,
  [1705] = 1,
    ACTIONS(472), 2,
      anon_sym_GT,
      sym__S,
  [1710] = 2,
    ACTIONS(428), 1,
      anon_sym_DQUOTE,
    ACTIONS(474), 1,
      aux_sym_SystemLiteral_token1,
  [1717] = 1,
    ACTIONS(476), 2,
      anon_sym_GT,
      sym__S,
  [1722] = 1,
    ACTIONS(478), 2,
      anon_sym_PERCENT,
      sym__S,
  [1727] = 2,
    ACTIONS(480), 1,
      anon_sym_GT,
    ACTIONS(482), 1,
      sym__S,
  [1734] = 1,
    ACTIONS(484), 2,
      anon_sym_GT,
      sym__S,
  [1739] = 1,
    ACTIONS(486), 2,
      anon_sym_PERCENT,
      sym__S,
  [1744] = 1,
    ACTIONS(488), 2,
      anon_sym_PERCENT,
      sym__S,
  [1749] = 1,
    ACTIONS(490), 2,
      anon_sym_GT,
      sym__S,
  [1754] = 1,
    ACTIONS(492), 2,
      anon_sym_PERCENT,
      sym__S,
  [1759] = 2,
    ACTIONS(494), 1,
      sym__S,
    ACTIONS(496), 1,
      anon_sym_QMARK_GT,
  [1766] = 2,
    ACTIONS(498), 1,
      anon_sym_GT,
    ACTIONS(500), 1,
      sym__S,
  [1773] = 1,
    ACTIONS(502), 2,
      anon_sym_PERCENT,
      sym__S,
  [1778] = 2,
    ACTIONS(504), 1,
      sym__S,
    ACTIONS(506), 1,
      sym_Nmtoken,
  [1785] = 2,
    ACTIONS(260), 1,
      anon_sym_GT,
    ACTIONS(508), 1,
      sym_Name,
  [1792] = 1,
    ACTIONS(510), 2,
      anon_sym_GT,
      sym__S,
  [1797] = 1,
    ACTIONS(512), 2,
      anon_sym_PERCENT,
      sym__S,
  [1802] = 2,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    ACTIONS(466), 1,
      anon_sym_PIPE,
  [1809] = 2,
    ACTIONS(403), 1,
      anon_sym_GT,
    ACTIONS(514), 1,
      sym__S,
  [1816] = 2,
    ACTIONS(516), 1,
      anon_sym_PERCENT,
    ACTIONS(518), 1,
      sym_Name,
  [1823] = 1,
    ACTIONS(520), 2,
      anon_sym_GT,
      sym__S,
  [1828] = 2,
    ACTIONS(522), 1,
      sym__S,
    ACTIONS(524), 1,
      sym_Nmtoken,
  [1835] = 1,
    ACTIONS(526), 2,
      anon_sym_GT,
      sym__S,
  [1840] = 1,
    ACTIONS(528), 2,
      anon_sym_GT,
      sym__S,
  [1845] = 1,
    ACTIONS(530), 2,
      anon_sym_PERCENT,
      sym__S,
  [1850] = 2,
    ACTIONS(532), 1,
      anon_sym_PIPE,
    ACTIONS(534), 1,
      anon_sym_COMMA,
  [1857] = 2,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    ACTIONS(462), 1,
      anon_sym_PIPE,
  [1864] = 1,
    ACTIONS(536), 2,
      anon_sym_GT,
      sym__S,
  [1869] = 1,
    ACTIONS(538), 2,
      anon_sym_PERCENT,
      sym__S,
  [1874] = 1,
    ACTIONS(540), 2,
      anon_sym_PERCENT,
      sym__S,
  [1879] = 1,
    ACTIONS(542), 2,
      anon_sym_PERCENT,
      sym__S,
  [1884] = 2,
    ACTIONS(544), 1,
      anon_sym_GT,
    ACTIONS(546), 1,
      sym__S,
  [1891] = 1,
    ACTIONS(548), 2,
      anon_sym_GT,
      sym__S,
  [1896] = 1,
    ACTIONS(550), 2,
      anon_sym_GT,
      sym__S,
  [1901] = 1,
    ACTIONS(552), 2,
      anon_sym_GT,
      sym__S,
  [1906] = 2,
    ACTIONS(544), 1,
      anon_sym_GT,
    ACTIONS(554), 1,
      anon_sym_NDATA,
  [1913] = 1,
    ACTIONS(556), 2,
      anon_sym_PERCENT,
      sym__S,
  [1918] = 2,
    ACTIONS(508), 1,
      sym_Name,
    ACTIONS(558), 1,
      anon_sym_GT,
  [1925] = 1,
    ACTIONS(560), 2,
      anon_sym_PERCENT,
      sym__S,
  [1930] = 2,
    ACTIONS(562), 1,
      sym__S,
    ACTIONS(564), 1,
      sym_Nmtoken,
  [1937] = 2,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
    ACTIONS(466), 1,
      anon_sym_PIPE,
  [1944] = 2,
    ACTIONS(566), 1,
      anon_sym_GT,
    ACTIONS(568), 1,
      sym__S,
  [1951] = 2,
    ACTIONS(570), 1,
      sym__S,
    ACTIONS(572), 1,
      sym_Name,
  [1958] = 1,
    ACTIONS(574), 2,
      anon_sym_GT,
      sym__S,
  [1963] = 1,
    ACTIONS(576), 2,
      anon_sym_GT,
      sym__S,
  [1968] = 1,
    ACTIONS(578), 2,
      anon_sym_GT,
      sym__S,
  [1973] = 1,
    ACTIONS(580), 2,
      anon_sym_PERCENT,
      sym__S,
  [1978] = 1,
    ACTIONS(582), 1,
      sym_Name,
  [1982] = 1,
    ACTIONS(584), 1,
      sym__S,
  [1986] = 1,
    ACTIONS(586), 1,
      anon_sym_QMARK_GT,
  [1990] = 1,
    ACTIONS(588), 1,
      sym__S,
  [1994] = 1,
    ACTIONS(590), 1,
      sym__S,
  [1998] = 1,
    ACTIONS(592), 1,
      sym__S,
  [2002] = 1,
    ACTIONS(544), 1,
      anon_sym_GT,
  [2006] = 1,
    ACTIONS(594), 1,
      sym__S,
  [2010] = 1,
    ACTIONS(596), 1,
      anon_sym_STAR,
  [2014] = 1,
    ACTIONS(598), 1,
      sym_Name,
  [2018] = 1,
    ACTIONS(600), 1,
      anon_sym_SQUOTE,
  [2022] = 1,
    ACTIONS(600), 1,
      anon_sym_DQUOTE,
  [2026] = 1,
    ACTIONS(602), 1,
      anon_sym_SQUOTE,
  [2030] = 1,
    ACTIONS(602), 1,
      anon_sym_DQUOTE,
  [2034] = 1,
    ACTIONS(604), 1,
      sym__S,
  [2038] = 1,
    ACTIONS(606), 1,
      sym__S,
  [2042] = 1,
    ACTIONS(608), 1,
      sym_Name,
  [2046] = 1,
    ACTIONS(506), 1,
      sym_Nmtoken,
  [2050] = 1,
    ACTIONS(610), 1,
      anon_sym_GT,
  [2054] = 1,
    ACTIONS(612), 1,
      anon_sym_LPAREN,
  [2058] = 1,
    ACTIONS(614), 1,
      sym__S,
  [2062] = 1,
    ACTIONS(616), 1,
      sym_Name,
  [2066] = 1,
    ACTIONS(618), 1,
      anon_sym_SEMI,
  [2070] = 1,
    ACTIONS(620), 1,
      sym_Nmtoken,
  [2074] = 1,
    ACTIONS(534), 1,
      anon_sym_COMMA,
  [2078] = 1,
    ACTIONS(532), 1,
      anon_sym_PIPE,
  [2082] = 1,
    ACTIONS(622), 1,
      aux_sym_PI_token1,
  [2086] = 1,
    ACTIONS(624), 1,
      anon_sym_GT,
  [2090] = 1,
    ACTIONS(626), 1,
      sym__S,
  [2094] = 1,
    ACTIONS(508), 1,
      sym_Name,
  [2098] = 1,
    ACTIONS(628), 1,
      aux_sym_CharRef_token1,
  [2102] = 1,
    ACTIONS(630), 1,
      sym_Nmtoken,
  [2106] = 1,
    ACTIONS(466), 1,
      anon_sym_PIPE,
  [2110] = 1,
    ACTIONS(632), 1,
      sym__S,
  [2114] = 1,
    ACTIONS(628), 1,
      aux_sym_CharRef_token2,
  [2118] = 1,
    ACTIONS(634), 1,
      anon_sym_PIPE,
  [2122] = 1,
    ACTIONS(462), 1,
      anon_sym_PIPE,
  [2126] = 1,
    ACTIONS(636), 1,
      sym__S,
  [2130] = 1,
    ACTIONS(423), 1,
      anon_sym_STAR,
  [2134] = 1,
    ACTIONS(638), 1,
      sym__S,
  [2138] = 1,
    ACTIONS(640), 1,
      sym__S,
  [2142] = 1,
    ACTIONS(642), 1,
      sym__S,
  [2146] = 1,
    ACTIONS(644), 1,
      sym__S,
  [2150] = 1,
    ACTIONS(646), 1,
      anon_sym_GT,
  [2154] = 1,
    ACTIONS(648), 1,
      sym__S,
  [2158] = 1,
    ACTIONS(650), 1,
      sym_Name,
  [2162] = 1,
    ACTIONS(452), 1,
      sym__S,
  [2166] = 1,
    ACTIONS(652), 1,
      anon_sym_SEMI,
  [2170] = 1,
    ACTIONS(654), 1,
      sym__S,
  [2174] = 1,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
  [2178] = 1,
    ACTIONS(656), 1,
      anon_sym_SEMI,
  [2182] = 1,
    ACTIONS(658), 1,
      sym__S,
  [2186] = 1,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
  [2190] = 1,
    ACTIONS(660), 1,
      sym__S,
  [2194] = 1,
    ACTIONS(662), 1,
      sym__S,
  [2198] = 1,
    ACTIONS(664), 1,
      sym__S,
  [2202] = 1,
    ACTIONS(666), 1,
      anon_sym_RPAREN,
  [2206] = 1,
    ACTIONS(668), 1,
      sym__S,
  [2210] = 1,
    ACTIONS(670), 1,
      sym_Name,
  [2214] = 1,
    ACTIONS(672), 1,
      sym__S,
  [2218] = 1,
    ACTIONS(674), 1,
      sym_Name,
  [2222] = 1,
    ACTIONS(676), 1,
      sym_Name,
  [2226] = 1,
    ACTIONS(678), 1,
      sym__S,
  [2230] = 1,
    ACTIONS(680), 1,
      ts_builtin_sym_end,
  [2234] = 1,
    ACTIONS(682), 1,
      anon_sym_GT,
  [2238] = 1,
    ACTIONS(684), 1,
      sym_Name,
  [2242] = 1,
    ACTIONS(686), 1,
      sym__S,
  [2246] = 1,
    ACTIONS(688), 1,
      sym__S,
  [2250] = 1,
    ACTIONS(690), 1,
      sym__S,
  [2254] = 1,
    ACTIONS(692), 1,
      anon_sym_SEMI,
  [2258] = 1,
    ACTIONS(694), 1,
      anon_sym_SEMI,
  [2262] = 1,
    ACTIONS(696), 1,
      anon_sym_SEMI,
  [2266] = 1,
    ACTIONS(698), 1,
      anon_sym_SEMI,
  [2270] = 1,
    ACTIONS(700), 1,
      anon_sym_SEMI,
  [2274] = 1,
    ACTIONS(702), 1,
      anon_sym_SEMI,
  [2278] = 1,
    ACTIONS(704), 1,
      anon_sym_SEMI,
  [2282] = 1,
    ACTIONS(706), 1,
      anon_sym_SEMI,
  [2286] = 1,
    ACTIONS(708), 1,
      sym_Name,
  [2290] = 1,
    ACTIONS(710), 1,
      sym_Name,
  [2294] = 1,
    ACTIONS(712), 1,
      aux_sym_CharRef_token1,
  [2298] = 1,
    ACTIONS(712), 1,
      aux_sym_CharRef_token2,
  [2302] = 1,
    ACTIONS(714), 1,
      sym_Name,
  [2306] = 1,
    ACTIONS(716), 1,
      sym_Name,
  [2310] = 1,
    ACTIONS(718), 1,
      aux_sym_CharRef_token1,
  [2314] = 1,
    ACTIONS(718), 1,
      aux_sym_CharRef_token2,
  [2318] = 1,
    ACTIONS(720), 1,
      sym_Name,
  [2322] = 1,
    ACTIONS(722), 1,
      aux_sym_CharRef_token1,
  [2326] = 1,
    ACTIONS(722), 1,
      aux_sym_CharRef_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 145,
  [SMALL_STATE(7)] = 173,
  [SMALL_STATE(8)] = 201,
  [SMALL_STATE(9)] = 229,
  [SMALL_STATE(10)] = 257,
  [SMALL_STATE(11)] = 285,
  [SMALL_STATE(12)] = 298,
  [SMALL_STATE(13)] = 322,
  [SMALL_STATE(14)] = 346,
  [SMALL_STATE(15)] = 370,
  [SMALL_STATE(16)] = 394,
  [SMALL_STATE(17)] = 418,
  [SMALL_STATE(18)] = 442,
  [SMALL_STATE(19)] = 463,
  [SMALL_STATE(20)] = 474,
  [SMALL_STATE(21)] = 485,
  [SMALL_STATE(22)] = 496,
  [SMALL_STATE(23)] = 507,
  [SMALL_STATE(24)] = 518,
  [SMALL_STATE(25)] = 529,
  [SMALL_STATE(26)] = 540,
  [SMALL_STATE(27)] = 559,
  [SMALL_STATE(28)] = 571,
  [SMALL_STATE(29)] = 591,
  [SMALL_STATE(30)] = 611,
  [SMALL_STATE(31)] = 628,
  [SMALL_STATE(32)] = 639,
  [SMALL_STATE(33)] = 656,
  [SMALL_STATE(34)] = 675,
  [SMALL_STATE(35)] = 686,
  [SMALL_STATE(36)] = 697,
  [SMALL_STATE(37)] = 714,
  [SMALL_STATE(38)] = 725,
  [SMALL_STATE(39)] = 744,
  [SMALL_STATE(40)] = 761,
  [SMALL_STATE(41)] = 780,
  [SMALL_STATE(42)] = 797,
  [SMALL_STATE(43)] = 808,
  [SMALL_STATE(44)] = 819,
  [SMALL_STATE(45)] = 830,
  [SMALL_STATE(46)] = 847,
  [SMALL_STATE(47)] = 864,
  [SMALL_STATE(48)] = 875,
  [SMALL_STATE(49)] = 889,
  [SMALL_STATE(50)] = 903,
  [SMALL_STATE(51)] = 913,
  [SMALL_STATE(52)] = 927,
  [SMALL_STATE(53)] = 937,
  [SMALL_STATE(54)] = 947,
  [SMALL_STATE(55)] = 961,
  [SMALL_STATE(56)] = 971,
  [SMALL_STATE(57)] = 981,
  [SMALL_STATE(58)] = 991,
  [SMALL_STATE(59)] = 1001,
  [SMALL_STATE(60)] = 1015,
  [SMALL_STATE(61)] = 1028,
  [SMALL_STATE(62)] = 1039,
  [SMALL_STATE(63)] = 1050,
  [SMALL_STATE(64)] = 1061,
  [SMALL_STATE(65)] = 1074,
  [SMALL_STATE(66)] = 1087,
  [SMALL_STATE(67)] = 1100,
  [SMALL_STATE(68)] = 1113,
  [SMALL_STATE(69)] = 1126,
  [SMALL_STATE(70)] = 1137,
  [SMALL_STATE(71)] = 1150,
  [SMALL_STATE(72)] = 1161,
  [SMALL_STATE(73)] = 1174,
  [SMALL_STATE(74)] = 1187,
  [SMALL_STATE(75)] = 1200,
  [SMALL_STATE(76)] = 1213,
  [SMALL_STATE(77)] = 1226,
  [SMALL_STATE(78)] = 1239,
  [SMALL_STATE(79)] = 1252,
  [SMALL_STATE(80)] = 1263,
  [SMALL_STATE(81)] = 1270,
  [SMALL_STATE(82)] = 1283,
  [SMALL_STATE(83)] = 1296,
  [SMALL_STATE(84)] = 1309,
  [SMALL_STATE(85)] = 1322,
  [SMALL_STATE(86)] = 1335,
  [SMALL_STATE(87)] = 1348,
  [SMALL_STATE(88)] = 1361,
  [SMALL_STATE(89)] = 1374,
  [SMALL_STATE(90)] = 1387,
  [SMALL_STATE(91)] = 1393,
  [SMALL_STATE(92)] = 1399,
  [SMALL_STATE(93)] = 1405,
  [SMALL_STATE(94)] = 1411,
  [SMALL_STATE(95)] = 1421,
  [SMALL_STATE(96)] = 1427,
  [SMALL_STATE(97)] = 1437,
  [SMALL_STATE(98)] = 1445,
  [SMALL_STATE(99)] = 1455,
  [SMALL_STATE(100)] = 1463,
  [SMALL_STATE(101)] = 1469,
  [SMALL_STATE(102)] = 1477,
  [SMALL_STATE(103)] = 1483,
  [SMALL_STATE(104)] = 1489,
  [SMALL_STATE(105)] = 1499,
  [SMALL_STATE(106)] = 1505,
  [SMALL_STATE(107)] = 1515,
  [SMALL_STATE(108)] = 1521,
  [SMALL_STATE(109)] = 1527,
  [SMALL_STATE(110)] = 1535,
  [SMALL_STATE(111)] = 1541,
  [SMALL_STATE(112)] = 1547,
  [SMALL_STATE(113)] = 1557,
  [SMALL_STATE(114)] = 1563,
  [SMALL_STATE(115)] = 1571,
  [SMALL_STATE(116)] = 1581,
  [SMALL_STATE(117)] = 1589,
  [SMALL_STATE(118)] = 1599,
  [SMALL_STATE(119)] = 1607,
  [SMALL_STATE(120)] = 1614,
  [SMALL_STATE(121)] = 1621,
  [SMALL_STATE(122)] = 1628,
  [SMALL_STATE(123)] = 1635,
  [SMALL_STATE(124)] = 1642,
  [SMALL_STATE(125)] = 1647,
  [SMALL_STATE(126)] = 1652,
  [SMALL_STATE(127)] = 1659,
  [SMALL_STATE(128)] = 1664,
  [SMALL_STATE(129)] = 1669,
  [SMALL_STATE(130)] = 1674,
  [SMALL_STATE(131)] = 1681,
  [SMALL_STATE(132)] = 1688,
  [SMALL_STATE(133)] = 1693,
  [SMALL_STATE(134)] = 1700,
  [SMALL_STATE(135)] = 1705,
  [SMALL_STATE(136)] = 1710,
  [SMALL_STATE(137)] = 1717,
  [SMALL_STATE(138)] = 1722,
  [SMALL_STATE(139)] = 1727,
  [SMALL_STATE(140)] = 1734,
  [SMALL_STATE(141)] = 1739,
  [SMALL_STATE(142)] = 1744,
  [SMALL_STATE(143)] = 1749,
  [SMALL_STATE(144)] = 1754,
  [SMALL_STATE(145)] = 1759,
  [SMALL_STATE(146)] = 1766,
  [SMALL_STATE(147)] = 1773,
  [SMALL_STATE(148)] = 1778,
  [SMALL_STATE(149)] = 1785,
  [SMALL_STATE(150)] = 1792,
  [SMALL_STATE(151)] = 1797,
  [SMALL_STATE(152)] = 1802,
  [SMALL_STATE(153)] = 1809,
  [SMALL_STATE(154)] = 1816,
  [SMALL_STATE(155)] = 1823,
  [SMALL_STATE(156)] = 1828,
  [SMALL_STATE(157)] = 1835,
  [SMALL_STATE(158)] = 1840,
  [SMALL_STATE(159)] = 1845,
  [SMALL_STATE(160)] = 1850,
  [SMALL_STATE(161)] = 1857,
  [SMALL_STATE(162)] = 1864,
  [SMALL_STATE(163)] = 1869,
  [SMALL_STATE(164)] = 1874,
  [SMALL_STATE(165)] = 1879,
  [SMALL_STATE(166)] = 1884,
  [SMALL_STATE(167)] = 1891,
  [SMALL_STATE(168)] = 1896,
  [SMALL_STATE(169)] = 1901,
  [SMALL_STATE(170)] = 1906,
  [SMALL_STATE(171)] = 1913,
  [SMALL_STATE(172)] = 1918,
  [SMALL_STATE(173)] = 1925,
  [SMALL_STATE(174)] = 1930,
  [SMALL_STATE(175)] = 1937,
  [SMALL_STATE(176)] = 1944,
  [SMALL_STATE(177)] = 1951,
  [SMALL_STATE(178)] = 1958,
  [SMALL_STATE(179)] = 1963,
  [SMALL_STATE(180)] = 1968,
  [SMALL_STATE(181)] = 1973,
  [SMALL_STATE(182)] = 1978,
  [SMALL_STATE(183)] = 1982,
  [SMALL_STATE(184)] = 1986,
  [SMALL_STATE(185)] = 1990,
  [SMALL_STATE(186)] = 1994,
  [SMALL_STATE(187)] = 1998,
  [SMALL_STATE(188)] = 2002,
  [SMALL_STATE(189)] = 2006,
  [SMALL_STATE(190)] = 2010,
  [SMALL_STATE(191)] = 2014,
  [SMALL_STATE(192)] = 2018,
  [SMALL_STATE(193)] = 2022,
  [SMALL_STATE(194)] = 2026,
  [SMALL_STATE(195)] = 2030,
  [SMALL_STATE(196)] = 2034,
  [SMALL_STATE(197)] = 2038,
  [SMALL_STATE(198)] = 2042,
  [SMALL_STATE(199)] = 2046,
  [SMALL_STATE(200)] = 2050,
  [SMALL_STATE(201)] = 2054,
  [SMALL_STATE(202)] = 2058,
  [SMALL_STATE(203)] = 2062,
  [SMALL_STATE(204)] = 2066,
  [SMALL_STATE(205)] = 2070,
  [SMALL_STATE(206)] = 2074,
  [SMALL_STATE(207)] = 2078,
  [SMALL_STATE(208)] = 2082,
  [SMALL_STATE(209)] = 2086,
  [SMALL_STATE(210)] = 2090,
  [SMALL_STATE(211)] = 2094,
  [SMALL_STATE(212)] = 2098,
  [SMALL_STATE(213)] = 2102,
  [SMALL_STATE(214)] = 2106,
  [SMALL_STATE(215)] = 2110,
  [SMALL_STATE(216)] = 2114,
  [SMALL_STATE(217)] = 2118,
  [SMALL_STATE(218)] = 2122,
  [SMALL_STATE(219)] = 2126,
  [SMALL_STATE(220)] = 2130,
  [SMALL_STATE(221)] = 2134,
  [SMALL_STATE(222)] = 2138,
  [SMALL_STATE(223)] = 2142,
  [SMALL_STATE(224)] = 2146,
  [SMALL_STATE(225)] = 2150,
  [SMALL_STATE(226)] = 2154,
  [SMALL_STATE(227)] = 2158,
  [SMALL_STATE(228)] = 2162,
  [SMALL_STATE(229)] = 2166,
  [SMALL_STATE(230)] = 2170,
  [SMALL_STATE(231)] = 2174,
  [SMALL_STATE(232)] = 2178,
  [SMALL_STATE(233)] = 2182,
  [SMALL_STATE(234)] = 2186,
  [SMALL_STATE(235)] = 2190,
  [SMALL_STATE(236)] = 2194,
  [SMALL_STATE(237)] = 2198,
  [SMALL_STATE(238)] = 2202,
  [SMALL_STATE(239)] = 2206,
  [SMALL_STATE(240)] = 2210,
  [SMALL_STATE(241)] = 2214,
  [SMALL_STATE(242)] = 2218,
  [SMALL_STATE(243)] = 2222,
  [SMALL_STATE(244)] = 2226,
  [SMALL_STATE(245)] = 2230,
  [SMALL_STATE(246)] = 2234,
  [SMALL_STATE(247)] = 2238,
  [SMALL_STATE(248)] = 2242,
  [SMALL_STATE(249)] = 2246,
  [SMALL_STATE(250)] = 2250,
  [SMALL_STATE(251)] = 2254,
  [SMALL_STATE(252)] = 2258,
  [SMALL_STATE(253)] = 2262,
  [SMALL_STATE(254)] = 2266,
  [SMALL_STATE(255)] = 2270,
  [SMALL_STATE(256)] = 2274,
  [SMALL_STATE(257)] = 2278,
  [SMALL_STATE(258)] = 2282,
  [SMALL_STATE(259)] = 2286,
  [SMALL_STATE(260)] = 2290,
  [SMALL_STATE(261)] = 2294,
  [SMALL_STATE(262)] = 2298,
  [SMALL_STATE(263)] = 2302,
  [SMALL_STATE(264)] = 2306,
  [SMALL_STATE(265)] = 2310,
  [SMALL_STATE(266)] = 2314,
  [SMALL_STATE(267)] = 2318,
  [SMALL_STATE(268)] = 2322,
  [SMALL_STATE(269)] = 2326,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(221),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(250),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(249),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(248),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(247),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(171),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(259),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(5),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(182),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(212),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(216),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(263),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(6),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(260),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(261),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(262),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEReference, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(264),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(265),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(266),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(12),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(267),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(268),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(269),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(17),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 5),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__seq, 5),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__seq, 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__seq, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 4),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityRef, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EntityRef, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CharRef, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CharRef, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Reference, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__Reference, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEReference, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(174),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(214),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2), SHIFT_REPEAT(211),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(87),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(218),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(114),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(217),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(41),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(207),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__seq_repeat1, 2),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__seq_repeat1, 2), SHIFT_REPEAT(30),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__seq_repeat1, 2), SHIFT_REPEAT(206),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 4),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__seq_repeat1, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3), SHIFT_REPEAT(100),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4), SHIFT_REPEAT(111),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 4),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__seq_repeat1, 4),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 3),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(105),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 5),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1), SHIFT_REPEAT(110),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 4),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(95),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 7),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 3),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PublicID, 3),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 7),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 3),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 6),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SystemLiteral, 3, .production_id = 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 2),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 6),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 3, .production_id = 1),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 6),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 5, .production_id = 1),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 4),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 3),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 8),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SystemLiteral, 2),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 6),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PubidLiteral, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 7),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NDataDecl, 4),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 8),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EntityDecl, 1),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 6),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 5),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 5),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PubidLiteral, 3, .production_id = 2),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markupdecl, 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 5),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 1),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contentspec, 1),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__AttDef, 6),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 9),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 3),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 4),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 5),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 6),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 6),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 7),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EnumeratedType, 1),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 8),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 9),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__AttType, 1),
  [680] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
