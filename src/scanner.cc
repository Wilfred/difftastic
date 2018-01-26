#include <tree_sitter/parser.h>
#include <vector>
#include <string>
#include <cwctype>

namespace {

using std::vector;
using std::string;

enum TokenType {
  AUTOMATIC_SEMICOLON,
  LINE_BREAK,
  SIMPLE_HEREDOC_BODY,
  HEREDOC_BODY_BEGINNING,
  HEREDOC_BODY_MIDDLE,
  HEREDOC_BODY_END,
  HEREDOC_BEGINNING,
  SIMPLE_STRING,
  SIMPLE_SYMBOL,
  STRING_MIDDLE,
};

struct Heredoc {
  Heredoc() : end_word_indentation_allowed(false) {}

  string word;
  bool end_word_indentation_allowed;
};

struct Scanner {
  bool has_leading_whitespace;
  vector<Heredoc> open_heredocs;

  Scanner() : has_leading_whitespace(false) {}

  void reset() {
    open_heredocs.clear();
  }

  enum ScanContentResult {
    Error,
    Interpolation,
    End
  };

  unsigned serialize(char *buffer) {
    unsigned i = 0;

    buffer[i++] = open_heredocs.size();
    for (
      vector<Heredoc>::iterator iter = open_heredocs.begin(),
      end = open_heredocs.end();
      iter != end;
      ++iter
    ) {
      if (i + 2 + iter->word.size() >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) return 0;
      buffer[i++] = iter->end_word_indentation_allowed;
      buffer[i++] = iter->word.size();
      iter->word.copy(&buffer[i], iter->word.size());
      i += iter->word.size();
    }

    return i;
  }

  void deserialize(const char *buffer, unsigned length) {
    unsigned i = 0;
    has_leading_whitespace = false;
    open_heredocs.clear();

    if (length == 0) return;

    uint8_t open_heredoc_count = buffer[i++];
    for (unsigned j = 0; j < open_heredoc_count; j++) {
      Heredoc heredoc;
      heredoc.end_word_indentation_allowed = buffer[i++];
      uint8_t word_length = buffer[i++];
      heredoc.word.assign(buffer + i, buffer + i + word_length);
      i += word_length;
      open_heredocs.push_back(heredoc);
    }

    // assert(i == length);
  }

  bool scan_open_delimiter(TSLexer *lexer, const bool *valid_symbols) {
    // TODO: Finish this
    switch (lexer->lookahead) {

    }

    return false;
  }


  ScanContentResult scan_content(TSLexer *lexer) {
    for (;;) {
      if (lexer->lookahead == 0) {
        advance(lexer);
        return Error;
      } else {
        advance(lexer);
      }
    }
  }


  bool scan_interpolation_close(TSLexer *lexer) {
    if (lexer->lookahead == '}') {
      advance(lexer);
      return true;
    } else {
      return false;
    }
  }

  void skip(TSLexer *lexer) {
    has_leading_whitespace = true;
    lexer->advance(lexer, true);
  }

  void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
  }


  bool lookahead_is_line_end(TSLexer *lexer) {
    if (lexer->lookahead == '\n') {
      return true;
    } else if (lexer->lookahead == '\r') {
      skip(lexer);
      if (lexer->lookahead == '\n') {
        return true;
      }
    }

    return false;
  }

  bool scan_whitespace(TSLexer *lexer, const bool *valid_symbols, bool *found_heredoc_starting_linebreak) {
    for (;;) {
      switch (lexer->lookahead) {
        case ' ':
        case '\t':
        case '\r':
          skip(lexer);
          break;
        case '\n':
          if (!open_heredocs.empty() && !*found_heredoc_starting_linebreak) {
            skip(lexer);
            *found_heredoc_starting_linebreak = true;
            return true;
          } else if (valid_symbols[LINE_BREAK]) {
            advance(lexer);
            lexer->mark_end(lexer);
            while (lexer->lookahead == ' ' || lexer->lookahead == '\t' || lookahead_is_line_end(lexer)) { skip(lexer); }
            if (lexer->lookahead == '.') { // Method continuation ignores newline.
              break;
            } else {
              lexer->result_symbol = LINE_BREAK;
              return true;
            }
          } else {
            skip(lexer);
            break;
          }
        case '\\':
          skip(lexer);
          if (lexer->lookahead == '\n' || lexer->lookahead == '\r') {
            skip(lexer);
          }
          break;
        default:
          return true;
      }
    }
  }

