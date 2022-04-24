#include <tree_sitter/parser.h>

#include <climits>
#include <vector>
#include <string>
#include <wctype.h>
#include <assert.h>

namespace {

using std::vector;
using std::string;

enum TokenType {
  QUOTED_TEMPLATE_START,
  QUOTED_TEMPLATE_END,
  TEMPLATE_LITERAL_CHUNK,
  TEMPLATE_INTERPOLATION_START,
  TEMPLATE_INTERPOLATION_END,
  TEMPLATE_DIRECTIVE_START,
  TEMPLATE_DIRECTIVE_END,
  HEREDOC_IDENTIFIER,
};

enum ContextType {
  TEMPLATE_INTERPOLATION,
  TEMPLATE_DIRECTIVE,
  QUOTED_TEMPLATE,
  HEREDOC_TEMPLATE,
};

struct Context {
  ContextType type;

  // valid if type == HEREDOC_TEMPLATE
  string heredoc_identifier;
};

struct Scanner {

public:

  unsigned serialize(char* buf) {
    unsigned size = 0;

    if (context_stack.size() > CHAR_MAX) {
      return 0;
    }

    buf[size++] = context_stack.size();
    for (vector<Context>::iterator it = context_stack.begin(); it != context_stack.end(); ++it) {
      if (size + 2 + it->heredoc_identifier.size() >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) {
        return 0;
      }
      if (it->heredoc_identifier.size() > CHAR_MAX) {
        return 0;
      }
      buf[size++] = it->type;
      buf[size++] = it->heredoc_identifier.size();
      it->heredoc_identifier.copy(&buf[size], it->heredoc_identifier.size());
      size += it->heredoc_identifier.size();
    }
    return size;
  }

  void deserialize(const char* buf, unsigned n) {
    context_stack.clear();

    if (n == 0) {
      return;
    }

    unsigned size = 0;
    uint8_t context_stack_size = buf[size++];
    for (unsigned j = 0; j < context_stack_size; j++) {
      Context ctx;
      ctx.type = static_cast<ContextType>(buf[size++]);
      uint8_t heredoc_identifier_size = buf[size++];
      ctx.heredoc_identifier.assign(buf + size, buf + size + heredoc_identifier_size);
      size += heredoc_identifier_size;
      context_stack.push_back(ctx);
    }
    assert(size == n);
  }

