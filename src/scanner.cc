#include <tree_sitter/parser.h>
#include <vector>
#include <string>
#include <cwctype>

namespace {

using std::vector;
using std::string;

enum TokenType {
  AUTOMATIC_SEMICOLON,
};

struct Literal {
  enum Type {
    STRING,
    SYMBOL,
    SUBSHELL,
    REGEX,
    WORD_LIST
  };

  Type type;
  int32_t open_delimiter;
  int32_t close_delimiter;
  uint32_t nesting_depth;
  bool allows_interpolation;
};

struct Heredoc {
  Heredoc() : end_word_indentation_allowed(false) {}

  string word;
  bool end_word_indentation_allowed;
};

struct Scanner {
  bool has_leading_whitespace;
  vector<Literal> literal_stack;
  vector<Heredoc> open_heredocs;

  Scanner() : has_leading_whitespace(false) {}

  void reset() {
    literal_stack.clear();
    open_heredocs.clear();
  }

  unsigned serialize(char *buffer) {
    unsigned i = 0;

    if (literal_stack.size() * 5 + 2 >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) return 0;
    buffer[i++] = literal_stack.size();
    for (
      vector<Literal>::iterator iter = literal_stack.begin(),
      end = literal_stack.end();
      iter != end;
      ++iter
    ) {
      buffer[i++] = iter->type;
      buffer[i++] = iter->open_delimiter;
      buffer[i++] = iter->close_delimiter;
      buffer[i++] = iter->nesting_depth;
      buffer[i++] = iter->allows_interpolation;
    }

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
    literal_stack.clear();
    open_heredocs.clear();

    if (length == 0) return;

    uint8_t literal_depth = buffer[i++];
    for (unsigned j = 0; j < literal_depth; j++) {
      Literal literal;
      literal.type = static_cast<Literal::Type>(buffer[i++]);
      literal.open_delimiter = buffer[i++];
      literal.close_delimiter = buffer[i++];
      literal.nesting_depth = buffer[i++];
      literal.allows_interpolation = buffer[i++];
      literal_stack.push_back(literal);
    }

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
      if (literal_stack.empty()) {
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
    }

    if (valid_symbols[BLOCK_AMPERSAND] && lexer->lookahead == '&') {
      advance(lexer);
      if (lexer->lookahead != '&' && lexer->lookahead != '.' && lexer->lookahead != '=' && lexer->lookahead != ' ' && lexer->lookahead != '\t' && !lookahead_is_line_end(lexer)) {
        lexer->result_symbol = BLOCK_AMPERSAND;
        return true;
      } else {
        return false;
      }
    }

    if (valid_symbols[SINGLETON_CLASS_LEFT_ANGLE_LEFT_ANGLE] && lexer->lookahead == '<') {
      advance(lexer);
      if (lexer->lookahead == '<') {
        advance(lexer);
        lexer->result_symbol = SINGLETON_CLASS_LEFT_ANGLE_LEFT_ANGLE;
        return true;
      } else {
        return false;
      }
    }

    if ((valid_symbols[SPLAT_STAR] || valid_symbols[BINARY_STAR]) && lexer->lookahead == '*') {
      advance(lexer);
      if (lexer->lookahead == '*' || lexer->lookahead == '=') return false;

      if (valid_symbols[SPLAT_STAR] && lexer->lookahead != ' ' && lexer->lookahead != '\t' && !lookahead_is_line_end(lexer)) {
        lexer->result_symbol = SPLAT_STAR;
        return true;
      } else if (valid_symbols[BINARY_STAR]) {
        lexer->result_symbol = BINARY_STAR;
        return true;
      } else if (valid_symbols[SPLAT_STAR]) {
        lexer->result_symbol = SPLAT_STAR;
        return true;
      } else {
        return false;
      }
    }

    if ((valid_symbols[KEYWORD_COLON] || valid_symbols[SCOPE_DOUBLE_COLON]) && lexer->lookahead == ':' && !has_leading_whitespace) {
      advance(lexer);

      if (valid_symbols[SCOPE_DOUBLE_COLON] && lexer->lookahead == ':') {
        advance(lexer);
        if (lexer->lookahead != ' ' && lexer->lookahead != '\t' && lexer->lookahead != '\n' && lexer->lookahead != '\r') {
          lexer->result_symbol = SCOPE_DOUBLE_COLON;
          return true;
        }
      } else if (valid_symbols[KEYWORD_COLON]) {
        lexer->result_symbol = KEYWORD_COLON;
        return true;
      } else {
        return false;
      }
    }

    if (valid_symbols[ARGUMENT_LIST_LEFT_PAREN] && lexer->lookahead == '(' && !has_leading_whitespace) {
      advance(lexer);
      lexer->result_symbol = ARGUMENT_LIST_LEFT_PAREN;
      return true;
    }

    if ((valid_symbols[UNARY_MINUS] || valid_symbols[BINARY_MINUS]) && lexer->lookahead == '-') {
      advance(lexer);
      if (lexer->lookahead != '=' && lexer->lookahead != '>') {
        if (valid_symbols[UNARY_MINUS] && lexer->lookahead != ' ' && lexer->lookahead != '\t') {
          lexer->result_symbol = UNARY_MINUS;
          return true;
        } else if (valid_symbols[BINARY_MINUS]) {
          lexer->result_symbol = BINARY_MINUS;
          return true;
        } else {
          lexer->result_symbol = UNARY_MINUS;
          return true;
        }
      }
    }

    if (valid_symbols[STRING_MIDDLE] && ! literal_stack.empty()) {
      Literal &literal = literal_stack.back();

      if (scan_interpolation_close(lexer)) {
        switch (scan_content(lexer, literal)) {
          case Error:
            return false;
          case Interpolation:
            lexer->result_symbol = STRING_MIDDLE;
            return true;
          case End:
            literal_stack.pop_back();
            lexer->result_symbol = STRING_END;
            return true;
        }
      }
    }

    if (valid_symbols[SIMPLE_STRING] || valid_symbols[SIMPLE_SYMBOL]) {
      Literal literal;

      if (lexer->lookahead == ':' && valid_symbols[SIMPLE_SYMBOL]) {
        literal.type = Literal::SYMBOL;
        advance(lexer);

        switch (lexer->lookahead) {
          case '"':
            literal.open_delimiter = '"';
            literal.close_delimiter = '"';
            literal.nesting_depth = 1;
            literal.allows_interpolation = true;
            advance(lexer);
            break;

          case '\'':
            literal.open_delimiter = '\'';
            literal.close_delimiter = '\'';
            literal.nesting_depth = 1;
            literal.allows_interpolation = false;
            advance(lexer);
            break;

          default:
            if (!scan_symbol_identifier(lexer)) return false;
            lexer->result_symbol = SIMPLE_SYMBOL;
            return true;
        }
      } else if (lexer->lookahead == '<') {
        advance(lexer);
        if (lexer->lookahead != '<') return false;
        advance(lexer);

        Heredoc heredoc;
        if (lexer->lookahead == '-' || lexer->lookahead == '~') {
          advance(lexer);
          heredoc.end_word_indentation_allowed = true;
        }

        heredoc.word = scan_heredoc_word(lexer);
        if (heredoc.word.empty()) return false;
        open_heredocs.push_back(heredoc);
        lexer->result_symbol = HEREDOC_BEGINNING;
        return true;
      } else {
        if (!scan_open_delimiter(lexer, literal, valid_symbols)) return false;
      }

      switch (scan_content(lexer, literal)) {
        case Error:
          return false;
        case Interpolation:
          literal_stack.push_back(literal);
          lexer->result_symbol = BEGINNING_TOKEN_TYPES[literal.type];
          return true;
        case End:
          lexer->result_symbol = SIMPLE_TOKEN_TYPES[literal.type];
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
