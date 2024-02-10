#include <tree_sitter/parser.h>

#include <stdlib.h>
#include <regex.h>
#include <wctype.h>
#include <assert.h>
#include <string.h>

// #include <cassert>
// #include <cstring>
// #include <queue>
// #include <regex>
// #include <vector>

// using std::vector;
// using std::memcpy;
// using std::regex;

#define MAX(a, b) ((a) > (b) ? (a) : (b))

#define MIN(a, b) ((a) < (b) ? (a) : (b))

// String related macros
#define STRING_RESIZE(vec, _cap)                                         \
  void *tmp = realloc((vec).data, ((_cap) + 1) * sizeof((vec).data[0])); \
  assert(tmp != NULL);                                                   \
  (vec).data = tmp;                                                      \
  memset((vec).data + (vec).len, 0,                                      \
         (((_cap) + 1) - (vec).len) * sizeof((vec).data[0]));            \
  (vec).cap = (_cap);

#define STRING_GROW(vec, _cap)    \
  if ((vec).cap < (_cap))         \
  {                               \
    STRING_RESIZE((vec), (_cap)); \
  }

#define STRING_PUSH(vec, el)                      \
  if ((vec).cap == (vec).len)                     \
  {                                               \
    STRING_RESIZE((vec), MAX(16, (vec).len * 2)); \
  }                                               \
  (vec).data[(vec).len++] = (el);

#define STRING_FREE(vec)  \
  if ((vec).data != NULL) \
    free((vec).data);     \
  (vec).data = NULL;

#define STRING_CLEAR(vec)                            \
  {                                                  \
    (vec).len = 0;                                   \
    memset((vec).data, 0, (vec).cap * sizeof(char)); \
  }

#define MAX_QUEUE_SIZE 1000

enum TokenType
{
  START_DELIMITER,
  END_DELIMITER,
  STRING_CONTENT,
  STRING_SINGLE_QUOTED_CONTENT,
  STRING_QQ_QUOTED_CONTENT,
  STRING_DOUBLE_QUOTED_CONTENT,
  START_DELIMITER_QW,
  ELEMENT_IN_QW,
  END_DELIMITER_QW,
  START_DELIMITER_REGEX,
  REGEX_PATTERN,
  END_DELIMITER_REGEX,
  START_DELIMITER_SEARCH_REPLACE,
  SEARCH_REPLACE_CONTENT,
  SEPARATOR_DELIMITER_SEARCH_REPLACE,
  END_DELIMITER_SEARCH_REPLACE,
  START_DELIMITER_TRANSLITERATION,
  TRANSLITERATION_CONTENT,
  SEPARATOR_DELIMITER_TRANSLITERATION,
  END_DELIMITER_TRANSLITERATION,
  IMAGINARY_HEREDOC_START,
  HEREDOC_START_IDENTIFIER,
  HEREDOC_CONTENT,
  HEREDOC_END_IDENTIFIER,
  POD_CONTENT,
};

typedef struct
{
  uint32_t cap;
  uint32_t len;
  char *data;
} String;

static String string_new()
{
  return (String){.cap = 16, .len = 0, .data = calloc(1, sizeof(char) * 17)};
}

// START OF --- a array implementation of STRING queue in C
typedef struct
{
  int front, rear, size;
  unsigned capacity;
  String *array;
} Queue;

// function to create a queue
// of given capacity.
// It initializes size of queue as 0
static Queue *createQueue(unsigned capacity)
{
  Queue *queue = malloc(sizeof(Queue));

  queue->capacity = capacity;
  queue->front = queue->size = 0;

  // This is important, see the enqueue
  queue->rear = capacity - 1;
  queue->array = (String *)malloc(queue->capacity * sizeof(String));
  return queue;
}

// Queue is full when size becomes
// equal to the capacity
static int isFull(Queue *queue)
{
  return (queue->size == queue->capacity);
}

// Queue is empty when size is 0
int isEmpty(Queue *queue)
{
  return (queue->size == 0);
}

// Function to add an item to the queue.
// It changes rear and size
static void enqueue(Queue *queue, String item)
{
  if (isFull(queue))
    return;
  queue->rear = (queue->rear + 1) % queue->capacity;
  queue->array[queue->rear] = item;
  queue->size = queue->size + 1;
}

