#include <tree_sitter/parser.h>
#include <vector>
#include <string>
#include <cwctype>
#include <cstring>

namespace {

using std::vector;
using std::string;

enum TokenType {
  SIMPLE_STRING,
  SIMPLE_SYMBOL,
  SIMPLE_SUBSHELL,
  SIMPLE_REGEX,
  SIMPLE_WORD_LIST,
  SIMPLE_HEREDOC_BODY,
  STRING_BEGINNING,
  SYMBOL_BEGINNING,
  SUBSHELL_BEGINNING,
  REGEX_BEGINNING,
  WORD_LIST_BEGINNING,
  HEREDOC_BODY_BEGINNING,
  STRING_MIDDLE,
  HEREDOC_BODY_MIDDLE,
  STRING_END,
  HEREDOC_BODY_END,
  HEREDOC_BEGINNING,
  LINE_BREAK,
  FORWARD_SLASH,
  ELEMENT_REFERENCE_LEFT_BRACKET,
  BLOCK_AMPERSAND,
  SPLAT_STAR,
  ARGUMENT_LIST_LEFT_PAREN,
  SCOPE_DOUBLE_COLON,
  KEYWORD_COLON,
  UNARY_MINUS,
  BINARY_MINUS,
  BINARY_STAR,
  SINGLETON_CLASS_LEFT_ANGLE_LEFT_ANGLE,
  IDENTIFIER_HASH_KEY
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

TokenType BEGINNING_TOKEN_TYPES[] = {
  STRING_BEGINNING,
  SYMBOL_BEGINNING,
  SUBSHELL_BEGINNING,
  REGEX_BEGINNING,
  WORD_LIST_BEGINNING,
};

TokenType SIMPLE_TOKEN_TYPES[] = {
  SIMPLE_STRING,
  SIMPLE_SYMBOL,
  SIMPLE_SUBSHELL,
  SIMPLE_REGEX,
  SIMPLE_WORD_LIST,
};

const char NON_IDENTIFIER_CHARS[] = {
  '\0',
  '\n',
  '\r',
  '\t',
  ' ',
  ':',
  ';',
  '`',
  '"',
  '\'',
  '@',
  '$',
  '#',
  '.',
  ',',
  '|',
  '^',
  '&',
  '<',
  '=',
  '>',
  '+',
  '-',
  '*',
  '/',
  '\\',
  '%',
  '?',
  '!',
  '~',
  '(',
  ')',
  '[',
  ']',
  '{',
  '}',
};

struct Scanner {
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
      if (valid_symbols[LINE_BREAK] && lexer->is_at_included_range_start(lexer)) {
        lexer->mark_end(lexer);
        lexer->result_symbol = LINE_BREAK;
        return true;
      }

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
          }
          break;
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

  bool scan_operator(TSLexer *lexer) {
    switch(lexer->lookahead) {
      // <, <=, <<, <=>
      case '<':
        advance(lexer);
        if (lexer->lookahead == '<') advance(lexer);
        else if (lexer->lookahead == '=') {
          advance(lexer);
          if (lexer->lookahead == '>') advance(lexer);
        }
        return true;

      // >, >=, >>
      case '>':
        advance(lexer);
        if (lexer->lookahead == '>') advance(lexer);
        else if (lexer->lookahead == '=') advance(lexer);
        return true;

      // ==, ===, =~
      case '=':
        advance(lexer);
        if (lexer->lookahead == '~') {
          advance(lexer);
          return true;
        } else if (lexer->lookahead == '=') {
          advance(lexer);
          if (lexer->lookahead == '=') advance(lexer);
          return true;
        }
        return false;

      // +, -, +@, -@
      case '+':
      case '-':
        advance(lexer);
        if (lexer->lookahead == '@') advance(lexer);
        return true;

      // ..
      case '.':
        advance(lexer);
        if (lexer->lookahead == '.') {
          advance(lexer);
          return true;
        }
        return false;

      // &, ^, |, ~, /, %, !,`
      case '&':
      case '^':
      case '|':
      case '~':
      case '/':
      case '%':
      case '!':
      case '`':
        advance(lexer);
        return true;

      // *, **
      case '*':
        advance(lexer);
        if (lexer->lookahead == '*') advance(lexer);
        return true;

      // [], []=
      case '[':
        advance(lexer);
        if (lexer->lookahead == ']') advance(lexer);
        else return false;
        if (lexer->lookahead == '=') advance(lexer);
        return true;

      default:
        return false;
    }
  }

  bool is_iden_char(char c) {
    return memchr(&NON_IDENTIFIER_CHARS, c, sizeof(NON_IDENTIFIER_CHARS)) == NULL;
  }

