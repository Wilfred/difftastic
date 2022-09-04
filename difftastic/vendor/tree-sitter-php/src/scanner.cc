#include <tree_sitter/parser.h>
#include <vector>
#include <string>
#include <cwctype>

namespace {

using std::vector;
using std::string;

enum TokenType {
  AUTOMATIC_SEMICOLON,
  ENCAPSED_STRING_CHARS,
  ENCAPSED_STRING_CHARS_AFTER_VARIABLE,
  ENCAPSED_STRING_CHARS_HEREDOC,
  ENCAPSED_STRING_CHARS_AFTER_VARIABLE_HEREDOC,
  EOF_TOKEN,
  HEREDOC_START,
  HEREDOC_END,
  NOWDOC_STRING,
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
    int32_t letter = lexer->lookahead;

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

  bool scan_nowdoc_string(TSLexer *lexer) {
    bool has_consumed_content = false;
    if (open_heredocs.empty()) {
      return false;
    }
      
    // While PHP requires the nowdoc end tag to be the very first on a new line, there may be an
    // arbitrary amount of whitespace before the closing token
    while (iswspace(lexer->lookahead)) {
      advance(lexer);
      has_consumed_content = true;
    }

    string heredoc_tag = open_heredocs.back().word;

    bool end_tag_matched = false;

    for (int i = 0; i < heredoc_tag.length(); i++) {
      if (lexer->lookahead != heredoc_tag[i]) break;
      advance(lexer);
      has_consumed_content = true;

      end_tag_matched = (i == heredoc_tag.length() - 1 && (iswspace(lexer->lookahead) || lexer->lookahead == ';' || lexer->lookahead == ',' || lexer->lookahead == ')'));
    }

    if (end_tag_matched) {
      // There may be an arbitrary amount of white space after the end tag
      while (iswspace(lexer->lookahead) && lexer->lookahead != '\r' && lexer->lookahead != '\n') {
        advance(lexer);
        has_consumed_content = true;
      }

      // Return to allow the end tag parsing if we've encountered an end tag at a valid position
      if (lexer->lookahead == ';' || lexer->lookahead == ',' || lexer->lookahead == ')' || lexer->lookahead == '\n' || lexer->lookahead == '\r') {
        // , and ) is needed to support heredoc in function arguments
        return false;
      }
    }

    for (bool has_content = has_consumed_content;; has_content = true) {
      lexer->mark_end(lexer);

      switch (lexer->lookahead) {
        case '\n':
        case '\r':
          return has_content;
        default:
          if (lexer->eof(lexer)) return false;
          advance(lexer);
      }
    }

    return false;
  }