// Function to remove an item from queue.
// It changes front and size
static String dequeue(Queue *queue)
{
  // if (isEmpty(queue))
  //   return NULL;
  String item = queue->array[queue->front];
  queue->front = (queue->front + 1) % queue->capacity;
  queue->size = queue->size - 1;
  return item;
}

// Function to get front of queue
static String front(Queue *queue)
{
  // if (isEmpty(queue))
  //   return CHAR_MIN;
  return queue->array[queue->front];
}

// Function to get rear of queue
static String rear(Queue *queue)
{
  // if (isEmpty(queue))
  //   return CHAR_MIN;
  return queue->array[queue->rear];
}

// END OF --- a array implementation of STRING queue in C

// START OF --- a array implementation of Boolean queue in C
typedef struct
{
  int front, rear, size;
  unsigned capacity;
  bool *array;
} BoolQueue;

// function to create a queue
// of given capacity.
// It initializes size of queue as 0
static BoolQueue *createBoolQueue(unsigned capacity)
{
  BoolQueue *queue = malloc(sizeof(BoolQueue));

  queue->capacity = capacity;
  queue->front = queue->size = 0;

  // This is important, see the enqueue
  queue->rear = capacity - 1;
  queue->array = (bool *)malloc(queue->capacity * sizeof(bool));
  return queue;
}

// BoolQueue is full when size becomes
// equal to the capacity
static int isBoolQueueFull(BoolQueue *queue)
{
  return (queue->size == queue->capacity);
}

// BoolQueue is empty when size is 0
int isBoolQueueEmpty(BoolQueue *queue)
{
  return (queue->size == 0);
}

// Function to add an item to the queue.
// It changes rear and size
static void enqueueBoolQueue(BoolQueue *queue, bool item)
{
  if (isFull(queue))
    return;
  queue->rear = (queue->rear + 1) % queue->capacity;
  queue->array[queue->rear] = item;
  queue->size = queue->size + 1;
}

// Function to remove an item from queue.
// It changes front and size
static bool dequeueBoolQueue(BoolQueue *queue)
{
  if (isEmpty(queue))
    return NULL;
  bool item = queue->array[queue->front];
  queue->front = (queue->front + 1) % queue->capacity;
  queue->size = queue->size - 1;
  return item;
}

// Function to get front of queue
static bool frontBoolQueue(BoolQueue *queue)
{
  // if (isEmpty(queue))
  //   return CHAR_MIN;
  return queue->array[queue->front];
}

// Function to get rear of queue
static bool rearBoolQueue(BoolQueue *queue)
{
  // if (isEmpty(queue))
  //   return CHAR_MIN;
  return queue->array[queue->rear];
}

// END OF --- a array implementation of Boolean queue in C

typedef struct
{
  bool started_heredoc;
  bool started_heredoc_body;
  Queue *heredoc_identifier_queue;
  BoolQueue *heredoc_allows_interpolation;
  BoolQueue *heredoc_allows_indent;
} Heredoc;

static Heredoc heredoc_new()
{
  Heredoc heredoc = {
      .started_heredoc = false,
      .started_heredoc_body = false,
      .heredoc_identifier_queue = createQueue(MAX_QUEUE_SIZE),
      .heredoc_allows_interpolation = createQueue(MAX_QUEUE_SIZE),
      .heredoc_allows_indent = createQueue(MAX_QUEUE_SIZE),
  };
  return heredoc;
}

typedef struct
{
  int32_t start_delimiter_char;
  int32_t end_delimiter_char;
  bool is_separator_delimiter_parsed;
  bool is_delimiter_enclosing; // is the delimiter {}, <> and same character not //, !!
  Heredoc heredoc;
} Scanner;

static void advance(TSLexer *lexer)
{
  lexer->advance(lexer, false);
}

static void skip(TSLexer *lexer)
{
  lexer->advance(lexer, true);
}

int iswspace(wint_t wc);

// runs over spaces like a champ
static void run_over_spaces(TSLexer *lexer)
{
  while (iswspace(lexer->lookahead))
    skip(lexer);
}

// runs with the spaces using advance
static void run_with_spaces(TSLexer *lexer)
{
  while (iswspace(lexer->lookahead))
    advance(lexer);
}

static int32_t get_end_delimiter(Scanner *scanner)
{
  return scanner->end_delimiter_char;
}

