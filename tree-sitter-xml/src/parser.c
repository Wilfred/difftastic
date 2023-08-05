#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 224
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 2
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 9

enum {
  anon_sym_LT_QMARKxml = 1,
  anon_sym_QMARK_GT = 2,
  anon_sym_version = 3,
  anon_sym_SQUOTE = 4,
  anon_sym_DQUOTE = 5,
  sym_VersionNum = 6,
  anon_sym_encoding = 7,
  sym_EncName = 8,
  anon_sym_standalone = 9,
  anon_sym_yes = 10,
  anon_sym_no = 11,
  anon_sym_LT_BANGDOCTYPE = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  anon_sym_GT = 15,
  anon_sym_LT = 16,
  anon_sym_SLASH_GT = 17,
  anon_sym_LT_SLASH = 18,
  sym_CharData = 19,
  anon_sym_LT_BANG_LBRACKCDATA_LBRACK = 20,
  anon_sym_RBRACK_RBRACK_GT = 21,
  sym_CData = 22,
  anon_sym_EQ = 23,
  sym__Char = 24,
  sym__S = 25,
  sym_Name = 26,
  sym_Nmtoken = 27,
  anon_sym_AMP = 28,
  anon_sym_SEMI = 29,
  anon_sym_AMP_POUND = 30,
  aux_sym_CharRef_token1 = 31,
  anon_sym_AMP_POUNDx = 32,
  aux_sym_CharRef_token2 = 33,
  aux_sym_AttValue_token1 = 34,
  aux_sym_AttValue_token2 = 35,
  anon_sym_SYSTEM = 36,
  anon_sym_PUBLIC = 37,
  aux_sym_SystemLiteral_token1 = 38,
  aux_sym_SystemLiteral_token2 = 39,
  aux_sym_PubidLiteral_token1 = 40,
  aux_sym_PubidLiteral_token2 = 41,
  anon_sym_LT_QMARK = 42,
  aux_sym_PI_token1 = 43,
  sym_Comment = 44,
  sym_document = 45,
  sym_prolog = 46,
  sym_XMLDecl = 47,
  sym__VersionInfo = 48,
  sym__EncodingDecl = 49,
  sym__SDDecl = 50,
  sym_doctypedecl = 51,
  sym_element = 52,
  sym_EmptyElemTag = 53,
  sym_Attribute = 54,
  sym_STag = 55,
  sym_ETag = 56,
  sym_content = 57,
  sym_CDSect = 58,
  sym__Eq = 59,
  sym__Reference = 60,
  sym_EntityRef = 61,
  sym_CharRef = 62,
  sym_AttValue = 63,
  sym_ExternalID = 64,
  sym_SystemLiteral = 65,
  sym_PubidLiteral = 66,
  sym_PI = 67,
  sym__Misc = 68,
  aux_sym_document_repeat1 = 69,
  aux_sym_doctypedecl_repeat1 = 70,
  aux_sym_EmptyElemTag_repeat1 = 71,
  aux_sym_content_repeat1 = 72,
  aux_sym_AttValue_repeat1 = 73,
  aux_sym_AttValue_repeat2 = 74,
  alias_sym_PITarget = 75,
  alias_sym_intSubset = 76,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_QMARKxml] = "<\?xml",
  [anon_sym_QMARK_GT] = "\?>",
  [anon_sym_version] = "version",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [sym_VersionNum] = "VersionNum",
  [anon_sym_encoding] = "encoding",
  [sym_EncName] = "EncName",
  [anon_sym_standalone] = "standalone",
  [anon_sym_yes] = "yes",
  [anon_sym_no] = "no",
  [anon_sym_LT_BANGDOCTYPE] = "<!DOCTYPE",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [sym_CharData] = "CharData",
  [anon_sym_LT_BANG_LBRACKCDATA_LBRACK] = "<![CDATA[",
  [anon_sym_RBRACK_RBRACK_GT] = "]]>",
  [sym_CData] = "CData",
  [anon_sym_EQ] = "=",
  [sym__Char] = "_Char",
  [sym__S] = "_S",
  [sym_Name] = "Name",
  [sym_Nmtoken] = "Nmtoken",
  [anon_sym_AMP] = "&",
  [anon_sym_SEMI] = ";",
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
  [sym_Comment] = "Comment",
  [sym_document] = "document",
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
  [sym__Reference] = "_Reference",
  [sym_EntityRef] = "EntityRef",
  [sym_CharRef] = "CharRef",
  [sym_AttValue] = "AttValue",
  [sym_ExternalID] = "ExternalID",
  [sym_SystemLiteral] = "SystemLiteral",
  [sym_PubidLiteral] = "PubidLiteral",
  [sym_PI] = "PI",
  [sym__Misc] = "_Misc",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_doctypedecl_repeat1] = "doctypedecl_repeat1",
  [aux_sym_EmptyElemTag_repeat1] = "EmptyElemTag_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
  [aux_sym_AttValue_repeat1] = "AttValue_repeat1",
  [aux_sym_AttValue_repeat2] = "AttValue_repeat2",
  [alias_sym_PITarget] = "PITarget",
  [alias_sym_intSubset] = "intSubset",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_QMARKxml] = anon_sym_LT_QMARKxml,
  [anon_sym_QMARK_GT] = anon_sym_QMARK_GT,
  [anon_sym_version] = anon_sym_version,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_VersionNum] = sym_VersionNum,
  [anon_sym_encoding] = anon_sym_encoding,
  [sym_EncName] = sym_EncName,
  [anon_sym_standalone] = anon_sym_standalone,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_LT_BANGDOCTYPE] = anon_sym_LT_BANGDOCTYPE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [sym_CharData] = sym_CharData,
  [anon_sym_LT_BANG_LBRACKCDATA_LBRACK] = anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [anon_sym_RBRACK_RBRACK_GT] = anon_sym_RBRACK_RBRACK_GT,
  [sym_CData] = sym_CData,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym__Char] = sym__Char,
  [sym__S] = sym__S,
  [sym_Name] = sym_Name,
  [sym_Nmtoken] = sym_Nmtoken,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [sym_Comment] = sym_Comment,
  [sym_document] = sym_document,
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
  [sym__Reference] = sym__Reference,
  [sym_EntityRef] = sym_EntityRef,
  [sym_CharRef] = sym_CharRef,
  [sym_AttValue] = sym_AttValue,
  [sym_ExternalID] = sym_ExternalID,
  [sym_SystemLiteral] = sym_SystemLiteral,
  [sym_PubidLiteral] = sym_PubidLiteral,
  [sym_PI] = sym_PI,
  [sym__Misc] = sym__Misc,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_doctypedecl_repeat1] = aux_sym_doctypedecl_repeat1,
  [aux_sym_EmptyElemTag_repeat1] = aux_sym_EmptyElemTag_repeat1,
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
  [aux_sym_AttValue_repeat1] = aux_sym_AttValue_repeat1,
  [aux_sym_AttValue_repeat2] = aux_sym_AttValue_repeat2,
  [alias_sym_PITarget] = alias_sym_PITarget,
  [alias_sym_intSubset] = alias_sym_intSubset,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_QMARKxml] = {
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
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
  [anon_sym_GT] = {
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
  [anon_sym_SEMI] = {
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
  [sym_Comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
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
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_doctypedecl_repeat1] = {
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
  [alias_sym_intSubset] = {
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
  [6] = {.index = 2, .length = 1},
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
  [4] = {
    [4] = alias_sym_intSubset,
  },
  [5] = {
    [5] = alias_sym_intSubset,
  },
  [7] = {
    [6] = alias_sym_intSubset,
  },
  [8] = {
    [7] = alias_sym_intSubset,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_doctypedecl_repeat1, 2,
    aux_sym_doctypedecl_repeat1,
    alias_sym_intSubset,
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
  [42] = 30,
  [43] = 6,
  [44] = 16,
  [45] = 45,
  [46] = 46,
  [47] = 14,
  [48] = 17,
  [49] = 6,
  [50] = 50,
  [51] = 17,
  [52] = 24,
  [53] = 53,
  [54] = 16,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 20,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 29,
  [68] = 22,
  [69] = 69,
  [70] = 70,
  [71] = 60,
  [72] = 72,
  [73] = 73,
  [74] = 14,
  [75] = 23,
  [76] = 76,
  [77] = 7,
  [78] = 78,
  [79] = 79,
  [80] = 27,
  [81] = 28,
  [82] = 82,
  [83] = 24,
  [84] = 84,
  [85] = 62,
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
  [104] = 94,
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
  [116] = 98,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 123,
  [126] = 123,
  [127] = 127,
  [128] = 128,
  [129] = 119,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 124,
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
  [201] = 183,
  [202] = 182,
  [203] = 203,
  [204] = 175,
  [205] = 174,
  [206] = 206,
  [207] = 183,
  [208] = 182,
  [209] = 175,
  [210] = 203,
  [211] = 211,
  [212] = 193,
  [213] = 191,
  [214] = 190,
  [215] = 189,
  [216] = 216,
  [217] = 186,
  [218] = 203,
  [219] = 191,
  [220] = 190,
  [221] = 189,
  [222] = 186,
  [223] = 211,
};

static inline bool sym__Char_character_set_1(int32_t c) {
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

static inline bool sym__Char_character_set_2(int32_t c) {
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
      if (eof) ADVANCE(73);
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '&') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == '1') ADVANCE(108);
      if (lookahead == ';') ADVANCE(122);
      if (lookahead == '<') ADVANCE(93);
      if (lookahead == '=') ADVANCE(106);
      if (lookahead == '>') ADVANCE(92);
      if (lookahead == '?') ADVANCE(110);
      if (lookahead == '[') ADVANCE(89);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == 183 ||
          (768 <= lookahead && lookahead <= 879) ||
          lookahead == 8255 ||
          lookahead == 8256) ADVANCE(113);
      if (lookahead == 0 ||
          lookahead == 65534 ||
          lookahead == 65535) ADVANCE(127);
      if (!sym__Char_character_set_1(lookahead)) ADVANCE(107);
      if (sym__Char_character_set_2(lookahead)) ADVANCE(114);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '&') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(127);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == '1') ADVANCE(10);
      if (lookahead == ';') ADVANCE(122);
      if (lookahead == '<') ADVANCE(94);
      if (lookahead == '=') ADVANCE(106);
      if (lookahead == '>') ADVANCE(92);
      if (lookahead == '?') ADVANCE(12);
      if (lookahead == 'P') ADVANCE(33);
      if (lookahead == 'S') ADVANCE(35);
      if (lookahead == '[') ADVANCE(89);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead == 'v') ADVANCE(45);
      if (lookahead == 'y') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(128);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'D') ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'D') ADVANCE(27);
      if (lookahead == '[') ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '[') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(67);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(97);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(75);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(104);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(142);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(36);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'B') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'C') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'C') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == 'C') ADVANCE(130);
      END_STATE();
    case 21:
      if (lookahead == 'D') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(88);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 'I') ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == 'L') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'M') ADVANCE(129);
      END_STATE();
    case 27:
      if (lookahead == 'O') ADVANCE(19);
      END_STATE();
    case 28:
      if (lookahead == 'P') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == 'S') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'T') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 'T') ADVANCE(15);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(23);
      END_STATE();
    case 33:
      if (lookahead == 'U') ADVANCE(17);
      END_STATE();
    case 34:
      if (lookahead == 'Y') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'Y') ADVANCE(29);
      END_STATE();
    case 36:
      if (lookahead == '[') ADVANCE(103);
      END_STATE();
    case 37:
      if (lookahead == ']') ADVANCE(13);
      END_STATE();
    case 38:
      if (lookahead == ']') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != 0 &&
          lookahead != 65534 &&
          lookahead != 65535) ADVANCE(107);
      END_STATE();
    case 39:
      if (lookahead == ']') ADVANCE(71);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 48:
      if (lookahead == 'g') ADVANCE(81);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 69:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 70:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(141);
      END_STATE();
    case 71:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(105);
      END_STATE();
    case 72:
      if (eof) ADVANCE(73);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '<') ADVANCE(95);
      if (lookahead == '>') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (sym_Name_character_set_1(lookahead)) ADVANCE(116);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT_QMARKxml);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_VersionNum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_VersionNum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_encoding);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_EncName);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(116);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_EncName);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (sym_Name_character_set_2(lookahead)) ADVANCE(116);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_EncName);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_standalone);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LT_BANGDOCTYPE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(13);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == '?') ADVANCE(140);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == '?') ADVANCE(140);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '?') ADVANCE(139);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == '?') ADVANCE(139);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_CharData);
      if (lookahead == '&') ADVANCE(121);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == ']') ADVANCE(101);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_CharData);
      if (lookahead == ']') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_CharData);
      if (lookahead == ']') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<') ADVANCE(100);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_CharData);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != ']') ADVANCE(100);
      if (lookahead == ']') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LT_BANG_LBRACKCDATA_LBRACK);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK_GT);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_CData);
      if (lookahead == ']') ADVANCE(39);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__Char);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__Char);
      if (lookahead == '.') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (sym_Nmtoken_character_set_2(lookahead)) ADVANCE(120);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__Char);
      if (lookahead == '>') ADVANCE(97);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__Char);
      if (lookahead == '>') ADVANCE(75);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__Char);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__Char);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (sym_Nmtoken_character_set_3(lookahead)) ADVANCE(120);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__Char);
      if (sym_Nmtoken_character_set_4(lookahead)) ADVANCE(120);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__Char);
      if (sym_Nmtoken_character_set_4(lookahead)) ADVANCE(116);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__S);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_Name);
      if (sym_Nmtoken_character_set_4(lookahead)) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (sym_Nmtoken_character_set_3(lookahead)) ADVANCE(120);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (sym_Nmtoken_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (sym_Nmtoken_character_set_3(lookahead)) ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (sym_Nmtoken_character_set_4(lookahead)) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '#') ADVANCE(123);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_AMP_POUND);
      if (lookahead == 'x') ADVANCE(125);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_CharRef_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_CharRef_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_AttValue_token1);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_AttValue_token2);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_SYSTEM);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_PUBLIC);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token1);
      if (lookahead == '"') ADVANCE(78);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token2);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token1);
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '%') ||
          ('\'' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token1);
      if (aux_sym_PubidLiteral_token1_character_set_1(lookahead)) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token2);
      if (lookahead == '\'') ADVANCE(77);
      if (aux_sym_PubidLiteral_token2_character_set_1(lookahead)) ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token2);
      if (aux_sym_PubidLiteral_token2_character_set_1(lookahead)) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      if (lookahead == 'x') ADVANCE(53);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_PI_token1);
      if (lookahead == '?') ADVANCE(70);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_Comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 99},
  [3] = {.lex_state = 99},
  [4] = {.lex_state = 99},
  [5] = {.lex_state = 99},
  [6] = {.lex_state = 99},
  [7] = {.lex_state = 99},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 99},
  [11] = {.lex_state = 72},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 99},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 99},
  [17] = {.lex_state = 99},
  [18] = {.lex_state = 99},
  [19] = {.lex_state = 99},
  [20] = {.lex_state = 99},
  [21] = {.lex_state = 72},
  [22] = {.lex_state = 99},
  [23] = {.lex_state = 99},
  [24] = {.lex_state = 99},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 99},
  [27] = {.lex_state = 99},
  [28] = {.lex_state = 99},
  [29] = {.lex_state = 99},
  [30] = {.lex_state = 72},
  [31] = {.lex_state = 72},
  [32] = {.lex_state = 72},
  [33] = {.lex_state = 72},
  [34] = {.lex_state = 72},
  [35] = {.lex_state = 72},
  [36] = {.lex_state = 72},
  [37] = {.lex_state = 72},
  [38] = {.lex_state = 72},
  [39] = {.lex_state = 72},
  [40] = {.lex_state = 72},
  [41] = {.lex_state = 72},
  [42] = {.lex_state = 72},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 72},
  [46] = {.lex_state = 72},
  [47] = {.lex_state = 72},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 72},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 72},
  [53] = {.lex_state = 72},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 72},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 72},
  [59] = {.lex_state = 72},
  [60] = {.lex_state = 72},
  [61] = {.lex_state = 72},
  [62] = {.lex_state = 72},
  [63] = {.lex_state = 72},
  [64] = {.lex_state = 72},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 72},
  [67] = {.lex_state = 72},
  [68] = {.lex_state = 72},
  [69] = {.lex_state = 72},
  [70] = {.lex_state = 72},
  [71] = {.lex_state = 72},
  [72] = {.lex_state = 72},
  [73] = {.lex_state = 72},
  [74] = {.lex_state = 72},
  [75] = {.lex_state = 72},
  [76] = {.lex_state = 72},
  [77] = {.lex_state = 72},
  [78] = {.lex_state = 72},
  [79] = {.lex_state = 72},
  [80] = {.lex_state = 72},
  [81] = {.lex_state = 72},
  [82] = {.lex_state = 72},
  [83] = {.lex_state = 72},
  [84] = {.lex_state = 72},
  [85] = {.lex_state = 72},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 38},
  [88] = {.lex_state = 38},
  [89] = {.lex_state = 38},
  [90] = {.lex_state = 38},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 38},
  [106] = {.lex_state = 38},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 38},
  [111] = {.lex_state = 38},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 38},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 133},
  [133] = {.lex_state = 131},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 137},
  [136] = {.lex_state = 135},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 72},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 38},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 69},
  [180] = {.lex_state = 69},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 141},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 68},
  [190] = {.lex_state = 72},
  [191] = {.lex_state = 72},
  [192] = {.lex_state = 105},
  [193] = {.lex_state = 72},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 72},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 72},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 2},
  [206] = {.lex_state = 2},
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 72},
  [211] = {.lex_state = 72},
  [212] = {.lex_state = 72},
  [213] = {.lex_state = 72},
  [214] = {.lex_state = 72},
  [215] = {.lex_state = 68},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 141},
  [218] = {.lex_state = 72},
  [219] = {.lex_state = 72},
  [220] = {.lex_state = 72},
  [221] = {.lex_state = 68},
  [222] = {.lex_state = 141},
  [223] = {.lex_state = 72},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_QMARKxml] = ACTIONS(1),
    [anon_sym_QMARK_GT] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_VersionNum] = ACTIONS(1),
    [sym_EncName] = ACTIONS(1),
    [anon_sym_LT_BANGDOCTYPE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_LT_BANG_LBRACKCDATA_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym__Char] = ACTIONS(1),
    [sym__S] = ACTIONS(1),
    [sym_Name] = ACTIONS(1),
    [sym_Nmtoken] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_AMP_POUND] = ACTIONS(1),
    [aux_sym_CharRef_token1] = ACTIONS(1),
    [anon_sym_AMP_POUNDx] = ACTIONS(1),
    [aux_sym_CharRef_token2] = ACTIONS(1),
    [aux_sym_AttValue_token1] = ACTIONS(1),
    [aux_sym_AttValue_token2] = ACTIONS(1),
    [anon_sym_LT_QMARK] = ACTIONS(1),
    [sym_Comment] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(199),
    [sym_prolog] = STATE(65),
    [sym_XMLDecl] = STATE(11),
    [sym_doctypedecl] = STATE(34),
    [sym_element] = STATE(32),
    [sym_EmptyElemTag] = STATE(81),
    [sym_STag] = STATE(3),
    [sym_PI] = STATE(31),
    [sym__Misc] = STATE(31),
    [aux_sym_document_repeat1] = STATE(31),
    [anon_sym_LT_QMARKxml] = ACTIONS(3),
    [anon_sym_LT_BANGDOCTYPE] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [sym__S] = ACTIONS(9),
    [anon_sym_LT_QMARK] = ACTIONS(11),
    [sym_Comment] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_LT_SLASH,
    ACTIONS(17), 1,
      sym_CharData,
    ACTIONS(19), 1,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_AMP_POUND,
    ACTIONS(25), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(27), 1,
      anon_sym_LT_QMARK,
    ACTIONS(29), 1,
      sym_Comment,
    STATE(2), 1,
      sym_STag,
    STATE(28), 1,
      sym_EmptyElemTag,
    STATE(29), 1,
      sym_ETag,
    STATE(119), 1,
      sym_content,
    STATE(16), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(4), 5,
      sym_element,
      sym_CDSect,
      sym__Reference,
      sym_PI,
      aux_sym_content_repeat1,
  [51] = 15,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym_CharData,
    ACTIONS(19), 1,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_AMP_POUND,
    ACTIONS(25), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(27), 1,
      anon_sym_LT_QMARK,
    ACTIONS(29), 1,
      sym_Comment,
    ACTIONS(31), 1,
      anon_sym_LT_SLASH,
    STATE(2), 1,
      sym_STag,
    STATE(28), 1,
      sym_EmptyElemTag,
    STATE(67), 1,
      sym_ETag,
    STATE(129), 1,
      sym_content,
    STATE(16), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(4), 5,
      sym_element,
      sym_CDSect,
      sym__Reference,
      sym_PI,
      aux_sym_content_repeat1,
  [102] = 13,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_AMP_POUND,
    ACTIONS(25), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(27), 1,
      anon_sym_LT_QMARK,
    ACTIONS(33), 1,
      anon_sym_LT_SLASH,
    ACTIONS(35), 1,
      sym_CharData,
    ACTIONS(37), 1,
      sym_Comment,
    STATE(2), 1,
      sym_STag,
    STATE(28), 1,
      sym_EmptyElemTag,
    STATE(16), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(5), 5,
      sym_element,
      sym_CDSect,
      sym__Reference,
      sym_PI,
      aux_sym_content_repeat1,
  [147] = 13,
    ACTIONS(39), 1,
      anon_sym_LT,
    ACTIONS(42), 1,
      anon_sym_LT_SLASH,
    ACTIONS(44), 1,
      sym_CharData,
    ACTIONS(47), 1,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
    ACTIONS(50), 1,
      anon_sym_AMP,
    ACTIONS(53), 1,
      anon_sym_AMP_POUND,
    ACTIONS(56), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(59), 1,
      anon_sym_LT_QMARK,
    ACTIONS(62), 1,
      sym_Comment,
    STATE(2), 1,
      sym_STag,
    STATE(28), 1,
      sym_EmptyElemTag,
    STATE(16), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(5), 5,
      sym_element,
      sym_CDSect,
      sym__Reference,
      sym_PI,
      aux_sym_content_repeat1,
  [192] = 2,
    ACTIONS(65), 4,
      anon_sym_LT,
      sym_CharData,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(67), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
  [206] = 2,
    ACTIONS(69), 4,
      anon_sym_LT,
      sym_CharData,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(71), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
  [220] = 7,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_AMP,
    ACTIONS(77), 1,
      anon_sym_AMP_POUND,
    ACTIONS(79), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(81), 1,
      aux_sym_AttValue_token2,
    STATE(12), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(44), 2,
      sym_EntityRef,
      sym_CharRef,
  [244] = 7,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_AMP_POUND,
    ACTIONS(87), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(89), 1,
      aux_sym_AttValue_token1,
    STATE(15), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(54), 2,
      sym_EntityRef,
      sym_CharRef,
  [268] = 2,
    ACTIONS(91), 4,
      anon_sym_LT,
      sym_CharData,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(93), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
  [282] = 6,
    ACTIONS(5), 1,
      anon_sym_LT_BANGDOCTYPE,
    ACTIONS(95), 1,
      anon_sym_LT,
    ACTIONS(99), 1,
      anon_sym_LT_QMARK,
    STATE(40), 1,
      sym_doctypedecl,
    ACTIONS(97), 2,
      sym__S,
      sym_Comment,
    STATE(21), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [304] = 7,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_AMP,
    ACTIONS(106), 1,
      anon_sym_AMP_POUND,
    ACTIONS(109), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(112), 1,
      aux_sym_AttValue_token2,
    STATE(12), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(44), 2,
      sym_EntityRef,
      sym_CharRef,
  [328] = 7,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_AMP_POUND,
    ACTIONS(87), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      aux_sym_AttValue_token1,
    STATE(9), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(54), 2,
      sym_EntityRef,
      sym_CharRef,
  [352] = 2,
    ACTIONS(119), 4,
      anon_sym_LT,
      sym_CharData,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(121), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
  [366] = 7,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_AMP,
    ACTIONS(128), 1,
      anon_sym_AMP_POUND,
    ACTIONS(131), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(134), 1,
      aux_sym_AttValue_token1,
    STATE(15), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(54), 2,
      sym_EntityRef,
      sym_CharRef,
  [390] = 2,
    ACTIONS(137), 4,
      anon_sym_LT,
      sym_CharData,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(139), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
  [404] = 2,
    ACTIONS(141), 4,
      anon_sym_LT,
      sym_CharData,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(143), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
  [418] = 2,
    ACTIONS(145), 4,
      anon_sym_LT,
      sym_CharData,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(147), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
  [432] = 2,
    ACTIONS(149), 4,
      anon_sym_LT,
      sym_CharData,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(151), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
  [446] = 2,
    ACTIONS(153), 4,
      anon_sym_LT,
      sym_CharData,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(155), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
  [460] = 6,
    ACTIONS(5), 1,
      anon_sym_LT_BANGDOCTYPE,
    ACTIONS(99), 1,
      anon_sym_LT_QMARK,
    ACTIONS(157), 1,
      anon_sym_LT,
    STATE(37), 1,
      sym_doctypedecl,
    ACTIONS(159), 2,
      sym__S,
      sym_Comment,
    STATE(30), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [482] = 2,
    ACTIONS(161), 4,
      anon_sym_LT,
      sym_CharData,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(163), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
  [496] = 2,
    ACTIONS(165), 4,
      anon_sym_LT,
      sym_CharData,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(167), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
  [510] = 2,
    ACTIONS(169), 4,
      anon_sym_LT,
      sym_CharData,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(171), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
  [524] = 7,
    ACTIONS(75), 1,
      anon_sym_AMP,
    ACTIONS(77), 1,
      anon_sym_AMP_POUND,
    ACTIONS(79), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      aux_sym_AttValue_token2,
    STATE(8), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(44), 2,
      sym_EntityRef,
      sym_CharRef,
  [548] = 2,
    ACTIONS(175), 4,
      anon_sym_LT,
      sym_CharData,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(177), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
  [562] = 2,
    ACTIONS(179), 4,
      anon_sym_LT,
      sym_CharData,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(181), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
  [576] = 2,
    ACTIONS(183), 4,
      anon_sym_LT,
      sym_CharData,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(185), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
  [590] = 2,
    ACTIONS(187), 4,
      anon_sym_LT,
      sym_CharData,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(189), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      sym_Comment,
  [604] = 5,
    ACTIONS(191), 1,
      anon_sym_LT_BANGDOCTYPE,
    ACTIONS(193), 1,
      anon_sym_LT,
    ACTIONS(198), 1,
      anon_sym_LT_QMARK,
    ACTIONS(195), 2,
      sym__S,
      sym_Comment,
    STATE(30), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [623] = 5,
    ACTIONS(5), 1,
      anon_sym_LT_BANGDOCTYPE,
    ACTIONS(99), 1,
      anon_sym_LT_QMARK,
    STATE(40), 1,
      sym_doctypedecl,
    ACTIONS(159), 2,
      sym__S,
      sym_Comment,
    STATE(30), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [642] = 4,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    ACTIONS(205), 1,
      anon_sym_LT_QMARK,
    ACTIONS(203), 2,
      sym__S,
      sym_Comment,
    STATE(38), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [658] = 4,
    ACTIONS(99), 1,
      anon_sym_LT_QMARK,
    ACTIONS(207), 1,
      anon_sym_LT,
    ACTIONS(159), 2,
      sym__S,
      sym_Comment,
    STATE(30), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [674] = 4,
    ACTIONS(95), 1,
      anon_sym_LT,
    ACTIONS(99), 1,
      anon_sym_LT_QMARK,
    ACTIONS(209), 2,
      sym__S,
      sym_Comment,
    STATE(39), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [690] = 4,
    ACTIONS(205), 1,
      anon_sym_LT_QMARK,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 2,
      sym__S,
      sym_Comment,
    STATE(42), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [706] = 4,
    ACTIONS(99), 1,
      anon_sym_LT_QMARK,
    ACTIONS(215), 1,
      anon_sym_LT,
    ACTIONS(159), 2,
      sym__S,
      sym_Comment,
    STATE(30), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [722] = 4,
    ACTIONS(99), 1,
      anon_sym_LT_QMARK,
    ACTIONS(215), 1,
      anon_sym_LT,
    ACTIONS(217), 2,
      sym__S,
      sym_Comment,
    STATE(33), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [738] = 4,
    ACTIONS(205), 1,
      anon_sym_LT_QMARK,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 2,
      sym__S,
      sym_Comment,
    STATE(42), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [754] = 4,
    ACTIONS(99), 1,
      anon_sym_LT_QMARK,
    ACTIONS(157), 1,
      anon_sym_LT,
    ACTIONS(159), 2,
      sym__S,
      sym_Comment,
    STATE(30), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [770] = 4,
    ACTIONS(99), 1,
      anon_sym_LT_QMARK,
    ACTIONS(157), 1,
      anon_sym_LT,
    ACTIONS(221), 2,
      sym__S,
      sym_Comment,
    STATE(36), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [786] = 4,
    ACTIONS(205), 1,
      anon_sym_LT_QMARK,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    ACTIONS(225), 2,
      sym__S,
      sym_Comment,
    STATE(35), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [802] = 4,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 1,
      anon_sym_LT_QMARK,
    ACTIONS(227), 2,
      sym__S,
      sym_Comment,
    STATE(42), 3,
      sym_PI,
      sym__Misc,
      aux_sym_document_repeat1,
  [818] = 2,
    ACTIONS(65), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(67), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [828] = 2,
    ACTIONS(137), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(139), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [838] = 2,
    ACTIONS(235), 1,
      anon_sym_LT,
    ACTIONS(233), 4,
      anon_sym_LT_BANGDOCTYPE,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [848] = 2,
    ACTIONS(239), 1,
      anon_sym_LT,
    ACTIONS(237), 4,
      anon_sym_LT_BANGDOCTYPE,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [858] = 2,
    ACTIONS(119), 1,
      anon_sym_LT,
    ACTIONS(121), 4,
      anon_sym_LT_BANGDOCTYPE,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [868] = 2,
    ACTIONS(141), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(143), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [878] = 2,
    ACTIONS(65), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(67), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [888] = 2,
    ACTIONS(243), 1,
      anon_sym_LT,
    ACTIONS(241), 4,
      anon_sym_LT_BANGDOCTYPE,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [898] = 2,
    ACTIONS(141), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(143), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [908] = 2,
    ACTIONS(169), 1,
      anon_sym_LT,
    ACTIONS(171), 4,
      anon_sym_LT_BANGDOCTYPE,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [918] = 2,
    ACTIONS(247), 1,
      anon_sym_LT,
    ACTIONS(245), 4,
      anon_sym_LT_BANGDOCTYPE,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [928] = 2,
    ACTIONS(137), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(139), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [938] = 5,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_GT,
    ACTIONS(253), 1,
      anon_sym_SYSTEM,
    ACTIONS(255), 1,
      anon_sym_PUBLIC,
    STATE(102), 1,
      sym_ExternalID,
  [954] = 2,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(259), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [963] = 4,
    ACTIONS(261), 1,
      anon_sym_QMARK_GT,
    ACTIONS(263), 1,
      sym__S,
    STATE(108), 1,
      sym__EncodingDecl,
    STATE(130), 1,
      sym__SDDecl,
  [976] = 1,
    ACTIONS(155), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [983] = 2,
    ACTIONS(265), 1,
      anon_sym_LT,
    ACTIONS(267), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [992] = 4,
    ACTIONS(269), 1,
      anon_sym_GT,
    ACTIONS(271), 1,
      anon_sym_SLASH_GT,
    ACTIONS(273), 1,
      sym_Name,
    STATE(146), 1,
      sym_Attribute,
  [1005] = 2,
    ACTIONS(275), 1,
      anon_sym_LT,
    ACTIONS(277), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1014] = 4,
    ACTIONS(273), 1,
      sym_Name,
    ACTIONS(279), 1,
      anon_sym_GT,
    ACTIONS(281), 1,
      anon_sym_SLASH_GT,
    STATE(146), 1,
      sym_Attribute,
  [1027] = 2,
    ACTIONS(283), 1,
      anon_sym_LT,
    ACTIONS(285), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1036] = 2,
    ACTIONS(287), 1,
      anon_sym_LT,
    ACTIONS(289), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1045] = 4,
    ACTIONS(291), 1,
      anon_sym_LT,
    STATE(3), 1,
      sym_STag,
    STATE(41), 1,
      sym_element,
    STATE(81), 1,
      sym_EmptyElemTag,
  [1058] = 2,
    ACTIONS(293), 1,
      anon_sym_LT,
    ACTIONS(295), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1067] = 1,
    ACTIONS(189), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1074] = 1,
    ACTIONS(163), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1081] = 2,
    ACTIONS(297), 1,
      anon_sym_LT,
    ACTIONS(299), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1090] = 2,
    ACTIONS(301), 1,
      anon_sym_LT,
    ACTIONS(303), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1099] = 4,
    ACTIONS(269), 1,
      anon_sym_GT,
    ACTIONS(273), 1,
      sym_Name,
    ACTIONS(305), 1,
      anon_sym_SLASH_GT,
    STATE(146), 1,
      sym_Attribute,
  [1112] = 2,
    ACTIONS(307), 1,
      anon_sym_LT,
    ACTIONS(309), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1121] = 2,
    ACTIONS(311), 1,
      anon_sym_LT,
    ACTIONS(313), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1130] = 1,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1137] = 1,
    ACTIONS(167), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1144] = 2,
    ACTIONS(315), 1,
      anon_sym_LT,
    ACTIONS(317), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1153] = 1,
    ACTIONS(71), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1160] = 2,
    ACTIONS(319), 1,
      anon_sym_LT,
    ACTIONS(321), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1169] = 2,
    ACTIONS(323), 1,
      anon_sym_LT,
    ACTIONS(325), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1178] = 1,
    ACTIONS(181), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1185] = 1,
    ACTIONS(185), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1192] = 2,
    ACTIONS(327), 1,
      anon_sym_LT,
    ACTIONS(329), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1201] = 1,
    ACTIONS(171), 4,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1208] = 2,
    ACTIONS(331), 1,
      anon_sym_LT,
    ACTIONS(333), 3,
      sym__S,
      anon_sym_LT_QMARK,
      sym_Comment,
  [1217] = 4,
    ACTIONS(273), 1,
      sym_Name,
    ACTIONS(279), 1,
      anon_sym_GT,
    ACTIONS(335), 1,
      anon_sym_SLASH_GT,
    STATE(146), 1,
      sym_Attribute,
  [1230] = 3,
    ACTIONS(337), 1,
      anon_sym_EQ,
    ACTIONS(339), 1,
      sym__S,
    STATE(95), 1,
      sym__Eq,
  [1240] = 3,
    ACTIONS(341), 1,
      anon_sym_RBRACK,
    ACTIONS(343), 1,
      sym__Char,
    STATE(89), 1,
      aux_sym_doctypedecl_repeat1,
  [1250] = 3,
    ACTIONS(343), 1,
      sym__Char,
    ACTIONS(345), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      aux_sym_doctypedecl_repeat1,
  [1260] = 3,
    ACTIONS(343), 1,
      sym__Char,
    ACTIONS(347), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      aux_sym_doctypedecl_repeat1,
  [1270] = 3,
    ACTIONS(343), 1,
      sym__Char,
    ACTIONS(349), 1,
      anon_sym_RBRACK,
    STATE(111), 1,
      aux_sym_doctypedecl_repeat1,
  [1280] = 1,
    ACTIONS(351), 3,
      anon_sym_LBRACK,
      anon_sym_GT,
      sym__S,
  [1286] = 3,
    ACTIONS(353), 1,
      anon_sym_SQUOTE,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_SystemLiteral,
  [1296] = 1,
    ACTIONS(357), 3,
      anon_sym_LBRACK,
      anon_sym_GT,
      sym__S,
  [1302] = 3,
    ACTIONS(279), 1,
      anon_sym_GT,
    ACTIONS(359), 1,
      sym__S,
    STATE(103), 1,
      aux_sym_EmptyElemTag_repeat1,
  [1312] = 3,
    ACTIONS(361), 1,
      anon_sym_SQUOTE,
    ACTIONS(363), 1,
      anon_sym_DQUOTE,
    STATE(121), 1,
      sym_AttValue,
  [1322] = 3,
    ACTIONS(337), 1,
      anon_sym_EQ,
    ACTIONS(339), 1,
      sym__S,
    STATE(118), 1,
      sym__Eq,
  [1332] = 2,
    ACTIONS(367), 1,
      sym__S,
    ACTIONS(365), 2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [1340] = 3,
    ACTIONS(369), 1,
      anon_sym_GT,
    ACTIONS(371), 1,
      sym__S,
    STATE(94), 1,
      aux_sym_EmptyElemTag_repeat1,
  [1350] = 3,
    ACTIONS(373), 1,
      anon_sym_LBRACK,
    ACTIONS(375), 1,
      anon_sym_GT,
    ACTIONS(377), 1,
      sym__S,
  [1360] = 1,
    ACTIONS(379), 3,
      anon_sym_LBRACK,
      anon_sym_GT,
      sym__S,
  [1366] = 3,
    ACTIONS(381), 1,
      anon_sym_QMARK_GT,
    ACTIONS(383), 1,
      anon_sym_encoding,
    ACTIONS(385), 1,
      anon_sym_standalone,
  [1376] = 3,
    ACTIONS(387), 1,
      anon_sym_LBRACK,
    ACTIONS(389), 1,
      anon_sym_GT,
    ACTIONS(391), 1,
      sym__S,
  [1386] = 3,
    ACTIONS(393), 1,
      anon_sym_GT,
    ACTIONS(395), 1,
      sym__S,
    STATE(103), 1,
      aux_sym_EmptyElemTag_repeat1,
  [1396] = 3,
    ACTIONS(279), 1,
      anon_sym_GT,
    ACTIONS(398), 1,
      sym__S,
    STATE(103), 1,
      aux_sym_EmptyElemTag_repeat1,
  [1406] = 3,
    ACTIONS(343), 1,
      sym__Char,
    ACTIONS(400), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      aux_sym_doctypedecl_repeat1,
  [1416] = 3,
    ACTIONS(343), 1,
      sym__Char,
    ACTIONS(402), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      aux_sym_doctypedecl_repeat1,
  [1426] = 1,
    ACTIONS(404), 3,
      anon_sym_LBRACK,
      anon_sym_GT,
      sym__S,
  [1432] = 3,
    ACTIONS(381), 1,
      anon_sym_QMARK_GT,
    ACTIONS(406), 1,
      sym__S,
    STATE(143), 1,
      sym__SDDecl,
  [1442] = 3,
    ACTIONS(337), 1,
      anon_sym_EQ,
    ACTIONS(339), 1,
      sym__S,
    STATE(152), 1,
      sym__Eq,
  [1452] = 3,
    ACTIONS(408), 1,
      anon_sym_RBRACK,
    ACTIONS(410), 1,
      sym__Char,
    STATE(110), 1,
      aux_sym_doctypedecl_repeat1,
  [1462] = 3,
    ACTIONS(343), 1,
      sym__Char,
    ACTIONS(413), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      aux_sym_doctypedecl_repeat1,
  [1472] = 3,
    ACTIONS(353), 1,
      anon_sym_SQUOTE,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    STATE(107), 1,
      sym_SystemLiteral,
  [1482] = 3,
    ACTIONS(415), 1,
      anon_sym_SQUOTE,
    ACTIONS(417), 1,
      anon_sym_DQUOTE,
    STATE(185), 1,
      sym_PubidLiteral,
  [1492] = 3,
    ACTIONS(343), 1,
      sym__Char,
    ACTIONS(419), 1,
      anon_sym_RBRACK,
    STATE(106), 1,
      aux_sym_doctypedecl_repeat1,
  [1502] = 3,
    ACTIONS(337), 1,
      anon_sym_EQ,
    ACTIONS(339), 1,
      sym__S,
    STATE(151), 1,
      sym__Eq,
  [1512] = 3,
    ACTIONS(369), 1,
      anon_sym_GT,
    ACTIONS(421), 1,
      sym__S,
    STATE(104), 1,
      aux_sym_EmptyElemTag_repeat1,
  [1522] = 2,
    ACTIONS(425), 1,
      sym__S,
    ACTIONS(423), 2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [1530] = 2,
    ACTIONS(427), 1,
      anon_sym_SQUOTE,
    ACTIONS(429), 1,
      anon_sym_DQUOTE,
  [1537] = 2,
    ACTIONS(15), 1,
      anon_sym_LT_SLASH,
    STATE(20), 1,
      sym_ETag,
  [1544] = 2,
    ACTIONS(431), 1,
      anon_sym_GT,
    ACTIONS(433), 1,
      sym__S,
  [1551] = 1,
    ACTIONS(435), 2,
      anon_sym_GT,
      sym__S,
  [1556] = 1,
    ACTIONS(437), 2,
      anon_sym_QMARK_GT,
      sym__S,
  [1561] = 2,
    ACTIONS(439), 1,
      anon_sym_QMARK_GT,
    ACTIONS(441), 1,
      sym__S,
  [1568] = 2,
    ACTIONS(443), 1,
      anon_sym_GT,
    ACTIONS(445), 1,
      sym__S,
  [1575] = 2,
    ACTIONS(447), 1,
      anon_sym_QMARK_GT,
    ACTIONS(449), 1,
      sym__S,
  [1582] = 2,
    ACTIONS(451), 1,
      anon_sym_QMARK_GT,
    ACTIONS(453), 1,
      sym__S,
  [1589] = 2,
    ACTIONS(455), 1,
      anon_sym_GT,
    ACTIONS(457), 1,
      sym__S,
  [1596] = 2,
    ACTIONS(431), 1,
      anon_sym_GT,
    ACTIONS(459), 1,
      anon_sym_LBRACK,
  [1603] = 2,
    ACTIONS(31), 1,
      anon_sym_LT_SLASH,
    STATE(58), 1,
      sym_ETag,
  [1610] = 2,
    ACTIONS(381), 1,
      anon_sym_QMARK_GT,
    ACTIONS(461), 1,
      sym__S,
  [1617] = 2,
    ACTIONS(463), 1,
      anon_sym_GT,
    ACTIONS(465), 1,
      sym__S,
  [1624] = 2,
    ACTIONS(467), 1,
      anon_sym_SQUOTE,
    ACTIONS(469), 1,
      aux_sym_SystemLiteral_token2,
  [1631] = 2,
    ACTIONS(467), 1,
      anon_sym_DQUOTE,
    ACTIONS(471), 1,
      aux_sym_SystemLiteral_token1,
  [1638] = 2,
    ACTIONS(473), 1,
      sym__S,
    STATE(57), 1,
      sym__VersionInfo,
  [1645] = 2,
    ACTIONS(475), 1,
      anon_sym_SQUOTE,
    ACTIONS(477), 1,
      aux_sym_PubidLiteral_token2,
  [1652] = 2,
    ACTIONS(475), 1,
      anon_sym_DQUOTE,
    ACTIONS(479), 1,
      aux_sym_PubidLiteral_token1,
  [1659] = 2,
    ACTIONS(481), 1,
      anon_sym_GT,
    ACTIONS(483), 1,
      sym__S,
  [1666] = 2,
    ACTIONS(485), 1,
      anon_sym_GT,
    ACTIONS(487), 1,
      sym__S,
  [1673] = 1,
    ACTIONS(489), 2,
      anon_sym_yes,
      anon_sym_no,
  [1678] = 1,
    ACTIONS(491), 2,
      anon_sym_yes,
      anon_sym_no,
  [1683] = 1,
    ACTIONS(493), 2,
      anon_sym_GT,
      sym__S,
  [1688] = 2,
    ACTIONS(385), 1,
      anon_sym_standalone,
    ACTIONS(495), 1,
      anon_sym_QMARK_GT,
  [1695] = 2,
    ACTIONS(495), 1,
      anon_sym_QMARK_GT,
    ACTIONS(497), 1,
      sym__S,
  [1702] = 1,
    ACTIONS(499), 2,
      anon_sym_QMARK_GT,
      sym__S,
  [1707] = 1,
    ACTIONS(501), 2,
      anon_sym_QMARK_GT,
      sym__S,
  [1712] = 1,
    ACTIONS(393), 2,
      anon_sym_GT,
      sym__S,
  [1717] = 1,
    ACTIONS(365), 2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [1722] = 1,
    ACTIONS(503), 2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [1727] = 2,
    ACTIONS(505), 1,
      anon_sym_GT,
    ACTIONS(507), 1,
      sym__S,
  [1734] = 2,
    ACTIONS(273), 1,
      sym_Name,
    STATE(146), 1,
      sym_Attribute,
  [1741] = 2,
    ACTIONS(509), 1,
      anon_sym_SQUOTE,
    ACTIONS(511), 1,
      anon_sym_DQUOTE,
  [1748] = 2,
    ACTIONS(513), 1,
      anon_sym_SQUOTE,
    ACTIONS(515), 1,
      anon_sym_DQUOTE,
  [1755] = 2,
    ACTIONS(389), 1,
      anon_sym_GT,
    ACTIONS(517), 1,
      sym__S,
  [1762] = 2,
    ACTIONS(519), 1,
      anon_sym_RBRACK,
    ACTIONS(521), 1,
      sym__Char,
  [1769] = 1,
    ACTIONS(523), 2,
      anon_sym_GT,
      sym__S,
  [1774] = 2,
    ACTIONS(525), 1,
      anon_sym_GT,
    ACTIONS(527), 1,
      sym__S,
  [1781] = 2,
    ACTIONS(529), 1,
      anon_sym_GT,
    ACTIONS(531), 1,
      sym__S,
  [1788] = 1,
    ACTIONS(525), 1,
      anon_sym_GT,
  [1792] = 1,
    ACTIONS(533), 1,
      sym__S,
  [1796] = 1,
    ACTIONS(535), 1,
      sym__S,
  [1800] = 1,
    ACTIONS(537), 1,
      anon_sym_DQUOTE,
  [1804] = 1,
    ACTIONS(537), 1,
      anon_sym_SQUOTE,
  [1808] = 1,
    ACTIONS(539), 1,
      sym__S,
  [1812] = 1,
    ACTIONS(541), 1,
      anon_sym_QMARK_GT,
  [1816] = 1,
    ACTIONS(543), 1,
      anon_sym_DQUOTE,
  [1820] = 1,
    ACTIONS(545), 1,
      sym__S,
  [1824] = 1,
    ACTIONS(543), 1,
      anon_sym_SQUOTE,
  [1828] = 1,
    ACTIONS(547), 1,
      sym_VersionNum,
  [1832] = 1,
    ACTIONS(549), 1,
      sym_VersionNum,
  [1836] = 1,
    ACTIONS(551), 1,
      anon_sym_GT,
  [1840] = 1,
    ACTIONS(553), 1,
      anon_sym_GT,
  [1844] = 1,
    ACTIONS(555), 1,
      anon_sym_GT,
  [1848] = 1,
    ACTIONS(557), 1,
      anon_sym_SQUOTE,
  [1852] = 1,
    ACTIONS(559), 1,
      anon_sym_GT,
  [1856] = 1,
    ACTIONS(561), 1,
      anon_sym_QMARK_GT,
  [1860] = 1,
    ACTIONS(563), 1,
      anon_sym_GT,
  [1864] = 1,
    ACTIONS(557), 1,
      anon_sym_DQUOTE,
  [1868] = 1,
    ACTIONS(495), 1,
      anon_sym_QMARK_GT,
  [1872] = 1,
    ACTIONS(565), 1,
      sym_EncName,
  [1876] = 1,
    ACTIONS(567), 1,
      sym_EncName,
  [1880] = 1,
    ACTIONS(569), 1,
      anon_sym_EQ,
  [1884] = 1,
    ACTIONS(571), 1,
      anon_sym_SEMI,
  [1888] = 1,
    ACTIONS(573), 1,
      anon_sym_SEMI,
  [1892] = 1,
    ACTIONS(575), 1,
      anon_sym_RBRACK_RBRACK_GT,
  [1896] = 1,
    ACTIONS(577), 1,
      sym__S,
  [1900] = 1,
    ACTIONS(579), 1,
      aux_sym_PI_token1,
  [1904] = 1,
    ACTIONS(485), 1,
      anon_sym_GT,
  [1908] = 1,
    ACTIONS(581), 1,
      anon_sym_GT,
  [1912] = 1,
    ACTIONS(583), 1,
      aux_sym_CharRef_token2,
  [1916] = 1,
    ACTIONS(583), 1,
      aux_sym_CharRef_token1,
  [1920] = 1,
    ACTIONS(585), 1,
      sym_Name,
  [1924] = 1,
    ACTIONS(587), 1,
      sym_CData,
  [1928] = 1,
    ACTIONS(589), 1,
      sym_Name,
  [1932] = 1,
    ACTIONS(591), 1,
      anon_sym_DQUOTE,
  [1936] = 1,
    ACTIONS(593), 1,
      sym_Name,
  [1940] = 1,
    ACTIONS(595), 1,
      anon_sym_version,
  [1944] = 1,
    ACTIONS(591), 1,
      anon_sym_SQUOTE,
  [1948] = 1,
    ACTIONS(431), 1,
      anon_sym_GT,
  [1952] = 1,
    ACTIONS(597), 1,
      ts_builtin_sym_end,
  [1956] = 1,
    ACTIONS(599), 1,
      anon_sym_DQUOTE,
  [1960] = 1,
    ACTIONS(601), 1,
      anon_sym_SEMI,
  [1964] = 1,
    ACTIONS(603), 1,
      anon_sym_SEMI,
  [1968] = 1,
    ACTIONS(605), 1,
      sym_Name,
  [1972] = 1,
    ACTIONS(607), 1,
      anon_sym_QMARK_GT,
  [1976] = 1,
    ACTIONS(609), 1,
      anon_sym_GT,
  [1980] = 1,
    ACTIONS(599), 1,
      anon_sym_SQUOTE,
  [1984] = 1,
    ACTIONS(611), 1,
      anon_sym_SEMI,
  [1988] = 1,
    ACTIONS(613), 1,
      anon_sym_SEMI,
  [1992] = 1,
    ACTIONS(615), 1,
      anon_sym_QMARK_GT,
  [1996] = 1,
    ACTIONS(617), 1,
      sym_Name,
  [2000] = 1,
    ACTIONS(619), 1,
      sym_Name,
  [2004] = 1,
    ACTIONS(621), 1,
      sym_Name,
  [2008] = 1,
    ACTIONS(623), 1,
      sym_Name,
  [2012] = 1,
    ACTIONS(625), 1,
      aux_sym_CharRef_token1,
  [2016] = 1,
    ACTIONS(625), 1,
      aux_sym_CharRef_token2,
  [2020] = 1,
    ACTIONS(627), 1,
      sym__S,
  [2024] = 1,
    ACTIONS(629), 1,
      aux_sym_PI_token1,
  [2028] = 1,
    ACTIONS(631), 1,
      sym_Name,
  [2032] = 1,
    ACTIONS(633), 1,
      sym_Name,
  [2036] = 1,
    ACTIONS(635), 1,
      aux_sym_CharRef_token1,
  [2040] = 1,
    ACTIONS(635), 1,
      aux_sym_CharRef_token2,
  [2044] = 1,
    ACTIONS(637), 1,
      aux_sym_PI_token1,
  [2048] = 1,
    ACTIONS(639), 1,
      sym_Name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 147,
  [SMALL_STATE(6)] = 192,
  [SMALL_STATE(7)] = 206,
  [SMALL_STATE(8)] = 220,
  [SMALL_STATE(9)] = 244,
  [SMALL_STATE(10)] = 268,
  [SMALL_STATE(11)] = 282,
  [SMALL_STATE(12)] = 304,
  [SMALL_STATE(13)] = 328,
  [SMALL_STATE(14)] = 352,
  [SMALL_STATE(15)] = 366,
  [SMALL_STATE(16)] = 390,
  [SMALL_STATE(17)] = 404,
  [SMALL_STATE(18)] = 418,
  [SMALL_STATE(19)] = 432,
  [SMALL_STATE(20)] = 446,
  [SMALL_STATE(21)] = 460,
  [SMALL_STATE(22)] = 482,
  [SMALL_STATE(23)] = 496,
  [SMALL_STATE(24)] = 510,
  [SMALL_STATE(25)] = 524,
  [SMALL_STATE(26)] = 548,
  [SMALL_STATE(27)] = 562,
  [SMALL_STATE(28)] = 576,
  [SMALL_STATE(29)] = 590,
  [SMALL_STATE(30)] = 604,
  [SMALL_STATE(31)] = 623,
  [SMALL_STATE(32)] = 642,
  [SMALL_STATE(33)] = 658,
  [SMALL_STATE(34)] = 674,
  [SMALL_STATE(35)] = 690,
  [SMALL_STATE(36)] = 706,
  [SMALL_STATE(37)] = 722,
  [SMALL_STATE(38)] = 738,
  [SMALL_STATE(39)] = 754,
  [SMALL_STATE(40)] = 770,
  [SMALL_STATE(41)] = 786,
  [SMALL_STATE(42)] = 802,
  [SMALL_STATE(43)] = 818,
  [SMALL_STATE(44)] = 828,
  [SMALL_STATE(45)] = 838,
  [SMALL_STATE(46)] = 848,
  [SMALL_STATE(47)] = 858,
  [SMALL_STATE(48)] = 868,
  [SMALL_STATE(49)] = 878,
  [SMALL_STATE(50)] = 888,
  [SMALL_STATE(51)] = 898,
  [SMALL_STATE(52)] = 908,
  [SMALL_STATE(53)] = 918,
  [SMALL_STATE(54)] = 928,
  [SMALL_STATE(55)] = 938,
  [SMALL_STATE(56)] = 954,
  [SMALL_STATE(57)] = 963,
  [SMALL_STATE(58)] = 976,
  [SMALL_STATE(59)] = 983,
  [SMALL_STATE(60)] = 992,
  [SMALL_STATE(61)] = 1005,
  [SMALL_STATE(62)] = 1014,
  [SMALL_STATE(63)] = 1027,
  [SMALL_STATE(64)] = 1036,
  [SMALL_STATE(65)] = 1045,
  [SMALL_STATE(66)] = 1058,
  [SMALL_STATE(67)] = 1067,
  [SMALL_STATE(68)] = 1074,
  [SMALL_STATE(69)] = 1081,
  [SMALL_STATE(70)] = 1090,
  [SMALL_STATE(71)] = 1099,
  [SMALL_STATE(72)] = 1112,
  [SMALL_STATE(73)] = 1121,
  [SMALL_STATE(74)] = 1130,
  [SMALL_STATE(75)] = 1137,
  [SMALL_STATE(76)] = 1144,
  [SMALL_STATE(77)] = 1153,
  [SMALL_STATE(78)] = 1160,
  [SMALL_STATE(79)] = 1169,
  [SMALL_STATE(80)] = 1178,
  [SMALL_STATE(81)] = 1185,
  [SMALL_STATE(82)] = 1192,
  [SMALL_STATE(83)] = 1201,
  [SMALL_STATE(84)] = 1208,
  [SMALL_STATE(85)] = 1217,
  [SMALL_STATE(86)] = 1230,
  [SMALL_STATE(87)] = 1240,
  [SMALL_STATE(88)] = 1250,
  [SMALL_STATE(89)] = 1260,
  [SMALL_STATE(90)] = 1270,
  [SMALL_STATE(91)] = 1280,
  [SMALL_STATE(92)] = 1286,
  [SMALL_STATE(93)] = 1296,
  [SMALL_STATE(94)] = 1302,
  [SMALL_STATE(95)] = 1312,
  [SMALL_STATE(96)] = 1322,
  [SMALL_STATE(97)] = 1332,
  [SMALL_STATE(98)] = 1340,
  [SMALL_STATE(99)] = 1350,
  [SMALL_STATE(100)] = 1360,
  [SMALL_STATE(101)] = 1366,
  [SMALL_STATE(102)] = 1376,
  [SMALL_STATE(103)] = 1386,
  [SMALL_STATE(104)] = 1396,
  [SMALL_STATE(105)] = 1406,
  [SMALL_STATE(106)] = 1416,
  [SMALL_STATE(107)] = 1426,
  [SMALL_STATE(108)] = 1432,
  [SMALL_STATE(109)] = 1442,
  [SMALL_STATE(110)] = 1452,
  [SMALL_STATE(111)] = 1462,
  [SMALL_STATE(112)] = 1472,
  [SMALL_STATE(113)] = 1482,
  [SMALL_STATE(114)] = 1492,
  [SMALL_STATE(115)] = 1502,
  [SMALL_STATE(116)] = 1512,
  [SMALL_STATE(117)] = 1522,
  [SMALL_STATE(118)] = 1530,
  [SMALL_STATE(119)] = 1537,
  [SMALL_STATE(120)] = 1544,
  [SMALL_STATE(121)] = 1551,
  [SMALL_STATE(122)] = 1556,
  [SMALL_STATE(123)] = 1561,
  [SMALL_STATE(124)] = 1568,
  [SMALL_STATE(125)] = 1575,
  [SMALL_STATE(126)] = 1582,
  [SMALL_STATE(127)] = 1589,
  [SMALL_STATE(128)] = 1596,
  [SMALL_STATE(129)] = 1603,
  [SMALL_STATE(130)] = 1610,
  [SMALL_STATE(131)] = 1617,
  [SMALL_STATE(132)] = 1624,
  [SMALL_STATE(133)] = 1631,
  [SMALL_STATE(134)] = 1638,
  [SMALL_STATE(135)] = 1645,
  [SMALL_STATE(136)] = 1652,
  [SMALL_STATE(137)] = 1659,
  [SMALL_STATE(138)] = 1666,
  [SMALL_STATE(139)] = 1673,
  [SMALL_STATE(140)] = 1678,
  [SMALL_STATE(141)] = 1683,
  [SMALL_STATE(142)] = 1688,
  [SMALL_STATE(143)] = 1695,
  [SMALL_STATE(144)] = 1702,
  [SMALL_STATE(145)] = 1707,
  [SMALL_STATE(146)] = 1712,
  [SMALL_STATE(147)] = 1717,
  [SMALL_STATE(148)] = 1722,
  [SMALL_STATE(149)] = 1727,
  [SMALL_STATE(150)] = 1734,
  [SMALL_STATE(151)] = 1741,
  [SMALL_STATE(152)] = 1748,
  [SMALL_STATE(153)] = 1755,
  [SMALL_STATE(154)] = 1762,
  [SMALL_STATE(155)] = 1769,
  [SMALL_STATE(156)] = 1774,
  [SMALL_STATE(157)] = 1781,
  [SMALL_STATE(158)] = 1788,
  [SMALL_STATE(159)] = 1792,
  [SMALL_STATE(160)] = 1796,
  [SMALL_STATE(161)] = 1800,
  [SMALL_STATE(162)] = 1804,
  [SMALL_STATE(163)] = 1808,
  [SMALL_STATE(164)] = 1812,
  [SMALL_STATE(165)] = 1816,
  [SMALL_STATE(166)] = 1820,
  [SMALL_STATE(167)] = 1824,
  [SMALL_STATE(168)] = 1828,
  [SMALL_STATE(169)] = 1832,
  [SMALL_STATE(170)] = 1836,
  [SMALL_STATE(171)] = 1840,
  [SMALL_STATE(172)] = 1844,
  [SMALL_STATE(173)] = 1848,
  [SMALL_STATE(174)] = 1852,
  [SMALL_STATE(175)] = 1856,
  [SMALL_STATE(176)] = 1860,
  [SMALL_STATE(177)] = 1864,
  [SMALL_STATE(178)] = 1868,
  [SMALL_STATE(179)] = 1872,
  [SMALL_STATE(180)] = 1876,
  [SMALL_STATE(181)] = 1880,
  [SMALL_STATE(182)] = 1884,
  [SMALL_STATE(183)] = 1888,
  [SMALL_STATE(184)] = 1892,
  [SMALL_STATE(185)] = 1896,
  [SMALL_STATE(186)] = 1900,
  [SMALL_STATE(187)] = 1904,
  [SMALL_STATE(188)] = 1908,
  [SMALL_STATE(189)] = 1912,
  [SMALL_STATE(190)] = 1916,
  [SMALL_STATE(191)] = 1920,
  [SMALL_STATE(192)] = 1924,
  [SMALL_STATE(193)] = 1928,
  [SMALL_STATE(194)] = 1932,
  [SMALL_STATE(195)] = 1936,
  [SMALL_STATE(196)] = 1940,
  [SMALL_STATE(197)] = 1944,
  [SMALL_STATE(198)] = 1948,
  [SMALL_STATE(199)] = 1952,
  [SMALL_STATE(200)] = 1956,
  [SMALL_STATE(201)] = 1960,
  [SMALL_STATE(202)] = 1964,
  [SMALL_STATE(203)] = 1968,
  [SMALL_STATE(204)] = 1972,
  [SMALL_STATE(205)] = 1976,
  [SMALL_STATE(206)] = 1980,
  [SMALL_STATE(207)] = 1984,
  [SMALL_STATE(208)] = 1988,
  [SMALL_STATE(209)] = 1992,
  [SMALL_STATE(210)] = 1996,
  [SMALL_STATE(211)] = 2000,
  [SMALL_STATE(212)] = 2004,
  [SMALL_STATE(213)] = 2008,
  [SMALL_STATE(214)] = 2012,
  [SMALL_STATE(215)] = 2016,
  [SMALL_STATE(216)] = 2020,
  [SMALL_STATE(217)] = 2024,
  [SMALL_STATE(218)] = 2028,
  [SMALL_STATE(219)] = 2032,
  [SMALL_STATE(220)] = 2036,
  [SMALL_STATE(221)] = 2040,
  [SMALL_STATE(222)] = 2044,
  [SMALL_STATE(223)] = 2048,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(223),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(5),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(192),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(191),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(190),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(189),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(218),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(5),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CharRef, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CharRef, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ETag, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ETag, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STag, 5),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STag, 5),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(213),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(214),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(215),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(12),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 5, .production_id = 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 5, .production_id = 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(219),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(220),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(221),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(15),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__Reference, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Reference, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EntityRef, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityRef, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CDSect, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CDSect, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STag, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STag, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EmptyElemTag, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EmptyElemTag, 4),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ETag, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ETag, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 3, .production_id = 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 3, .production_id = 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STag, 4),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STag, 4),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EmptyElemTag, 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EmptyElemTag, 5),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(30),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(203),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, .production_id = 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3, .production_id = 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, .production_id = 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, .production_id = 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(42),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(210),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 6),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 6),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 5),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 5),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 4),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 4),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 9),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 9),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 7),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 7),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 6),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 6),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 7, .production_id = 4),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 7, .production_id = 4),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 11, .production_id = 8),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 11, .production_id = 8),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 4),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 4),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 8, .production_id = 4),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 8, .production_id = 4),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 10, .production_id = 8),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 10, .production_id = 8),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 8),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 8),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 10),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 10),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 10, .production_id = 7),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 10, .production_id = 7),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 8, .production_id = 5),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 8, .production_id = 5),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 9, .production_id = 7),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 9, .production_id = 7),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 5),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 5),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 9, .production_id = 5),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 9, .production_id = 5),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 5),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SystemLiteral, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SystemLiteral, 3, .production_id = 6),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EmptyElemTag_repeat1, 2),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EmptyElemTag_repeat1, 2), SHIFT_REPEAT(150),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctypedecl_repeat1, 2),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_doctypedecl_repeat1, 2), SHIFT_REPEAT(154),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Attribute, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__VersionInfo, 6),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EncodingDecl, 6),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__SDDecl, 6),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doctypedecl_repeat1, 1),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_doctypedecl_repeat1, 1),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 3),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PubidLiteral, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PubidLiteral, 3, .production_id = 6),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [597] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
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
