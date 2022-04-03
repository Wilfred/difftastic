#include <tree_sitter/parser.h>
#include <string>
#include <wctype.h>

namespace {

enum {
  COMMENT,
  LEFT_QUOTED_STRING_DELIM,
  RIGHT_QUOTED_STRING_DELIM,
  STRING_DELIM,
  LINE_NUMBER_DIRECTIVE,
  NULL_CHARACTER
};

struct Scanner {
  bool in_string = false;
  std::string quoted_string_id;

  unsigned serialize(char *buffer) {
    size_t size = quoted_string_id.size();

    buffer[0] = in_string;
    quoted_string_id.copy(&buffer[1], size);
    return size + 1;
  }

  void deserialize(const char *buffer, unsigned length) {
    if (length > 0) {
      in_string = buffer[0];
      quoted_string_id.assign(&buffer[1], length - 1);
    }
  }

  void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
  }

  void skip(TSLexer *lexer) {
    lexer->advance(lexer, true);
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    if (valid_symbols[LEFT_QUOTED_STRING_DELIM] && (iswlower(lexer->lookahead) || lexer->lookahead == '_' || lexer->lookahead == '|')) {
      lexer->result_symbol = LEFT_QUOTED_STRING_DELIM;
      return scan_left_quoted_string_delimiter(lexer);
    } else if (valid_symbols[RIGHT_QUOTED_STRING_DELIM] && (lexer->lookahead == '|')) {
      advance(lexer);
      lexer->result_symbol = RIGHT_QUOTED_STRING_DELIM;
      return scan_right_quoted_string_delimiter(lexer);
    } else if (in_string && valid_symbols[STRING_DELIM] && lexer->lookahead == '"') {
      advance(lexer);
      in_string = false;
      lexer->result_symbol = STRING_DELIM;
      return true;
    }

    while (iswspace(lexer->lookahead)) {
      skip(lexer);
    }

    if (!in_string && lexer->lookahead == '#' && lexer->get_column(lexer) == 0) {
      advance(lexer);

      while (lexer->lookahead == ' ' || lexer->lookahead == '\t') advance(lexer);

      if (!iswdigit(lexer->lookahead)) return false;
      while (iswdigit(lexer->lookahead)) advance(lexer);

      while (lexer->lookahead == ' ' || lexer->lookahead == '\t') advance(lexer);

      if (lexer->lookahead != '"') return false;
      while (lexer->lookahead != '\n' && lexer->lookahead != '\r' && lexer->lookahead != '"') advance(lexer);
      if (lexer->lookahead != '"') return false;

      while (lexer->lookahead != '\n' && lexer->lookahead != '\r') advance(lexer);

      lexer->result_symbol = LINE_NUMBER_DIRECTIVE;
      return true;
    } else if (!in_string && lexer->lookahead == '(') {
      advance(lexer);
      lexer->result_symbol = COMMENT;
      return scan_comment(lexer);
    } else if (!in_string && valid_symbols[STRING_DELIM] && lexer->lookahead == '"') {
      advance(lexer);
      in_string = true;
      lexer->result_symbol = STRING_DELIM;
      return true;
    } else if (valid_symbols[NULL_CHARACTER] && lexer->lookahead == '\0') {
      return !lexer->eof(lexer);
    }

    return false;
  }

  void scan_string(TSLexer *lexer) {
    for (;;) {
      switch (lexer->lookahead) {
        case '\\':
          advance(lexer);
          advance(lexer);
          break;
        case '"':
          advance(lexer);
          return;
        case '\0':
          if (lexer->eof(lexer)) return;
          advance(lexer);
          break;
        default:
          advance(lexer);
      }
    }
  }