static bool handle_interpolation(Scanner *scanner, TSLexer *lexer, enum TokenType surrounding_token)
{
  if (lexer->lookahead == '$')
  {

    // allow $ to be last character in a regex
    if (surrounding_token == SEARCH_REPLACE_CONTENT || surrounding_token == REGEX_PATTERN)
    {
      advance(lexer);
      run_with_spaces(lexer);
      if (lexer->lookahead == get_end_delimiter(scanner))
      {
        lexer->result_symbol = surrounding_token;
        lexer->mark_end(lexer);
        return true;
      }
    }
    return false;
  }

  return false;
}

static bool handle_escape_sequence(TSLexer *lexer, enum TokenType surrounding_token)
{
  // escape sequences, only basic support as of now
  if (lexer->lookahead == '\\')
  {
    advance(lexer);
    // also, self end delimiter will be treated as string
    if (
        lexer->lookahead == 't' || lexer->lookahead == 'n' || lexer->lookahead == 'r' || lexer->lookahead == 'f' || lexer->lookahead == 'b' || lexer->lookahead == 'a' || lexer->lookahead == 'e')
    {
      // advance(lexer);
      lexer->mark_end(lexer);
      return false;
    }
    else
    {
      lexer->result_symbol = surrounding_token;
      advance(lexer);
      lexer->mark_end(lexer);
      return true;
    }
    return false;
  }
  return false;
}

static bool scan_nested_delimiters(Scanner *scanner, TSLexer *lexer, enum TokenType token_type)
{
  while (lexer->lookahead)
  {
    if (lexer->lookahead == get_end_delimiter(scanner))
    {
      lexer->result_symbol = token_type;
      advance(lexer);
      lexer->mark_end(lexer);
      return true;
    }
    else if (lexer->lookahead == scanner->start_delimiter_char)
    {
      lexer->result_symbol = token_type;
      advance(lexer);
      scan_nested_delimiters(scanner, lexer, token_type);
    }
    else if (lexer->lookahead == '\\')
    {
      advance(lexer);
      advance(lexer);
    }
    else
    {
      advance(lexer);
    }
  }
  lexer->mark_end(lexer);
  return false;
}

static bool parse_delimited_and_interpolated_content(Scanner *scanner, TSLexer *lexer, enum TokenType token_type, enum TokenType ending_delimiter)
{
  if (lexer->lookahead == get_end_delimiter(scanner))
  {
    lexer->result_symbol = ending_delimiter;
    advance(lexer);
    lexer->mark_end(lexer);
    return true;
  }
  else
  {
    // oh boy! the interpolation
    if (lexer->lookahead == '$')
    {
      return handle_interpolation(scanner, lexer, token_type);
    }
    // escape sequences, only basic support as of now
    if (lexer->lookahead == '\\')
    {
      return handle_escape_sequence(lexer, token_type);
    }

    if (!lexer->lookahead)
    {
      lexer->mark_end(lexer);
      return false;
    }

    // handling nested delimiters qq { hello { from { the}}};
    if (lexer->lookahead == scanner->start_delimiter_char)
    {
      lexer->result_symbol = token_type;
      advance(lexer);
      return scan_nested_delimiters(scanner, lexer, token_type);
    }

    lexer->result_symbol = token_type;
    advance(lexer);
    lexer->mark_end(lexer);
    return true;
  }

  // shouldn't reach here
  return false;
}

static void set_end_delimiter(Scanner *scanner, int32_t start_delimiter)
{
  // round, angle, square, curly
  scanner->is_delimiter_enclosing = true;
  if (start_delimiter == '(')
  {
    scanner->end_delimiter_char = ')';
  }
  else if (start_delimiter == '<')
  {
    scanner->end_delimiter_char = '>';
  }
  else if (start_delimiter == '[')
  {
    scanner->end_delimiter_char = ']';
  }
  else if (start_delimiter == '{')
  {
    scanner->end_delimiter_char = '}';
  }
  else
  {
    scanner->is_delimiter_enclosing = false;
    scanner->end_delimiter_char = start_delimiter;
  }
}

static bool process_separator_delimiter(Scanner *scanner, TSLexer *lexer, enum TokenType separator_token, enum TokenType end_token)
{
  if (scanner->is_separator_delimiter_parsed)
  {
    lexer->result_symbol = end_token;
    advance(lexer);
    lexer->mark_end(lexer);
    return true;
  }
  else
  {
    lexer->result_symbol = separator_token;
    advance(lexer);
    lexer->mark_end(lexer);

    // if delimiter is {}, (), <>, []
    if (scanner->is_delimiter_enclosing)
    {
      run_over_spaces(lexer);

      if (lexer->lookahead == scanner->start_delimiter_char)
      {
        lexer->result_symbol = separator_token;
        advance(lexer);
        lexer->mark_end(lexer);

        scanner->is_separator_delimiter_parsed = true;

        return true;
      }

      return false;
    }
    else
    {
      scanner->is_separator_delimiter_parsed = true;

      return true;
    }

    return false;
  }
}

