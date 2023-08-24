#include <tree_sitter/parser.h>

enum TokenType {
  INDENT,
  DEDENT,
};

struct Scanner {
	unsigned cap;
	unsigned len;
	unsigned char* vec;
};

static void scanner_capacity(struct Scanner* self, unsigned cap) {
	if (self->cap >= cap) {
		return;
	}
	self->vec = realloc(self->vec, sizeof(unsigned char) * cap);
	self->cap = cap;
	if (self->vec == NULL) {
		self->len = 0;
		self->cap = 0;
	}
}
static unsigned char scanner_current(struct Scanner* self) {
	if (self == NULL || self->len < 1) {
		return 0;
	}
	return self->vec[self->len - 1];
}
static unsigned char scanner_previous(struct Scanner* self) {
	if (self == NULL || self->len < 2) {
		return 0;
	}
	return self->vec[self->len - 2];
}
static void scanner_redent(struct Scanner* self, unsigned char col) {
	if (self == NULL || self->len == 0) {
		return;
	}
	self->vec[self->len - 1] = col;
}
static void scanner_dedent(struct Scanner* self) {
	if (self == NULL || self->len == 0) {
		return;
	}
	self->len--;
}
static void scanner_indent(struct Scanner* self, unsigned char col) {
	if (self == NULL) {
		return;
	}
	if (self->len + 1 > self->cap) {
		scanner_capacity(self, self->len + 8);
	}
	self->vec[self->len] = col;
	self->len++;
}

void * tree_sitter_typst_external_scanner_create() {
  struct Scanner* self = malloc(sizeof(struct Scanner));
	if (self == NULL) {
		return NULL;
	}
	self->cap = 0;
	self->len = 0;
	self->vec = NULL;
	return self;
}

void tree_sitter_typst_external_scanner_destroy(void *payload) {
	struct Scanner* self = payload;
	if (self == NULL) {
		return;
	}
	if (self->vec != NULL) {
		free(self->vec);
	}
	free(self);
}

unsigned tree_sitter_typst_external_scanner_serialize(
  void *payload,
  char *buffer
) {
	struct Scanner* self = payload;
	if (self == NULL) {
		return 0;
	}
  for (unsigned i = 0; i < self->len; i++) {
		buffer[i] = self->vec[i];
	}
	return self->len;
}

void tree_sitter_typst_external_scanner_deserialize(
  void *payload,
  const char *buffer,
  unsigned length
) {
	struct Scanner* self = payload;
  if (self == NULL) {
		return;
	}
	scanner_capacity(self, length);
	self->len = length;
	for (unsigned i = 0; i < length; i++) {
		self->vec[i] = buffer[i];
	}
}

bool tree_sitter_typst_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
	struct Scanner* self = payload;
  if (self == NULL) {
		return false;
	}

	if (valid_symbols[DEDENT]) {
		if (lexer->lookahead == '\n') {
			lexer->mark_end(lexer);
			lexer->advance(lexer, false);
			while (lexer->lookahead == ' ') {
				lexer->advance(lexer, false);
			}
			unsigned char col = lexer->get_column(lexer);
			unsigned char current = scanner_current(self);
			unsigned char previous = scanner_previous(self);
			if (col < current && col <= previous) {
				scanner_dedent(self);
				lexer->result_symbol = DEDENT;
				return true;
			}
		}
		if (lexer->lookahead == 0) {
			scanner_dedent(self);
			lexer->result_symbol = DEDENT;
			return true;
		}
	}

	if (valid_symbols[INDENT]) {

		if (lexer->lookahead == '\n') {
			lexer->advance(lexer, false);
			lexer->mark_end(lexer);
		}
		if (lexer->get_column(lexer) != 0) {
			return false;
		}

		while (lexer->lookahead == ' ') {
			lexer->advance(lexer, false);
		}
		unsigned char col = lexer->get_column(lexer);
		unsigned char current = scanner_current(self);

		if (col < current) {
			scanner_redent(self, col);
		}
		else if (col > current) {
			if (!valid_symbols[INDENT]) {
				return false;
			}
			scanner_indent(self, col);
			lexer->result_symbol = INDENT;
			return true;
		}
	}

	return false;
}