  char scan_character(TSLexer *lexer) {
    char last = 0;

    switch (lexer->lookahead) {
      case '\\':
        advance(lexer);
        if (iswdigit(lexer->lookahead)) {
          advance(lexer);
          for (size_t i = 0; i < 2; i++) {
            if (!iswdigit(lexer->lookahead)) return 0;
            advance(lexer);
          }
        } else {
          switch (lexer->lookahead) {
            case 'x':
              advance(lexer);
              for (size_t i = 0; i < 2; i++) {
                if (!iswdigit(lexer->lookahead) && (towupper(lexer->lookahead) < 'A' || towupper(lexer->lookahead) > 'F')) return 0;
                advance(lexer);
              }
              break;
            case 'o':
              advance(lexer);
              for (size_t i = 0; i < 3; i++) {
                if (!iswdigit(lexer->lookahead) || lexer->lookahead > '7') return 0;
                advance(lexer);
              }
              break;
            case '\'':
            case '"':
            case '\\':
            case 'n':
            case 't':
            case 'b':
            case 'r':
            case ' ':
              last = lexer->lookahead;
              advance(lexer);
              break;
            default:
              return 0;
          }
        }
        break;
      case '\'':
        break;
      case '\0':
        if (lexer->eof(lexer)) return 0;
        advance(lexer);
        break;
      default:
        last = lexer->lookahead;
        advance(lexer);
    }

    if (lexer->lookahead == '\'') {
      advance(lexer);
      return 0;
    } else {
      return last;
    }
  }

  bool scan_left_quoted_string_delimiter(TSLexer *lexer) {
    quoted_string_id.clear();

    while (iswlower(lexer->lookahead) || lexer->lookahead == '_') {
      quoted_string_id.push_back(lexer->lookahead);
      advance(lexer);
    }

    if (lexer->lookahead != '|') return false;

    advance(lexer);
    in_string = true;
    return true;
  }

  bool scan_right_quoted_string_delimiter(TSLexer *lexer) {
    for (size_t i = 0; i < quoted_string_id.size(); i++) {
      if (lexer->lookahead != quoted_string_id[i]) return false;
      advance(lexer);
    }

    if (lexer->lookahead != '}') return false;

    in_string = false;
    return true;
  }

  bool scan_quoted_string(TSLexer *lexer) {
    if (!scan_left_quoted_string_delimiter(lexer)) return false;

    for (;;) {
      switch (lexer->lookahead) {
        case '|':
          advance(lexer);
          if (scan_right_quoted_string_delimiter(lexer)) return true;
          break;
        case '\0':
          if (lexer->eof(lexer)) return false;
          advance(lexer);
          break;
        default:
          advance(lexer);
      }
    }
  }

  bool scan_identifier(TSLexer *lexer) {
    if (iswalpha(lexer->lookahead) || lexer->lookahead == '_') {
      advance(lexer);
      while (iswalnum(lexer->lookahead) || lexer->lookahead == '_' || lexer->lookahead == '\'') {
        advance(lexer);
      }
      return true;
    }
    return false;
  }

  bool scan_extattrident(TSLexer *lexer) {
    while (scan_identifier(lexer)) {
      if (lexer->lookahead != '.') return true;
    }
    return false;
  }

  bool scan_comment(TSLexer *lexer) {
    char last = 0;

    if (lexer->lookahead != '*') return false;
    advance(lexer);

    for (;;) {
      switch (last ? last : lexer->lookahead) {
        case '(':
          if (last) last = 0; else advance(lexer);
          scan_comment(lexer);
          break;
        case '*':
          if (last) last = 0; else advance(lexer);
          if (lexer->lookahead == ')') {
            advance(lexer);
            return true;
          }
          break;
        case '\'':
          if (last) last = 0; else advance(lexer);
          last = scan_character(lexer);
          break;
        case '"':
          if (last) last = 0; else advance(lexer);
          scan_string(lexer);
          break;
        case '{':
          if (last) last = 0; else advance(lexer);
          if (lexer->lookahead == '%') {
            advance(lexer);
            if (lexer->lookahead == '%') advance(lexer);
            if (scan_extattrident(lexer)) {
              while (iswspace(lexer->lookahead)) advance(lexer);
            } else {
              break;
            }
          }
          if (scan_quoted_string(lexer)) advance(lexer);
          break;
        case '\0':
          if (lexer->eof(lexer)) return false;
          if (last) last = 0; else advance(lexer);
          break;
        default:
          if (scan_identifier(lexer) || last) last = 0; else advance(lexer);
      }
    }
  }
};

}