// Give a token type, parses the start delimiter,
// and keeps track of it in memory.
static bool parse_start_delimiter(Scanner *scanner, TSLexer *lexer, enum TokenType token_type)
{
  run_over_spaces(lexer);

  scanner->start_delimiter_char = lexer->lookahead;
  set_end_delimiter(scanner, scanner->start_delimiter_char);

  // for substitute and tr/y usecase
  scanner->is_separator_delimiter_parsed = false;

  lexer->result_symbol = token_type;
  advance(lexer);
  lexer->mark_end(lexer);

  return true;
}

/**
 * Consume a "word" in POSIX parlance, and returns it unquoted.
 *
 * This is an approximate implementation that doesn't deal with any
 * POSIX-mandated substitution, and assumes the default value for
 * IFS.
 */
bool advance_word(Scanner *scanner, TSLexer *lexer, String *unquoted_word, bool *allows_interpolation)
{
  bool empty = true;
  bool has_space_before = false;
  *allows_interpolation = true;

  // <<~EOF
  if (lexer->lookahead == '~')
  {
    enqueueBoolQueue(scanner->heredoc.heredoc_allows_indent, true);
    advance(lexer);
  }
  else
  {
    enqueueBoolQueue(scanner->heredoc.heredoc_allows_indent, false);
  }

  // <<\EOF, <<~\EOF
  if (lexer->lookahead == '\\')
  {
    *allows_interpolation = false;
    advance(lexer);
  }

  // run over the spaces
  if (iswspace(lexer->lookahead))
  {
    run_over_spaces(lexer);
    has_space_before = true;
  }

  int32_t quote = 0;
  if (
      lexer->lookahead == '\'' || lexer->lookahead == '"' || lexer->lookahead == '`')
  {
    *allows_interpolation = (lexer->lookahead == '\'') ? false : true;
    quote = lexer->lookahead;
    advance(lexer);
  }
  else if (has_space_before)
  {
    return false;
  }

  regex_t regex;
  // compile the regex expression
  regcomp(&regex, "[a-zA-Z0-9]", 0);
  while (
      lexer->lookahead && !regexec(&regex, (char*)lexer->lookahead, 0, NULL, 0)
      // && std::regex_match(std::string(1, static_cast<char>(lexer->lookahead)), identifier_regex)
      && !(quote ? lexer->lookahead == quote : iswspace(lexer->lookahead)))
  {
    // TODO: check this below condition
    if (lexer->lookahead == '\\')
    {
      advance(lexer);
      if (!lexer->lookahead)
        return false;
    }
    empty = false;
    STRING_PUSH(*unquoted_word, lexer->lookahead);
    advance(lexer);
  }

  // free regex memory
  regfree(&regex);

  if (quote && lexer->lookahead == quote)
  {
    advance(lexer);
  }

  return !empty;
}

bool exit_if_heredoc_end_delimiter(Scanner *scanner, TSLexer *lexer)
{
  String word = string_new();
  // lexer->result_symbol = HEREDOC_END_IDENTIFIER;
  while (!iswspace(lexer->lookahead))
  {
    // printf("string here - %c", lexer->lookahead);
    STRING_PUSH(word, lexer->lookahead);
    advance(lexer);

    if (!lexer->lookahead)
    {
      break;
    }
  }

  if (word.data == front(scanner->heredoc.heredoc_identifier_queue).data)
  {
    // if (1) {
    lexer->result_symbol = HEREDOC_END_IDENTIFIER;
    lexer->mark_end(lexer);

    // unset stuffs
    scanner->heredoc.started_heredoc = false;
    scanner->heredoc.started_heredoc_body = false;
    dequeue(scanner->heredoc.heredoc_identifier_queue);
    dequeue(scanner->heredoc.heredoc_allows_interpolation);
    return true;
  }
  else
  {
    lexer->result_symbol = HEREDOC_CONTENT;
    return true;
  }
}