  bool scan(TSLexer* lexer, const bool* valid_symbols) {
    bool has_leading_whitespace_with_newline = false;
    while (iswspace(lexer->lookahead)) {
      if (lexer->lookahead == '\n') {
        has_leading_whitespace_with_newline = true;
      }
      skip(lexer);
    }
    if (lexer->lookahead == '\0') {
      return false;
    }
    // manage quoted context
    if (valid_symbols[QUOTED_TEMPLATE_START] && !in_quoted_context() && lexer->lookahead == '"') {
      Context ctx = { QUOTED_TEMPLATE, "" };
      context_stack.push_back(ctx);
      return accept_and_advance(lexer, QUOTED_TEMPLATE_START);
    }
    if (valid_symbols[QUOTED_TEMPLATE_END] && in_quoted_context() && lexer->lookahead == '"') {
      context_stack.pop_back();
      return accept_and_advance(lexer, QUOTED_TEMPLATE_END);
    }

    // manage template interpolations
    if (
      valid_symbols[TEMPLATE_INTERPOLATION_START] &&
      valid_symbols[TEMPLATE_LITERAL_CHUNK] &&
      !in_interpolation_context() &&
      lexer->lookahead == '$'
    ) {
      advance(lexer);
      if (lexer->lookahead == '{') {
        Context ctx = { TEMPLATE_INTERPOLATION, "" };
        context_stack.push_back(ctx);
        return accept_and_advance(lexer, TEMPLATE_INTERPOLATION_START);
      }
      // try to scan escape sequence
      if (lexer->lookahead == '$') {
        advance(lexer);
        if (lexer->lookahead == '{') {
          // $${
          return accept_and_advance(lexer, TEMPLATE_LITERAL_CHUNK);
        }
      }
      return accept_inplace(lexer, TEMPLATE_LITERAL_CHUNK);
    }
    if (valid_symbols[TEMPLATE_INTERPOLATION_END] && in_interpolation_context() && lexer->lookahead == '}') {
      context_stack.pop_back();
      return accept_and_advance(lexer, TEMPLATE_INTERPOLATION_END);
    }

    // manage template directives
    if (
      valid_symbols[TEMPLATE_DIRECTIVE_START] &&
      valid_symbols[TEMPLATE_LITERAL_CHUNK] &&
      !in_directive_context() &&
      lexer->lookahead == '%'
    ) {
      advance(lexer);
      if (lexer->lookahead == '{') {
        Context ctx = { TEMPLATE_DIRECTIVE, "" };
        context_stack.push_back(ctx);
        return accept_and_advance(lexer, TEMPLATE_DIRECTIVE_START);
      }
      // try to scan escape sequence
      if (lexer->lookahead == '%') {
        advance(lexer);
        if (lexer->lookahead == '{') {
          // $${
          return accept_and_advance(lexer, TEMPLATE_LITERAL_CHUNK);
        }
      }
      return accept_inplace(lexer, TEMPLATE_LITERAL_CHUNK);
    }
    if (valid_symbols[TEMPLATE_DIRECTIVE_END] && in_directive_context() && lexer->lookahead == '}') {
      context_stack.pop_back();
      return accept_and_advance(lexer, TEMPLATE_DIRECTIVE_END);
    }

    // manage heredoc context
    if (valid_symbols[HEREDOC_IDENTIFIER] && !in_heredoc_context()) {
      string identifier;
      // TODO: check that this is a valid identifier
      while (iswalnum(lexer->lookahead) || lexer->lookahead == '_' || lexer->lookahead == '-') {
        identifier.push_back(lexer->lookahead);
        advance(lexer);
      }
      Context ctx = { HEREDOC_TEMPLATE, identifier };
      context_stack.push_back(ctx);
      return accept_inplace(lexer, HEREDOC_IDENTIFIER);
    }
    if (valid_symbols[HEREDOC_IDENTIFIER] && in_heredoc_context() && has_leading_whitespace_with_newline) {
      string expected_identifier = context_stack.back().heredoc_identifier;

      for (string::iterator it = expected_identifier.begin(); it != expected_identifier.end(); ++it) {
        if (lexer->lookahead == *it) {
          advance(lexer);
        } else {
          return accept_inplace(lexer, TEMPLATE_LITERAL_CHUNK);
        }
      }
      // check if the identifier is on a line of its own
      lexer->mark_end(lexer);
      while (iswspace(lexer->lookahead) && lexer->lookahead != '\n') {
          advance(lexer);
      }
      if (lexer->lookahead == '\n') {
        context_stack.pop_back();
        return accept_inplace(lexer, HEREDOC_IDENTIFIER);
      } else {
        advance(lexer);
        lexer->mark_end(lexer);
        return accept_inplace(lexer, TEMPLATE_LITERAL_CHUNK);
      }
    }
    // manage template literal chunks

    // handle template literal chunks in quoted contexts
    //
    // they may not contain newlines and may contain escape sequences

    if (valid_symbols[TEMPLATE_LITERAL_CHUNK] && in_quoted_context()) {
      switch (lexer->lookahead) {
        case '\\':
          advance(lexer);
          switch (lexer->lookahead) {
            case '"':
            case 'n':
            case 'r':
            case 't':
            case '\\':
              return accept_and_advance(lexer, TEMPLATE_LITERAL_CHUNK);
            case 'u':
              for (int i = 0; i < 4; i++) {
                if (!consume_wxdigit(lexer)) return false;
              }
              return accept_and_advance(lexer, TEMPLATE_LITERAL_CHUNK);
            case 'U':
              for (int i = 0; i < 8; i++) {
                if (!consume_wxdigit(lexer)) return false;
              }
              return accept_and_advance(lexer, TEMPLATE_LITERAL_CHUNK);
            default:
              return false;
          }
      }
    }

    // handle all other quoted template or string literal characters
    if (valid_symbols[TEMPLATE_LITERAL_CHUNK] && in_template_context()) {
      return accept_and_advance(lexer, TEMPLATE_LITERAL_CHUNK);
    }

    // probably not handled by the external scanner
    return false;
  }

private:
  vector<Context> context_stack;

  void advance(TSLexer* lexer) {
    lexer->advance(lexer, false);
  }

  void skip(TSLexer* lexer) { lexer->advance(lexer, true); }

  bool accept_inplace(TSLexer* lexer, TokenType token) {
    lexer->result_symbol = token;
    return true;
  }

  bool accept_and_advance(TSLexer* lexer, TokenType token) {
    advance(lexer);
    return accept_inplace(lexer, token);
  }

  bool consume_wxdigit(TSLexer* lexer) {
    advance(lexer);
    return iswxdigit(lexer->lookahead);
  }

  bool in_context_type(ContextType type) {
    if (context_stack.empty()) {
      return false;
    }
    return context_stack.back().type == type;
  }

  bool in_quoted_context() {
    return in_context_type(QUOTED_TEMPLATE);
  }

  bool in_heredoc_context() {
    return in_context_type(HEREDOC_TEMPLATE);
  }

  bool in_template_context() {
    return in_quoted_context() || in_heredoc_context();
  }

  bool in_interpolation_context() {
    return in_context_type(TEMPLATE_INTERPOLATION);
  }

  bool in_directive_context() {
    return in_context_type(TEMPLATE_DIRECTIVE);
  }
};

} // namespace

extern "C" {

// tree sitter callbacks
void* tree_sitter_hcl_external_scanner_create() {
  return new Scanner();
}

void tree_sitter_hcl_external_scanner_destroy(void* p) {
  Scanner* scanner = static_cast<Scanner*>(p);
  delete scanner;
}

unsigned tree_sitter_hcl_external_scanner_serialize(void* p, char* b) {
  Scanner* scanner = static_cast<Scanner*>(p);
  return scanner->serialize(b);
}

void tree_sitter_hcl_external_scanner_deserialize(void* p, const char* b, unsigned n) {
  Scanner* scanner = static_cast<Scanner*>(p);
  return scanner->deserialize(b, n);
}

bool tree_sitter_hcl_external_scanner_scan(void* p, TSLexer* lexer, const bool* valid_symbols) {
  Scanner* scanner = static_cast<Scanner*>(p);
  return scanner->scan(lexer, valid_symbols);
}

} // extern "C"