  bool scan_encapsed_part_string(TSLexer *lexer, bool is_after_variable, bool is_heredoc) {
    bool has_consumed_content = false;

    if (is_heredoc && !open_heredocs.empty()) {
      // While PHP requires the heredoc end tag to be the very first on a new line, there may be an
      // arbitrary amount of whitespace before the closing token
      // However, we should not consume \r or \n
      while (iswspace(lexer->lookahead) && lexer->lookahead != '\r' && lexer->lookahead != '\n') {
        advance(lexer);
        has_consumed_content = true;
      }

      string heredoc_tag = open_heredocs.back().word;

      bool end_tag_matched = false;

      for (int i = 0; i < heredoc_tag.length(); i++) {
        if (lexer->lookahead != heredoc_tag[i]) break;
        has_consumed_content = true;
        advance(lexer);

        end_tag_matched = (i == heredoc_tag.length() - 1 && (iswspace(lexer->lookahead) || lexer->lookahead == ';' || lexer->lookahead == ',' || lexer->lookahead == ')'));
      }

      if (end_tag_matched) {
        // There may be an arbitrary amount of white space after the end tag
        // However, we should not consume \r or \n
        while (iswspace(lexer->lookahead) && lexer->lookahead != '\r' && lexer->lookahead != '\n') {
          advance(lexer);
          has_consumed_content = true;
        }

        // Return to allow the end tag parsing if we've encountered an end tag at a valid position
        if (lexer->lookahead == ';' || lexer->lookahead == ',' || lexer->lookahead == ')' || lexer->lookahead == '\n' || lexer->lookahead == '\r') {
          // , and ) is needed to support heredoc in function arguments
          return false;
        }
      }
    }

    for (bool has_content = has_consumed_content;; has_content = true) {
      lexer->mark_end(lexer);

      switch (lexer->lookahead) {
        case '"':
          if (!is_heredoc) {
            return has_content;
          }
          advance(lexer);
          break;
        case '\n':
        case '\r':
          if (is_heredoc) {
            return has_content;
          }
          advance(lexer);
          break;
        case '\\':
          advance(lexer);

          // \{ should not be interprented as an escape sequence, but both
          // should be consumed as normal characters
          if (lexer->lookahead == '{') {
            advance(lexer);
            break;
          }

          if (is_heredoc && lexer->lookahead == '\\') {
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
          if (lexer->eof(lexer)) return false;
          advance(lexer);
      }

      is_after_variable = false;
    }

    return false;
  }

  string scan_heredoc_word(TSLexer *lexer) {
    string result;

    while (is_valid_name_char(lexer)) {
      result += lexer->lookahead;
      advance(lexer);
    }
  
    return result;
  }


  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    const bool is_error_recovery = valid_symbols[SENTINEL_ERROR];

    if (is_error_recovery) {
      // Consider if we should clear the heredoc list on error
      return false;
    }

    has_leading_whitespace = false;

    lexer->mark_end(lexer);

    if (valid_symbols[ENCAPSED_STRING_CHARS_AFTER_VARIABLE]) {
      lexer->result_symbol = ENCAPSED_STRING_CHARS_AFTER_VARIABLE;
      return scan_encapsed_part_string(lexer, /* is_after_variable */ true, /* is_heredoc */ false);
    }

    if (valid_symbols[ENCAPSED_STRING_CHARS]) {
      lexer->result_symbol = ENCAPSED_STRING_CHARS;
      return scan_encapsed_part_string(lexer, /* is_after_variable */ false, /* is_heredoc */ false);
    }

    if (valid_symbols[ENCAPSED_STRING_CHARS_AFTER_VARIABLE_HEREDOC]) {
      lexer->result_symbol = ENCAPSED_STRING_CHARS_AFTER_VARIABLE_HEREDOC;
      return scan_encapsed_part_string(lexer, /* is_after_variable */ true, /* is_heredoc */ true);
    }

    if (valid_symbols[ENCAPSED_STRING_CHARS_HEREDOC]) {
      lexer->result_symbol = ENCAPSED_STRING_CHARS_HEREDOC;
      return scan_encapsed_part_string(lexer, /* is_after_variable */ false, /* is_heredoc */ true);
    }

    if (valid_symbols[NOWDOC_STRING]) {
      lexer->result_symbol = NOWDOC_STRING;
      return scan_nowdoc_string(lexer);
    }

    if (valid_symbols[HEREDOC_END]) {
      lexer->result_symbol = HEREDOC_END;
      if (open_heredocs.empty()) return false;

      Heredoc heredoc = open_heredocs.back();

      while (iswspace(lexer->lookahead)) {
        advance(lexer);
      }

      if (heredoc.word != scan_heredoc_word(lexer)) {
        return false;
      }

      lexer->mark_end(lexer);
      open_heredocs.pop_back();
      return true;
    }

    if (!scan_whitespace(lexer)) return false;

    if (valid_symbols[EOF_TOKEN] && lexer->eof(lexer)) {
      lexer->result_symbol = EOF_TOKEN;
      return true;
    }


    if (valid_symbols[HEREDOC_START]) {
      lexer->result_symbol = HEREDOC_START;
      Heredoc heredoc;

      while (iswspace(lexer->lookahead)) {
        skip(lexer);
      }

      heredoc.word = scan_heredoc_word(lexer);
      if (heredoc.word.empty()) return false;
      lexer->mark_end(lexer);

      open_heredocs.push_back(heredoc);
      return true;
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