static inline bool scan(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols)
{
  // on ERROR, external scanner is called with all valid_symbols to be true.
  // so for our usecase we need this logic.
  // ref - https://github.com/tree-sitter/tree-sitter/issues/1128
  if (
      valid_symbols[START_DELIMITER] && valid_symbols[END_DELIMITER] && valid_symbols[STRING_CONTENT] && valid_symbols[STRING_SINGLE_QUOTED_CONTENT] && valid_symbols[STRING_QQ_QUOTED_CONTENT] && valid_symbols[STRING_DOUBLE_QUOTED_CONTENT] && valid_symbols[START_DELIMITER_QW] && valid_symbols[END_DELIMITER_QW] && valid_symbols[START_DELIMITER_REGEX] && valid_symbols[REGEX_PATTERN] && valid_symbols[END_DELIMITER_REGEX] && valid_symbols[START_DELIMITER_SEARCH_REPLACE] && valid_symbols[SEARCH_REPLACE_CONTENT] && valid_symbols[SEPARATOR_DELIMITER_SEARCH_REPLACE] && valid_symbols[END_DELIMITER_SEARCH_REPLACE] && valid_symbols[START_DELIMITER_TRANSLITERATION] && valid_symbols[TRANSLITERATION_CONTENT] && valid_symbols[SEPARATOR_DELIMITER_TRANSLITERATION] && valid_symbols[END_DELIMITER_TRANSLITERATION] && valid_symbols[IMAGINARY_HEREDOC_START] && valid_symbols[HEREDOC_START_IDENTIFIER] && valid_symbols[HEREDOC_CONTENT] && valid_symbols[HEREDOC_END_IDENTIFIER] && valid_symbols[POD_CONTENT])
  {
    return false;
  }

  if (valid_symbols[STRING_SINGLE_QUOTED_CONTENT])
  {

    // end when you reach the final single quote '
    if (lexer->lookahead == '\'')
    {
      lexer->mark_end(lexer);
      advance(lexer);
      return false;
    }
    // check for escaped single quote \'
    else if (lexer->lookahead == '\\')
    {
      lexer->result_symbol = STRING_SINGLE_QUOTED_CONTENT;
      advance(lexer);

      if (lexer->lookahead == '\'')
      {
        advance(lexer);
      }
      lexer->mark_end(lexer);
      return true;
    }

    // some exit conditions
    if (!lexer->lookahead)
    {
      lexer->mark_end(lexer);
      return false;
    }

    lexer->result_symbol = STRING_SINGLE_QUOTED_CONTENT;
    advance(lexer);
    lexer->mark_end(lexer);

    return true;
  }

  // TODO: handle qqqSTRINGq; - this should throw error
  if (valid_symbols[START_DELIMITER])
  {
    return parse_start_delimiter(scanner, lexer, START_DELIMITER);
  }

  if (valid_symbols[STRING_QQ_QUOTED_CONTENT])
  {
    return parse_delimited_and_interpolated_content(scanner, lexer, STRING_QQ_QUOTED_CONTENT, END_DELIMITER);
  }

  if (valid_symbols[STRING_DOUBLE_QUOTED_CONTENT])
  {
    if (lexer->lookahead == '"')
    {
      lexer->mark_end(lexer);
      advance(lexer);
      return false;
    }

    // oh boy! the interpolation
    if (lexer->lookahead == '$')
    {
      return handle_interpolation(scanner, lexer, STRING_DOUBLE_QUOTED_CONTENT);
    }
    // escape sequences, only basic support as of now
    if (lexer->lookahead == '\\')
    {
      return handle_escape_sequence(lexer, STRING_DOUBLE_QUOTED_CONTENT);
    }

    // some exit conditions
    if (!lexer->lookahead)
    {
      lexer->mark_end(lexer);
      return false;
    }

    lexer->result_symbol = STRING_DOUBLE_QUOTED_CONTENT;
    advance(lexer);
    lexer->mark_end(lexer);
    return true;
  }

  if (valid_symbols[START_DELIMITER_QW])
  {
    return parse_start_delimiter(scanner, lexer, START_DELIMITER_QW);
  }

  if (valid_symbols[ELEMENT_IN_QW])
  {
    run_over_spaces(lexer);

    if (lexer->lookahead == get_end_delimiter(scanner))
    {
      lexer->result_symbol = END_DELIMITER_QW;
      advance(lexer);
      lexer->mark_end(lexer);
      return true;
    }

    // exit condition
    if (!lexer->lookahead)
    {
      lexer->mark_end(lexer);
      return false;
    }

    while (
        lexer->lookahead // exit condition
        && lexer->lookahead != ' ' && lexer->lookahead != '\t' && lexer->lookahead != '\r' && lexer->lookahead != '\n' && lexer->lookahead != get_end_delimiter(scanner))
    {
      lexer->result_symbol = ELEMENT_IN_QW;
      advance(lexer);
    }

    lexer->mark_end(lexer);
    return true;
  }

  if (valid_symbols[START_DELIMITER_REGEX])
  {
    return parse_start_delimiter(scanner, lexer, START_DELIMITER_REGEX);
  }
  if (valid_symbols[REGEX_PATTERN])
  {
    return parse_delimited_and_interpolated_content(scanner, lexer, REGEX_PATTERN, END_DELIMITER_REGEX);
  }

  if (valid_symbols[START_DELIMITER_SEARCH_REPLACE])
  {
    return parse_start_delimiter(scanner, lexer, START_DELIMITER_SEARCH_REPLACE);
  }

  if (valid_symbols[SEARCH_REPLACE_CONTENT])
  {
    if (lexer->lookahead == get_end_delimiter(scanner))
    {
      return process_separator_delimiter(scanner, lexer, SEPARATOR_DELIMITER_SEARCH_REPLACE, END_DELIMITER_SEARCH_REPLACE);
    }
    else
    {
      // oh boy! the interpolation
      if (lexer->lookahead == '$')
      {
        return handle_interpolation(scanner, lexer, SEARCH_REPLACE_CONTENT);
      }
      // escape sequences, only basic support as of now
      if (lexer->lookahead == '\\')
      {
        return handle_escape_sequence(lexer, SEARCH_REPLACE_CONTENT);
      }

      // some exit conditions
      if (!lexer->lookahead)
      {
        lexer->mark_end(lexer);
        return false;
      }

      // handling nested delimiters qq { hello { from { the}}};
      if (lexer->lookahead == scanner->start_delimiter_char)
      {
        lexer->result_symbol = SEARCH_REPLACE_CONTENT;
        advance(lexer);
        return scan_nested_delimiters(scanner, lexer, SEARCH_REPLACE_CONTENT);
      }

      lexer->result_symbol = SEARCH_REPLACE_CONTENT;
      advance(lexer);
      return true;
    }
  }

  if (valid_symbols[START_DELIMITER_TRANSLITERATION])
  {
    return parse_start_delimiter(scanner, lexer, START_DELIMITER_TRANSLITERATION);
  }
  if (valid_symbols[TRANSLITERATION_CONTENT])
  {
    if (lexer->lookahead == get_end_delimiter(scanner))
    {
      return process_separator_delimiter(scanner, lexer, SEPARATOR_DELIMITER_TRANSLITERATION, END_DELIMITER_TRANSLITERATION);
    }

    // exit condition
    if (!lexer->lookahead)
    {
      lexer->mark_end(lexer);
      return false;
    }

    // escape sequence
    if (lexer->lookahead == '\\')
    {
      lexer->result_symbol = TRANSLITERATION_CONTENT;
      advance(lexer);
      // self end delimiter
      if (lexer->lookahead == get_end_delimiter(scanner))
      {
        advance(lexer);
      }

      lexer->mark_end(lexer);
      return true;
    }

    // handling nested delimiters qq { hello { from { the}}};
    if (lexer->lookahead == scanner->start_delimiter_char)
    {
      lexer->result_symbol = TRANSLITERATION_CONTENT;
      advance(lexer);
      return scan_nested_delimiters(scanner, lexer, TRANSLITERATION_CONTENT);
    }

    lexer->result_symbol = TRANSLITERATION_CONTENT;
    advance(lexer);
    lexer->mark_end(lexer);
    return true;
  }

  if (valid_symbols[HEREDOC_START_IDENTIFIER])
  {
    lexer->result_symbol = HEREDOC_START_IDENTIFIER;

    String delimiter = string_new();
    bool *allows_interpolation;
    bool found_delimiter = advance_word(scanner, lexer, &delimiter, allows_interpolation);
    if (found_delimiter)
    {
      enqueue(scanner->heredoc.heredoc_identifier_queue, delimiter);
      enqueueBoolQueue(scanner->heredoc.heredoc_allows_interpolation, allows_interpolation);

      scanner->heredoc.started_heredoc = true;
    }

    return found_delimiter;
  }

  if (
      (valid_symbols[HEREDOC_CONTENT] || valid_symbols[IMAGINARY_HEREDOC_START]) && !isBoolQueueEmpty(scanner->heredoc.heredoc_identifier_queue))
  {
    // another exit condition
    if (!lexer->lookahead && !scanner->heredoc.started_heredoc_body)
    {
      return false;
    }

    if (lexer->lookahead == '\n' && !scanner->heredoc.started_heredoc_body)
    {
      scanner->heredoc.started_heredoc_body = true;

      lexer->result_symbol = IMAGINARY_HEREDOC_START;
      lexer->mark_end(lexer);
      return true;
    }

    if (scanner->heredoc.started_heredoc_body)
    {
      switch (lexer->lookahead)
      {
      case '\\':
      {
        if (frontBoolQueue(scanner->heredoc.heredoc_allows_interpolation))
        {
          return handle_escape_sequence(lexer, HEREDOC_CONTENT);
        }
      }

      case '$':
      {
        if (frontBoolQueue(scanner->heredoc.heredoc_allows_interpolation))
        {
          return false;
        }
      }

      case '\n':
      {
        skip(lexer);
        lexer->mark_end(lexer);
        // TODO: validate all possible intended heredocs properly
        if (frontBoolQueue(scanner->heredoc.heredoc_allows_indent))
        {
          while (iswspace(lexer->lookahead))
          {
            advance(lexer);
          }
        }
        return exit_if_heredoc_end_delimiter(scanner, lexer);
      }

      default:
      {
        // exit condition
        if (!lexer->lookahead)
        {
          scanner->heredoc.started_heredoc_body = false;
          lexer->mark_end(lexer);
          return false;
        }
        lexer->result_symbol = HEREDOC_CONTENT;
        advance(lexer);
        return true;
      }
      }
    }
    else
    {
      return false;
    }
  }

  if (valid_symbols[POD_CONTENT])
  {

    while (lexer->lookahead)
    {
      lexer->result_symbol = POD_CONTENT;

      // if it is =cut that marks the end of pod content
      if (lexer->lookahead == '=')
      {
        lexer->advance(lexer, false);
        if (lexer->lookahead == 'c')
        {
          lexer->advance(lexer, false);
          if (lexer->lookahead == 'u')
          {
            lexer->advance(lexer, false);
            if (lexer->lookahead == 't')
            {
              lexer->advance(lexer, false);
              lexer->mark_end(lexer);
              return true;
            }
          }
        }
      }
      else
      {
        lexer->advance(lexer, false);
      }
    }

    // or if it end of the file also, mark the end of pod content
    lexer->mark_end(lexer);
    return true;
  }

  return false;
}

