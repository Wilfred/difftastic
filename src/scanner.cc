#include <tree_sitter/parser.h>

#include <cwctype>
#include <string>

/**
 * Debugging helper macros. Example output:
 *
 * > HEREDOC_START
 * scan_start() <-
 * next E
 * next O
 * next F
 * del EOF
 * set HEREDOC_START
 * stop \n
 * next \n
 * scan_delimiter() <-
 * scan_delimiter() -> false
 * scan_start() -> true
 *
 * > HEREDOC_START_NEWLINE HEREDOC_BODY HEREDOC_END_NEWLINE HEREDOC_END
 * scan_body() <-
 * next \n
 * stop $
 * scan_delimiter() <-
 * scan_delimiter() -> false
 * set HEREDOC_START_NEWLINE
 * scan_body() -> true
 */

#define debug 0

#define print(...) \
  if (debug) printf(__VA_ARGS__)

#define peek() lexer->lookahead

#define next()                       \
  {                                  \
    print("next %s\n", str(peek()).c_str()); \
    lexer->advance(lexer, false);    \
  }

#define skip()                       \
  {                                  \
    print("skip %s\n", str(peek()).c_str()); \
    lexer->advance(lexer, true);     \
  }

#define stop()                       \
  {                                  \
    print("stop %s\n", str(peek()).c_str()); \
    lexer->mark_end(lexer);          \
  }

#define set(symbol)                        \
  {                                        \
    print("set %s\n", TokenTypes[symbol]); \
    lexer->result_symbol = symbol;         \
  }

#define ret(function, result)                                 \
  print("%s() -> %s\n", function, result ? "true" : "false"); \
  return result;

namespace {

using std::string;

enum TokenType {
  HEREDOC_START,
  HEREDOC_START_NEWLINE,
  HEREDOC_BODY,
  HEREDOC_END_NEWLINE,
  HEREDOC_END,
  EMBEDDED_OPENING_BRACE,
};

const char *TokenTypes[] = {
    "HEREDOC_START",           //
    "HEREDOC_START_NEWLINE",   //
    "HEREDOC_BODY",            //
    "HEREDOC_END_NEWLINE",     //
    "HEREDOC_END",             //
    "EMBEDDED_OPENING_BRACE",  //
};

static string str(int32_t chr) {
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
      return str;
  }
}

struct Scanner {
  unsigned serialize(char *buffer) {
    if (delimiter.length() + 2 >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) return 0;
    buffer[0] = is_nowdoc;
    buffer[1] = did_start;
    buffer[2] = did_end;
    delimiter.copy(&buffer[3], delimiter.length());
    return delimiter.length() + 3;
  }

  void deserialize(const char *buffer, unsigned length) {
    if (length == 0) {
      is_nowdoc = false;
      did_start = false;
      did_end = false;
      delimiter.clear();
    } else {
      is_nowdoc = buffer[0];
      did_start = buffer[1];
      did_end = buffer[2];
      delimiter.assign(&buffer[3], &buffer[length]);
    }
  }

  /**
   * Note: if we return false for a scan, variable value changes are overwritten with the values of
   * the last successful scan. https://tree-sitter.github.io/tree-sitter/creating-parsers#serialize
   */
  bool scan(TSLexer *lexer, const bool *expected) {
    print("\n> ");
    if (expected[HEREDOC_START]) print("%s ", TokenTypes[HEREDOC_START]);
    if (expected[HEREDOC_START_NEWLINE]) print("%s ", TokenTypes[HEREDOC_START_NEWLINE]);
    if (expected[HEREDOC_BODY]) print("%s ", TokenTypes[HEREDOC_BODY]);
    if (expected[HEREDOC_END_NEWLINE]) print("%s ", TokenTypes[HEREDOC_END_NEWLINE]);
    if (expected[HEREDOC_END]) print("%s ", TokenTypes[HEREDOC_END]);
    if (expected[EMBEDDED_OPENING_BRACE]) print("%s ", TokenTypes[EMBEDDED_OPENING_BRACE]);
    print("\n");

    if ((expected[HEREDOC_BODY] || expected[HEREDOC_END] || expected[EMBEDDED_OPENING_BRACE]) &&
        !delimiter.empty()) {
      return scan_body(lexer);
    }

    if (expected[HEREDOC_START]) {
      return scan_start(lexer);
    }

    return false;
  }

