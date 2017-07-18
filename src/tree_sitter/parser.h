#ifndef TREE_SITTER_PARSER_H_
#define TREE_SITTER_PARSER_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

typedef uint16_t TSSymbol;
typedef uint16_t TSStateId;

#define ts_builtin_sym_error ((TSSymbol)-1)
#define ts_builtin_sym_end 0
#define TREE_SITTER_SERIALIZATION_BUFFER_SIZE 1024

typedef struct {
  bool visible : 1;
  bool named : 1;
  bool extra : 1;
  bool structural : 1;
} TSSymbolMetadata;

typedef struct {
  void (*advance)(void *, bool);
  void (*mark_end)(void *);
  int32_t lookahead;
  TSSymbol result_symbol;
} TSLexer;

typedef enum {
  TSParseActionTypeShift,
  TSParseActionTypeReduce,
  TSParseActionTypeAccept,
  TSParseActionTypeRecover,
} TSParseActionType;

typedef struct {
  union {
    struct {
      TSStateId to_state;
      bool extra : 1;
    };
    struct {
      TSSymbol symbol;
      int16_t dynamic_precedence;
      uint8_t child_count;
      uint8_t rename_sequence_id : 7;
      bool fragile : 1;
    };
  };
  TSParseActionType type : 4;
} TSParseAction;

typedef struct {
  uint16_t lex_state;
  uint16_t external_lex_state;
} TSLexMode;

typedef union {
  TSParseAction action;
  struct {
    uint8_t count;
    bool reusable : 1;
    bool depends_on_lookahead : 1;
  };
} TSParseActionEntry;

typedef struct TSLanguage {
  uint32_t version;
  uint32_t symbol_count;
  uint32_t rename_symbol_count;
  uint32_t token_count;
  uint32_t external_token_count;
  const char **symbol_names;
  const TSSymbolMetadata *symbol_metadata;
  const uint16_t *parse_table;
  const TSParseActionEntry *parse_actions;
  const TSLexMode *lex_modes;
  const TSSymbol *rename_sequences;
  uint16_t max_rename_sequence_length;
  bool (*lex_fn)(TSLexer *, TSStateId);
  struct {
    const bool *states;
    const TSSymbol *symbol_map;
    void *(*create)();
    void (*destroy)(void *);
    bool (*scan)(void *, TSLexer *, const bool *symbol_whitelist);
    unsigned (*serialize)(void *, char *);
    void (*deserialize)(void *, const char *, unsigned);
  } external_scanner;
} TSLanguage;

/*
 *  Lexer Macros
 */

#define START_LEXER()           \
  bool result = false;          \
  int32_t lookahead;            \
  next_state:                   \
  lookahead = lexer->lookahead;

#define ADVANCE(state_value)      \
  {                               \
    lexer->advance(lexer, false); \
    state = state_value;          \
    goto next_state;              \
  }

#define SKIP(state_value)        \
  {                              \
    lexer->advance(lexer, true); \
    state = state_value;         \
    goto next_state;             \
  }

#define ACCEPT_TOKEN(symbol_value)     \
  result = true;                       \
  lexer->result_symbol = symbol_value; \
  lexer->mark_end(lexer);

#define END_STATE() return result;

/*
 *  Parse Table Macros
 */

#define STATE(id) id
#define ACTIONS(id) id

#define SHIFT(to_state_value)         \
  {                                   \
    {                                 \
      .type = TSParseActionTypeShift, \
      .to_state = to_state_value,     \
    }                                 \
  }

#define RECOVER(to_state_value)         \
  {                                     \
    {                                   \
      .type = TSParseActionTypeRecover, \
      .to_state = to_state_value        \
    }                                   \
  }

#define SHIFT_EXTRA()                 \
  {                                   \
    {                                 \
      .type = TSParseActionTypeShift, \
      .extra = true                   \
    }                                 \
  }

#define REDUCE(symbol_val, child_count_val, ...) \
  {                                              \
    {                                            \
      .type = TSParseActionTypeReduce,           \
      .symbol = symbol_val,                      \
      .child_count = child_count_val,            \
      __VA_ARGS__                                \
    }                                            \
  }

#define ACCEPT_INPUT()                  \
  {                                     \
    { .type = TSParseActionTypeAccept } \
  }

#define GET_LANGUAGE(...)                                      \
  static TSLanguage language = {                               \
    .version = LANGUAGE_VERSION,                               \
    .symbol_count = SYMBOL_COUNT,                              \
    .rename_symbol_count = RENAME_SYMBOL_COUNT,                \
    .token_count = TOKEN_COUNT,                                \
    .symbol_metadata = ts_symbol_metadata,                     \
    .parse_table = (const unsigned short *)ts_parse_table,     \
    .parse_actions = ts_parse_actions,                         \
    .lex_modes = ts_lex_modes,                                 \
    .symbol_names = ts_symbol_names,                           \
    .rename_sequences = (const TSSymbol *)ts_rename_sequences, \
    .max_rename_sequence_length = MAX_RENAME_SEQUENCE_LENGTH,  \
    .lex_fn = ts_lex,                                          \
    .external_token_count = EXTERNAL_TOKEN_COUNT,              \
    .external_scanner = {__VA_ARGS__}                          \
  };                                                           \
  return &language                                             \

#ifdef __cplusplus
}
#endif

#endif  // TREE_SITTER_PARSER_H_
