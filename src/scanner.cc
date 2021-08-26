#include <tree_sitter/parser.h>
#include <vector>
#include <string>
#include <cwctype>

namespace {

using std::vector;
using std::string;

enum TokenType {
  AUTOMATIC_SEMICOLON,
  HEREDOC,
  ENCAPSED_STRING_CHARS,
  ENCAPSED_STRING_CHARS_AFTER_VARIABLE,
  EOF_TOKEN,
  SENTINEL_ERROR, // Unused token used to indicate error recovery mode
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

  void skip(TSLexer *lexer) {
    has_leading_whitespace = true;
    lexer->advance(lexer, true);
  }

  static void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
  }

  bool scan_whitespace(TSLexer *lexer) {
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

  static bool is_valid_name_char(TSLexer *lexer) {
    return iswalpha(lexer->lookahead) || lexer->lookahead == '_';
  }

  static bool is_escapable_sequence(TSLexer *lexer) {
    // Note: remember to also update the escape_sequence rule in the
    // main grammar whenever changing this method
    auto letter = lexer->lookahead;

    if (letter == 'n' ||
        letter == 'r' ||
        letter == 't' ||
        letter == 'v' ||
        letter == 'e' ||
        letter == 'f' ||
        letter == '\\' ||
        letter == '$' ||
        letter == '"') {
      return true;
    }

    // Hex
    if (letter == 'x') {
      advance(lexer);
      return isxdigit(lexer->lookahead);
    }

    // Unicode
    if (letter == 'u') {
      return true; // We handle the case where this is not really an escape sequence in grammar.js - this is needed to support the edge case "\u{$a}" in which case "\u" is to be interprented as characters and {$a} as a variable
    }

    // Octal
    return iswdigit(lexer->lookahead) && lexer->lookahead >= '0' && lexer->lookahead <= '7';
  }

  bool scan_encapsed_part_string(TSLexer *lexer, bool is_after_variable) {
    lexer->result_symbol = ENCAPSED_STRING_CHARS;

    for (bool has_content = false;; has_content = true) {
      lexer->mark_end(lexer);

      switch (lexer->lookahead) {
        case '"':
          return has_content;
        case '\0':
          return false;
        case '\\':
          advance(lexer);

          // \{ should not be interprented as an escape sequence, but both
          // should be consumed as normal characters
          if (lexer->lookahead == '{') {
            advance(lexer);
            break;
          }

          if (is_escapable_sequence(lexer)) {
            return has_content;
          }
          break;
        case '$':
          advance(lexer);

          if (is_valid_name_char(lexer) || lexer->lookahead  == '{') {
            return has_content;
          }
          break;
        case '-':
          if (is_after_variable) {
            advance(lexer);
            if (lexer->lookahead == '>') {
              advance(lexer);
              if (is_valid_name_char(lexer)) {
                return has_content;
              }
              break;
            }
            break;
          }
        case '[':
          if (is_after_variable) {
            return has_content;
          }
          advance(lexer);
          break;
        case '{':
          advance(lexer);
          if (lexer->lookahead == '$') {
            return has_content;
          }
          break;
        default:
          advance(lexer);
      }

      is_after_variable = false;
    }
  }

  string scan_heredoc_word(TSLexer *lexer) {
    string result;
    int32_t quote;

    switch (lexer->lookahead) {
      case '\'':
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

    for (;;) {
      if (position_in_word == heredoc.word.size()) {
        // While PHP requires the heredoc end tag to be the very first on a new line, there may be an
        // arbitrary amount of whitespace before the closing token
        while (lexer->lookahead == ' ') {
          advance(lexer);
        }

        // , and ) is needed to support heredoc in function arguments
        if (lexer->lookahead == ';' || lexer->lookahead == ',' || lexer->lookahead == ')' || lexer->lookahead == '\n' || lexer->lookahead == '\r') {
          open_heredocs.erase(open_heredocs.begin());
          return End;
        }

        position_in_word = 0;
      }
      if (lexer->lookahead == 0) {
        open_heredocs.erase(open_heredocs.begin());
        return Error;
      }

      if (lexer->lookahead == heredoc.word[position_in_word]) {
        advance(lexer);
        position_in_word++;
      } else {
        position_in_word = 0;
        advance(lexer);
      }
    }
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    const bool is_error_recovery = valid_symbols[SENTINEL_ERROR];

    if (is_error_recovery) {
      return false;
    }

    has_leading_whitespace = false;

    lexer->mark_end(lexer);

    if (valid_symbols[ENCAPSED_STRING_CHARS_AFTER_VARIABLE]) {
      return scan_encapsed_part_string(lexer, true);
    }

    if (valid_symbols[ENCAPSED_STRING_CHARS]) {
      return scan_encapsed_part_string(lexer, false);
    }

    if (!scan_whitespace(lexer)) return false;

    if (valid_symbols[EOF_TOKEN] && lexer->eof(lexer)) {
      lexer->result_symbol = EOF_TOKEN;
      return true;
    }


    if (valid_symbols[HEREDOC]) {
      if (lexer->lookahead == '<') {
        advance(lexer);
        if (lexer->lookahead != '<') return false;
        advance(lexer);
        if (lexer->lookahead != '<') return false;
        advance(lexer);

        if (!scan_whitespace(lexer)) return false;

        // Found a heredoc
        Heredoc heredoc;
        heredoc.word = scan_heredoc_word(lexer);
        if (heredoc.word.empty()) return false;
        open_heredocs.push_back(heredoc);

        switch (scan_heredoc_content(lexer)) {
          case Error:
            return false;
          case End:
            lexer->result_symbol = HEREDOC;
            lexer->mark_end(lexer);
            return true;
        }
      }
    }

    if (valid_symbols[AUTOMATIC_SEMICOLON]) {
      lexer->result_symbol = AUTOMATIC_SEMICOLON;

      if (lexer->lookahead != '?') return false;

      advance(lexer);

      return lexer->lookahead == '>';
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

bool tree_sitter_php_external_scanner_scan(void *payload, TSLexer *lexer,
                                                  const bool *valid_symbols) {

  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

void tree_sitter_php_external_scanner_reset(void *p) {}

}
