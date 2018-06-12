#include <tree_sitter/parser.h>
#include <algorithm>
#include <vector>
#include <string>
#include <cwctype>
#include "tag.h"

namespace {

using std::vector;
using std::string;

enum TokenType {
  OPEN_START_TAG,
  OPEN_RAW_START_TAG,
  CLOSE_START_TAG,
  SELF_CLOSE_START_TAG,
  END_TAG,
  IMPLICIT_END_TAG,
  ERRONEOUS_END_TAG,
  RAW_TEXT,
  COMMENT
};

struct Scanner {
  Scanner() {}

  unsigned serialize(char *buffer) {
    unsigned i = 0;
    for (Tag &tag : tags) {
      buffer[i] = static_cast<char>(tag.type);
      i++;

      if (tag.type == CUSTOM) {
        buffer[i++] = tag.custom_tag_name.size();
        for (char c : tag.custom_tag_name) {
          buffer[i++] = c;
        }
      }
    }

    return i;
  }

  void deserialize(const char *buffer, unsigned length) {
    tags.clear();

    unsigned i = 0;
    while (i < length) {
      Tag tag { static_cast<TagType>(buffer[i]), "" };
      i++;
      if (tag.type == CUSTOM) {
        tag.custom_tag_name.resize(buffer[i++]);
        for (unsigned j = 0; j < tag.custom_tag_name.size(); j++) {
          tag.custom_tag_name[j] = buffer[i++];
        }
      }
      tags.push_back(tag);
    }
  }

  string scan_tag_name(TSLexer *lexer) {
    string tag_name;
    while (iswalpha(lexer->lookahead) || lexer->lookahead == '-' || lexer->lookahead == ':') {
      tag_name += towupper(lexer->lookahead);
      lexer->advance(lexer, false);
    }
    return tag_name;
  }

  bool comment(TSLexer *lexer) {
    if (lexer->lookahead != '-') return false;
    lexer->advance(lexer, false);
    if (lexer->lookahead != '-') return false;
    lexer->advance(lexer, false);

    unsigned dashes = 0;
    auto c = lexer->lookahead;
    while (c) {
      switch (c) {
        case '-':
          ++dashes;
          break;
        case '>':
          if (dashes >= 2) {
            lexer->result_symbol = COMMENT;
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
            return true;
          }
          break;
        default:
          dashes = 0;
      }
      lexer->advance(lexer, false);
      c = lexer->lookahead;
    }
    return false;
  }

  bool raw_text(TSLexer *lexer) {
    if (!tags.size()) return false;

    lexer->mark_end(lexer);

    const string &end_delimiter = tags.back().type == SCRIPT
      ? "</script"
      : "</style";

    unsigned delimiter_index = 0;
    while (lexer->lookahead) {
      if (lexer->lookahead == end_delimiter[delimiter_index]) {
        delimiter_index++;
        if (delimiter_index == end_delimiter.size()) break;
      } else {
        delimiter_index = 0;
        lexer->mark_end(lexer);
      }
      lexer->advance(lexer, false);
    }

    lexer->result_symbol = RAW_TEXT;
    return true;
  }

  bool start_tag(TSLexer *lexer) {
    if (!tags.empty() && tags.back().is_void()) {
      tags.pop_back();
      lexer->result_symbol = IMPLICIT_END_TAG;
      return true;
    }

    auto tag_name = scan_tag_name(lexer);
    if (tag_name.empty()) return false;

    Tag tag = Tag::for_name(tag_name);
    tags.push_back(tag);

    lexer->mark_end(lexer);
    lexer->result_symbol = tag.is_raw() ? OPEN_RAW_START_TAG : OPEN_START_TAG;
    return true;
  }

  bool end_tag(TSLexer *lexer) {
    auto tag_name = scan_tag_name(lexer);
    if (tag_name.empty()) return false;

    lexer->advance(lexer, false);

    Tag tag = Tag::for_name(tag_name);

    // The tag correctly closes the topmost element on the stack
    if (tag == tags.back()) {
      tags.pop_back();
      lexer->mark_end(lexer);
      lexer->result_symbol = END_TAG;
      return true;
    }

    // Otherwise, dig deeper and queue implicit end tags (to be nice in
    // the case of malformed HTML)
    if (std::find(tags.begin(), tags.end(), tag) != tags.end()) {
      tags.pop_back();
      lexer->result_symbol = IMPLICIT_END_TAG;
      return true;
    }

    // You closed a tag you never opened 😭
    lexer->mark_end(lexer);
    lexer->result_symbol = ERRONEOUS_END_TAG;
    return true;
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    while (iswspace(lexer->lookahead)) {
      lexer->advance(lexer, true);
    }

    if (valid_symbols[RAW_TEXT] && !valid_symbols[OPEN_START_TAG] && !valid_symbols[CLOSE_START_TAG]) {
      return raw_text(lexer);
    }

    switch (lexer->lookahead) {
      case '<':
        lexer->mark_end(lexer);
        lexer->advance(lexer, false);

        if (lexer->lookahead == '!') {
          lexer->advance(lexer, false);
          return comment(lexer);
        }

        if (valid_symbols[OPEN_START_TAG] || valid_symbols[END_TAG]) {
          if (lexer->lookahead == '/') {
            lexer->advance(lexer, false);
            return end_tag(lexer);
          }
          return start_tag(lexer);
        }

        break;

      case '>':
        if (valid_symbols[CLOSE_START_TAG]) {
          lexer->advance(lexer, false);
          lexer->result_symbol = CLOSE_START_TAG;
          return true;
        }
        break;

      case '/':
        if (valid_symbols[SELF_CLOSE_START_TAG]) {
          lexer->advance(lexer, false);
          if (lexer->lookahead == '>') {
            lexer->advance(lexer, false);
            tags.pop_back();
            lexer->result_symbol = SELF_CLOSE_START_TAG;
            return true;
          }
        }
        break;
    }

    return false;
  }

  vector<Tag> tags;
};

}

extern "C" {

void *tree_sitter_html_external_scanner_create() {
  return new Scanner();
}

bool tree_sitter_html_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_html_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(buffer);
}

void tree_sitter_html_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(buffer, length);
}

void tree_sitter_html_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

}