  bool scan_symbol_identifier(TSLexer *lexer) {
    if (lexer->lookahead == '@') {
      advance(lexer);
      if (lexer->lookahead == '@') {
        advance(lexer);
      }
    } else if (lexer->lookahead == '$') {
      advance(lexer);
    }

    if (is_iden_char(lexer->lookahead)) {
      advance(lexer);
    } else if (!scan_operator(lexer)) {
      return false;
    }

    while (is_iden_char(lexer->lookahead)) {
      advance(lexer);
    }

    if (lexer->lookahead == '?' || lexer->lookahead == '!') {
      advance(lexer);
    }

    if (lexer->lookahead == '=') {
      lexer->mark_end(lexer);
      advance(lexer);
      if (lexer->lookahead != '>') {
        lexer->mark_end(lexer);
      }
    }

    return true;
  }

  bool scan_open_delimiter(TSLexer *lexer, Literal &literal, const bool *valid_symbols) {
    switch (lexer->lookahead) {
      case '"':
        literal.type = Literal::STRING;
        literal.open_delimiter = literal.close_delimiter = lexer->lookahead;
        literal.nesting_depth = 1;
        literal.allows_interpolation = true;
        advance(lexer);
        return true;

      case '\'':
        literal.type = Literal::STRING;
        literal.open_delimiter = literal.close_delimiter = lexer->lookahead;
        literal.nesting_depth = 1;
        literal.allows_interpolation = false;
        advance(lexer);
        return true;

      case '`':
        if (!valid_symbols[SIMPLE_SUBSHELL]) return false;
        literal.type = Literal::SUBSHELL;
        literal.open_delimiter = literal.close_delimiter = lexer->lookahead;
        literal.nesting_depth = 1;
        literal.allows_interpolation = true;
        advance(lexer);
        return true;

      case '/':
        if (!valid_symbols[SIMPLE_REGEX]) return false;
        literal.type = Literal::REGEX;
        literal.open_delimiter = literal.close_delimiter = lexer->lookahead;
        literal.nesting_depth = 1;
        literal.allows_interpolation = true;
        advance(lexer);
        if (valid_symbols[FORWARD_SLASH]) {
          if (!has_leading_whitespace) return false;
          if (lexer->lookahead == ' ' || lexer->lookahead == '\t') return false;
          if (lexer->lookahead == '=') return false;
        }
        return true;

      case '%':
        advance(lexer);

        switch (lexer->lookahead) {
          case 's':
            if (!valid_symbols[SIMPLE_SYMBOL]) return false;
            literal.type = Literal::SYMBOL;
            literal.allows_interpolation = false;
            advance(lexer);
            break;

          case 'r':
            if (!valid_symbols[SIMPLE_REGEX]) return false;
            literal.type = Literal::REGEX;
            literal.allows_interpolation = true;
            advance(lexer);
            break;

          case 'x':
            if (!valid_symbols[SIMPLE_SUBSHELL]) return false;
            literal.type = Literal::SUBSHELL;
            literal.allows_interpolation = true;
            advance(lexer);
            break;

          case 'q':
            if (!valid_symbols[SIMPLE_STRING]) return false;
            literal.type = Literal::STRING;
            literal.allows_interpolation = false;
            advance(lexer);
            break;

          case 'Q':
            if (!valid_symbols[SIMPLE_STRING]) return false;
            literal.type = Literal::STRING;
            literal.allows_interpolation = true;
            advance(lexer);
            break;

          case 'w':
          case 'i':
            if (!valid_symbols[SIMPLE_WORD_LIST]) return false;
            literal.type = Literal::WORD_LIST;
            literal.allows_interpolation = false;
            advance(lexer);
            break;

          case 'W':
          case 'I':
            if (!valid_symbols[SIMPLE_WORD_LIST]) return false;
            literal.type = Literal::WORD_LIST;
            literal.allows_interpolation = true;
            advance(lexer);
            break;

          default:
            if (!valid_symbols[SIMPLE_STRING]) return false;
            literal.type = Literal::STRING;
            literal.allows_interpolation = true;
            break;
        }

        switch (lexer->lookahead) {
          case '(':
            literal.open_delimiter = '(';
            literal.close_delimiter = ')';
            literal.nesting_depth = 1;
            break;

          case '[':
            literal.open_delimiter = '[';
            literal.close_delimiter = ']';
            literal.nesting_depth = 1;
            break;

          case '{':
            literal.open_delimiter = '{';
            literal.close_delimiter = '}';
            literal.nesting_depth = 1;
            break;

          case '<':
            literal.open_delimiter = '<';
            literal.close_delimiter = '>';
            literal.nesting_depth = 1;
            break;

          case '\n':
          case ' ':
          case '\t':
            // If the `/` operator is valid, then so is the `%` operator, which means
            // that a `%` followed by whitespace should be considered an operator,
            // not a percent string.
            if (valid_symbols[FORWARD_SLASH]) return false;

          case '|':
          case '!':
          case '#':
          case '/':
          case '\\':
          case '@':
          case '$':
          case '%':
          case '^':
          case '&':
          case '*':
          case ')':
          case ']':
          case '}':
          case '>':
          // TODO: Implement %= as external rule and re-enable = as a valid
          // unbalanced delimiter. That will be necessary due to ambiguity
          // between &= assignment operator and %=...= as string
          // content delimiter.
          //case '=':
          case '+':
          case '-':
          case '~':
          case '`':
          case ',':
          case '.':
          case '?':
          case ':':
          case ';':
          case '_':
          case '"':
          case '\'':
            literal.open_delimiter = lexer->lookahead;
            literal.close_delimiter = lexer->lookahead;
            literal.nesting_depth = 1;
            break;
          default:
            return false;
        }

        advance(lexer);
        return true;

      default:
        return false;
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

  enum ScanContentResult {
    Error,
    Interpolation,
    End
  };

  ScanContentResult scan_heredoc_content(TSLexer *lexer) {
    if (open_heredocs.empty()) return Error;
    Heredoc heredoc = open_heredocs.front();
    size_t position_in_word = 0;
    bool look_for_heredoc_end = true;

    for (;;) {
      if (position_in_word == heredoc.word.size()) {
        lexer->mark_end(lexer);
        while (lexer->lookahead == ' ' || lexer->lookahead == '\t') advance(lexer);
        if (lookahead_is_line_end(lexer)) {
          open_heredocs.erase(open_heredocs.begin());
          return End;
        }
      }

      if (lexer->lookahead == 0) {
        open_heredocs.erase(open_heredocs.begin());
        lexer->mark_end(lexer);
        return End;
      }

      if (lexer->lookahead == heredoc.word[position_in_word] && look_for_heredoc_end) {
        advance(lexer);
        position_in_word++;
      } else {
        position_in_word = 0;
        look_for_heredoc_end = false;
        if (lexer->lookahead == '#') {
          lexer->mark_end(lexer);
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

  ScanContentResult scan_content(TSLexer *lexer, Literal &literal) {
    for (;;) {
      if (literal.nesting_depth == 0) {
        if (literal.type == Literal::REGEX) {
          while (iswlower(lexer->lookahead)) {
            advance(lexer);
          }
        }
        lexer->mark_end(lexer);
        return End;
      }

      if (lexer->lookahead == literal.close_delimiter) {
        literal.nesting_depth--;
        advance(lexer);
      } else if (lexer->lookahead == literal.open_delimiter) {
        literal.nesting_depth++;
        advance(lexer);
      } else if (literal.allows_interpolation && lexer->lookahead == '#') {
        lexer->mark_end(lexer);
        advance(lexer);
        if (lexer->lookahead == '{') {
          advance(lexer);
          return Interpolation;
        }
      } else if (lexer->lookahead == '\\') {
        advance(lexer);
        advance(lexer);
      } else if (lexer->lookahead == 0) {
        advance(lexer);
        lexer->mark_end(lexer);
        return Error;
      } else {
        advance(lexer);
      }
    }
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    has_leading_whitespace = false;
    bool found_heredoc_starting_linebreak = false;

    if (valid_symbols[ELEMENT_REFERENCE_LEFT_BRACKET] && lexer->lookahead == '[') {
      advance(lexer);
      lexer->result_symbol = ELEMENT_REFERENCE_LEFT_BRACKET;
      return true;
    }

    if (!scan_whitespace(lexer, valid_symbols, &found_heredoc_starting_linebreak)) return false;
    if (lexer->result_symbol == LINE_BREAK) return true;

    if (valid_symbols[HEREDOC_BODY_MIDDLE] && !valid_symbols[LINE_BREAK] && !open_heredocs.empty()) {
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
        if (valid_symbols[UNARY_MINUS] && has_leading_whitespace && lexer->lookahead != ' ' && lexer->lookahead != '\t') {
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

    if (valid_symbols[IDENTIFIER_HASH_KEY] && iswalpha(lexer->lookahead)) {
      while (iswalpha(lexer->lookahead)) advance(lexer);
      lexer->mark_end(lexer);

      if (lexer->lookahead == ':') {
        advance(lexer);
        if (lexer->lookahead != ':') {
          lexer->result_symbol = IDENTIFIER_HASH_KEY;
          return true;
        }
      }

      return false;
    }

    if (valid_symbols[STRING_MIDDLE] && ! literal_stack.empty()) {
      Literal &literal = literal_stack.back();
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

  bool has_leading_whitespace;
  vector<Literal> literal_stack;
  vector<Heredoc> open_heredocs;
};

}

extern "C" {

void *tree_sitter_ruby_external_scanner_create() {
  return new Scanner();
}

bool tree_sitter_ruby_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_ruby_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(buffer);
}

void tree_sitter_ruby_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(buffer, length);
}

void tree_sitter_ruby_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

}
