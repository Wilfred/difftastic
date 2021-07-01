#include <tree_sitter/parser.h>

#include <cwctype>
#include <string>

#define debug 0
#define print(...) \
  if (debug) printf(__VA_ARGS__)

#define peek() lexer->lookahead

#define next()                       \
  {                                  \
    print("next %s\n", str(peek())); \
    lexer->advance(lexer, false);    \
  }

#define skip()                       \
  {                                  \
    print("skip %s\n", str(peek())); \
    lexer->advance(lexer, true);     \
  }

#define stop()                       \
  {                                  \
    print("stop %s\n", str(peek())); \
    lexer->mark_end(lexer);          \
  }

#define set(symbol)                        \
  {                                        \
    print("set %s\n", TokenTypes[symbol]); \
    lexer->result_symbol = symbol;         \
  }

namespace {

using std::string;

enum TokenType {
  HEREDOC_START,
  HEREDOC_BODY,
  HEREDOC_END,
};

const char *TokenTypes[] = {"HEREDOC_START", "HEREDOC_BODY", "HEREDOC_END"};

static const char *str(int32_t chr) {
  switch (chr) {
    case '\n':
      return "\\n";
    case '\r':
      return "\\r";
    case '\t':
      return "\\t";
    case ' ':
      return "\\s";
    case '\0':
      return "\\0";
    default:
      if (iswspace(chr)) {
        return "\\s";
      }

      string str;
      str += chr;
      return str.c_str();
  }
}

struct Scanner {
  unsigned serialize(char *buffer) {
    if (delimiter.length() + 1 >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) return 0;
    buffer[0] = is_nowdoc;
    buffer[1] = did_start;
    delimiter.copy(&buffer[2], delimiter.length());
    return delimiter.length() + 2;
  }

  void deserialize(const char *buffer, unsigned length) {
    if (length == 0) {
      is_nowdoc = false;
      delimiter.clear();
    } else {
      is_nowdoc = buffer[0];
      did_start = buffer[1];
      delimiter.assign(&buffer[2], &buffer[length]);
    }
  }

  bool scan(TSLexer *lexer, const bool *expected) {
    print("\n> ");
    if (expected[HEREDOC_END]) print("%s ", TokenTypes[HEREDOC_END]);
    if (expected[HEREDOC_BODY]) print("%s ", TokenTypes[HEREDOC_BODY]);
    if (expected[HEREDOC_START]) print("%s ", TokenTypes[HEREDOC_START]);
    print("\n");

    print("peek %s\n", str(peek()));

    if ((expected[HEREDOC_BODY] || expected[HEREDOC_END]) && !delimiter.empty()) {
      if (!did_start) {
        //<<<HEREDOC   \n
        //          ^^^ consume this whitespace
        while (iswspace(peek()) && peek() != '\n') skip();
      }

      if (expected[HEREDOC_END] && scan_end(lexer)) {
        delimiter.clear();
        did_start = false;
        is_nowdoc = false;

        set(HEREDOC_END);
        return true;
      }

      if (expected[HEREDOC_BODY] && scan_body(lexer)) {
        set(HEREDOC_BODY);
        return true;
      }
    }

    if (expected[HEREDOC_START]) {
      if (scan_start(lexer)) {
        did_start = false;
        set(HEREDOC_START);
        return true;
      }
    }

    return false;
  }

  bool scan_start(TSLexer *lexer) {
    print("scan start\n");

    while (iswspace(peek())) skip();

    is_nowdoc = peek() == '\'';
    delimiter.clear();

    int32_t quote = 0;
    if (is_nowdoc || peek() == '"') {
      quote = peek();
      next();
    }

    if (iswalpha(peek()) || peek() == '_') {
      delimiter += peek();
      next();

      while (iswalnum(peek()) || peek() == '_') {
        delimiter += peek();
        next();
      }
    }

    print("del %s\n", delimiter.c_str());

    if (peek() == quote) {
      next();
    } else if (quote != 0) {
      // Opening quote exists, but we found no matching closing quote.
      return false;
    }

    return !delimiter.empty();
  }

  bool scan_end(TSLexer *lexer) {
    print("scan end\n");

    prefix.clear();

    if (peek() == '\n') {
      skip();
      did_start = true;
    } else {
      return false;
    }

    while (
        // Let `prefix` grow one character beyond `delimiter`.
        prefix.length() <= delimiter.length() &&

        // clang-format off
        peek() != ';' &&
        peek() != '\n' &&
        peek() != ',' &&
        peek() != '$'
        // clang-format on
    ) {
      prefix += peek();
      next();
    }

    print("pre %s ?= %s\n", prefix.c_str(), delimiter.c_str());

    return prefix == delimiter;
  }

  bool scan_body(TSLexer *lexer) {
    print("scan body\n");

    if (!did_start) {
      if (peek() == '\n') {
        skip();
      } else {
        return false;
      }

      did_start = true;
    }

    if (!is_nowdoc && prefix.empty()) {
      if (peek() == '{') next();
      if (peek() == '$') return false;
    }

    for (;;) {
      switch (peek()) {
        case '\0': {
          return false;
        }

        case '\\': {
          next();
          next();
          break;
        }

        case '{': {
          if (is_nowdoc) {
            next();
          } else {
            stop();
            next();

            if (peek() == '$') {
              return true;
            }
          }

          break;
        }

        case '$': {
          if (is_nowdoc) {
            next();
          } else {
            stop();
            next();

            if (is_identifier_start_char(peek())) {
              return true;
            }
          }
          break;
        }

        case '\n': {
          stop();

          if (scan_end(lexer)) {
            return true;
          }

          break;
        }

        default: {
          next();
          break;
        }
      }
    }
  }

  // This function returns true if c is a valid starting character of a name/identifier
  bool is_identifier_start_char(int32_t c) {
    return (c == '_') || ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') || (128 <= c && c <= 255);
  }

  string delimiter;
  string prefix;
  bool is_nowdoc;
  bool did_start;
};

}  // namespace

extern "C" {

void *tree_sitter_hack_external_scanner_create() { return new Scanner(); }

bool tree_sitter_hack_external_scanner_scan(void *payload, TSLexer *lexer, const bool *expected) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, expected);
}

unsigned tree_sitter_hack_external_scanner_serialize(void *payload, char *state) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(state);
}

void tree_sitter_hack_external_scanner_deserialize(
    void *payload, const char *state, unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(state, length);
}

void tree_sitter_hack_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}
}