  string scan_heredoc_word(TSLexer *lexer) {
    string result;
    int32_t quote;

    switch (lexer->lookahead) {
      case '\'':
      case '"':
      case '`':
        quote = lexer->lookahead;
        advance(lexer);
        while (lexer->lookahead != quote && lexer->lookahead != 0) {
          result += lexer->lookahead;
          advance(lexer);
        }
        advance(lexer);
        break;

      default:
        if (iswalnum(lexer->lookahead) || lexer->lookahead == '_') {
          result += lexer->lookahead;
          advance(lexer);
          while (iswalnum(lexer->lookahead) || lexer->lookahead == '_') {
            result += lexer->lookahead;
            advance(lexer);
          }
        }
        break;
    }

    return result;
  }


  ScanContentResult scan_heredoc_content(TSLexer *lexer) {
    if (open_heredocs.empty()) return Error;
    Heredoc heredoc = open_heredocs.front();
    size_t position_in_word = 0;
    bool look_for_heredoc_end = true;

    for (;;) {
      if (position_in_word == heredoc.word.size()) {
        while (lexer->lookahead == ' ' || lexer->lookahead == '\t') advance(lexer);
        if (lookahead_is_line_end(lexer)) {
          open_heredocs.erase(open_heredocs.begin());
          return End;
        }
      }
      if (lexer->lookahead == 0) {
        open_heredocs.erase(open_heredocs.begin());
        return End;
      }

      if (lexer->lookahead == heredoc.word[position_in_word] && look_for_heredoc_end) {
        advance(lexer);
        position_in_word++;
      } else {
        position_in_word = 0;
        look_for_heredoc_end = false;
        if (lexer->lookahead == '#') {
          advance(lexer);
          if (lexer->lookahead == '{') {
            advance(lexer);
            return Interpolation;
          }
        } else if (lookahead_is_line_end(lexer)) {
          advance(lexer);
          look_for_heredoc_end = true;
          while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
            advance(lexer);
            if (!heredoc.end_word_indentation_allowed) {
              look_for_heredoc_end = false;
            }
          }
        } else {
          advance(lexer);
        }
      }
    }
  }



  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    has_leading_whitespace = false;
    bool found_heredoc_starting_linebreak = false;

    if (!scan_whitespace(lexer, valid_symbols, &found_heredoc_starting_linebreak)) return false;
    if (lexer->result_symbol == LINE_BREAK) return true;

    if (valid_symbols[HEREDOC_BODY_MIDDLE] && !open_heredocs.empty()) {
      if (scan_interpolation_close(lexer)) {
        switch (scan_heredoc_content(lexer)) {
          case Error:
            return false;
          case Interpolation:
            lexer->result_symbol = HEREDOC_BODY_MIDDLE;
            return true;
          case End:
            lexer->result_symbol = HEREDOC_BODY_END;
            return true;
        }
      }
    }

    if (valid_symbols[HEREDOC_BODY_BEGINNING] && !open_heredocs.empty() && found_heredoc_starting_linebreak) {
      switch (scan_heredoc_content(lexer)) {
        case Error:
          return false;
        case Interpolation:
          lexer->result_symbol = HEREDOC_BODY_BEGINNING;
          return true;
        case End:
          lexer->result_symbol = SIMPLE_HEREDOC_BODY;
          return true;
      }
    }

    return false;
  }


};

}

extern "C" {

void *tree_sitter_php_external_scanner_create() {
  return new Scanner();
}

unsigned tree_sitter_php_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(buffer);
}

void tree_sitter_php_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(buffer, length);
}

void tree_sitter_php_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

static inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static bool scan_whitespace_and_comments(TSLexer *lexer) {
  for (;;) {
    while (iswspace(lexer->lookahead)) {
      advance(lexer);
    }

    if (lexer->lookahead == '/') {
      advance(lexer);

      if (lexer->lookahead == '/') {
        advance(lexer);
        while (lexer->lookahead != 0 && lexer->lookahead != '\n') {
          advance(lexer);
        }
      } else {
        return false;
      }
    } else {
      return true;
    }
  }
}

bool tree_sitter_php_external_scanner_scan(void *payload, TSLexer *lexer,
                                                  const bool *valid_symbols) {
  lexer->result_symbol = AUTOMATIC_SEMICOLON;
  // Mark the end of a scanned token.
  lexer->mark_end(lexer);

  if (!scan_whitespace_and_comments(lexer)) return false;
  if (lexer->lookahead != '?') return false;

  advance(lexer);

  return lexer->lookahead == '>';
}

}