  bool scan_start(TSLexer *lexer) {
    print("scan_start() <-\n");

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
      ret("scan_start", false);
    }

    // A valid delimiter must end with a newline with no whitespace in between.
    if (peek() != '\n' || delimiter.empty()) {
      return false;
    }

    set(HEREDOC_START);
    stop();
    next();

    if (scan_delimiter(lexer)) {
      if (peek() == ';') next();
      if (peek() == '\n') {
        // <<<EOF\n
        // EOF;  ^^ able to detect did_end
        did_end = true;
      }
    }

    ret("scan_start", true);
  }

  bool scan_delimiter(TSLexer *lexer) {
    print("scan_delimiter() <-\n");
    for (unsigned long index = 0; index < delimiter.length(); index++) {
      if (delimiter[index] == peek()) {
        next();
      } else {
        ret("scan_delimiter", false);
      }
    }
    ret("scan_delimiter", true);
  }

  bool scan_body(TSLexer *lexer) {
    print("scan_body() <-\n");

    bool did_advance = false;

    for (;;) {
      if (peek() == '\0') {
        return false;
      }

      if (peek() == '\\') {
        next();
        next();
        did_advance = true;
        continue;
      }

      if ((peek() == '{' || peek() == '$') && !is_nowdoc) {
        stop();

        if (peek() == '{') {
          next();

          if (peek() == '$' && !did_advance) {
            stop();
            next();

            if (is_identifier_start_char(peek())) {
              set(EMBEDDED_OPENING_BRACE);
              ret("scan_body", true);
            }
          }
        }

        if (peek() == '$') {
          next();

          if (is_identifier_start_char(peek())) {
            set(HEREDOC_BODY);
            ret("scan_body", did_advance);
          }
        }

        did_advance = true;
        continue;
      }

      if (did_end || peek() == '\n') {
        if (did_advance) {
          // <<<EOF
          // x     \n
          // EOF;  ^^ able to detect did_end
          stop();
          next();
        } else if (peek() == '\n') {
          if (did_end) {
            // Detected did_end in a previous HEREDOC_BODY or HEREDOC_START scan. Can skip newline.
            //
            // <<<EOF\n
            // EOF;  ^^ detected did_end during HEREDOC_START scan
            ///
            // <<<EOF
            // x     \n
            // EOF;  ^^ detected did_end during HEREDOC_BODY scan
            skip();
          } else {
            // Did not detect did_end in a previous scan. Newline could be HEREDOC_START_NEWLINE,
            // HEREDOC_BODY, HEREDOC_END_NEWLINE.
            //
            // <<<EOF\n
            // x     ^^ HEREDOC_START_NEWLINE
            // EOF;
            //
            // <<<EOF
            // $variable\n
            // x        ^^ HEREDOC_BODY
            // EOF;
            //
            // <<<EOF
            // $variable\n
            // EOF;     ^^ HEREDOC_END_NEWLINE
            next();
            stop();
          }
        }

        if (scan_delimiter(lexer)) {
          if (!did_advance && did_end) stop();

          if (peek() == ';') next();
          if (peek() == '\n') {
            if (did_advance) {
              set(HEREDOC_BODY);
              did_start = true;
              did_end = true;
            } else if (did_end) {
              set(HEREDOC_END);
              delimiter.clear();
              is_nowdoc = false;
              did_start = false;
              did_end = false;
            } else {
              set(HEREDOC_END_NEWLINE);
              did_start = true;
              did_end = true;
            }
            ret("scan_body", true);
          }
        } else if (!did_start && !did_advance) {
          did_start = true;
          set(HEREDOC_START_NEWLINE);
          ret("scan_body", true);
        }

        did_advance = true;
        continue;
      }

      next();
      did_advance = true;
    }
  }

  // This function returns true if c is a valid starting character of a name/identifier
  bool is_identifier_start_char(int32_t c) {
    return (c == '_') || ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') || (128 <= c && c <= 255);
  }

  string delimiter;
  bool is_nowdoc;
  bool did_start;
  bool did_end;
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
