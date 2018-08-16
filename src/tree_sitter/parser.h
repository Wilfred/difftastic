#ifndef TREE_SITTER_PARSER_H_
#define TREE_SITTER_PARSER_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

#define ts_builtin_sym_error ((TSSymbol)-1)
#define ts_builtin_sym_end 0
#define TREE_SITTER_SERIALIZATION_BUFFER_SIZE 1024

#ifndef TREE_SITTER_RUNTIME_H_
typedef uint16_t TSSymbol;
typedef struct TSLanguage TSLanguage;
#endif

typedef uint16_t TSStateId;

typedef struct {
  bool visible : 1;
  bool named : 1;
} TSSymbolMetadata;

typedef struct TSLexer TSLexer;

struct TSLexer {
  int32_t lookahead;
  TSSymbol result_symbol;
  void (*advance)(TSLexer *, bool);
  void (*mark_end)(TSLexer *);
  uint32_t (*get_column)(TSLexer *);
  bool (*is_at_included_range_start)(TSLexer *);
};

typedef enum {
  TSParseActionTypeShift,
  TSParseActionTypeReduce,
  TSParseActionTypeAccept,
  TSParseActionTypeRecover,
} TSParseActionType;

typedef struct {
  union {
    struct {
      TSStateId state;
      bool extra : 1;
      bool repetition : 1;
    };
    struct {
      TSSymbol symbol;
      int16_t dynamic_precedence;
      uint8_t child_count;
      uint8_t alias_sequence_id;
    };
  } params;
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
  };
} TSParseActionEntry;

struct TSLanguage {
  uint32_t version;
  uint32_t symbol_count;
  uint32_t alias_count;
  uint32_t token_count;
  uint32_t external_token_count;
  const char **symbol_names;
  const TSSymbolMetadata *symbol_metadata;
  const uint16_t *parse_table;
  const TSParseActionEntry *parse_actions;
  const TSLexMode *lex_modes;
  const TSSymbol *alias_sequences;
  uint16_t max_alias_sequence_length;
  bool (*lex_fn)(TSLexer *, TSStateId);
  bool (*keyword_lex_fn)(TSLexer *, TSStateId);
  TSSymbol keyword_capture_token;
  struct {
    const bool *states;
    const TSSymbol *symbol_map;
    void *(*create)();
    void (*destroy)(void *);
    bool (*scan)(void *, TSLexer *, const bool *symbol_whitelist);
    unsigned (*serialize)(void *, char *);
    void (*deserialize)(void *, const char *, unsigned);
  } external_scanner;
};

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

#define SHIFT(state_value)              \
  {                                     \
    {                                   \
      .type = TSParseActionTypeShift,   \
      .params = {.state = state_value}, \
    }                                   \
  }

#define SHIFT_REPEAT(state_value)     \
  {                                   \
    {                                 \
      .type = TSParseActionTypeShift, \
      .params = {                     \
        .state = state_value,         \
        .repetition = true            \
      },                              \
    }                                 \
  }

#define RECOVER()                        \
  {                                      \
    { .type = TSParseActionTypeRecover } \
  }

#define SHIFT_EXTRA()                 \
  {                                   \
    {                                 \
      .type = TSParseActionTypeShift, \
      .params = {.extra = true}       \
    }                                 \
  }

#define REDUCE(symbol_val, child_count_val, ...) \
  {                                              \
    {                                            \
      .type = TSParseActionTypeReduce,           \
      .params = {                                \
        .symbol = symbol_val,                    \
        .child_count = child_count_val,          \
        __VA_ARGS__                              \
      }                                          \
    }                                            \
  }

#define ACCEPT_INPUT()                  \
  {                                     \
    { .type = TSParseActionTypeAccept } \
  }

#ifdef __cplusplus
}
#endif

#endif  // TREE_SITTER_PARSER_H_