static unsigned serialize(Scanner *scanner, char *buffer)
{
  uint32_t size = 0;

  return size;
}

static void deserialize(Scanner *scanner, const char *buffer, unsigned length)
{
}

void *tree_sitter_perl_external_scanner_create()
{
  Scanner *scanner = malloc(sizeof(Scanner));
  scanner->heredoc = heredoc_new();
  return scanner;
}

unsigned tree_sitter_perl_external_scanner_serialize(
    void *payload,
    char *buffer)
{
  Scanner *scanner = (Scanner *)payload;
  return serialize(scanner, buffer);
}

void tree_sitter_perl_external_scanner_deserialize(
    void *payload,
    const char *buffer,
    unsigned length)
{
  Scanner *scanner = (Scanner *)payload;
  deserialize(scanner, buffer, length); // TODO: need to deserialize heredoc
}

bool tree_sitter_perl_external_scanner_scan(
    void *payload,
    TSLexer *lexer,
    const bool *valid_symbols)
{
  Scanner *scanner = (Scanner *)payload;
  return scan(scanner, lexer, valid_symbols);
}

void tree_sitter_perl_external_scanner_destroy(void *payload)
{
  Scanner *scanner = (Scanner *)payload;
  // for (size_t i = 0; i < scanner->heredocs.len; i++) {
  //     Heredoc *heredoc = &scanner->heredocs.data[i];
  //     STRING_FREE(heredoc->current_leading_word);
  //     STRING_FREE(heredoc->delimiter);
  // }
  // VEC_FREE(scanner->heredocs);
  free(scanner);
}
