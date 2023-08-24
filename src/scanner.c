#include <tree_sitter/parser.h>

enum TokenType {
  INDENT,
  DEDENT,
	REDENT,
	CONTENT_L,
	CONTENT_R,
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
static void scanner_debug(struct Scanner* self) {
	if (self == NULL) {
		printf("NULL\n");
		return;
	}
	printf("[");
	bool sep = false;
	for (unsigned i = 0; i < self->len; i++) {
		if (sep) {
			printf(", ");
		}
		sep = true;
		printf("%d", self->vec[i]);
	}
	printf("]\n");
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

	if (valid_symbols[CONTENT_L] && lexer->lookahead == '[') {
		lexer->advance(lexer, false);
		scanner_indent(self, lexer->get_column(lexer));
		lexer->result_symbol = CONTENT_L;
		return true;
	}
	if (valid_symbols[CONTENT_R] && lexer->lookahead == ']') {
		lexer->advance(lexer, false);
		scanner_dedent(self);
		lexer->result_symbol = CONTENT_R;
		return true;
	}

	if (valid_symbols[INDENT] || valid_symbols[DEDENT]) {
		lexer->mark_end(lexer);


		if (lexer->lookahead == '\n') {
			lexer->advance(lexer, false);
		}

		if (valid_symbols[DEDENT]) {
			if (lexer->eof(lexer) || lexer->lookahead == ']') {
				scanner_dedent(self);
				lexer->result_symbol = DEDENT;
				return true;
			}
		}

		if (lexer->get_column(lexer) != 0) {
			// printf("hoho\n");
			return false;
		}
		unsigned char col = 0;
		while (lexer->lookahead == ' ' || lexer->lookahead == '\n') {
			if (lexer->lookahead == '\n') {
				col = 0;
			}
			else {
				col++;
			}
			lexer->advance(lexer, false);
		}

		unsigned char current = scanner_current(self);
		unsigned char previous = scanner_previous(self);

		if (valid_symbols[DEDENT]) {
			if (lexer->eof(lexer)) {
				scanner_dedent(self);
				lexer->result_symbol = DEDENT;
				return true;
			}
			if (col < current && col <= previous) {
				scanner_dedent(self);
				lexer->result_symbol = DEDENT;
				return true;
			}
		}

		if (valid_symbols[REDENT] && col < current) {
			scanner_redent(self, col);
			lexer->result_symbol = REDENT;
			return true;
		}

		if (valid_symbols[INDENT] && col > current) {
			scanner_indent(self, col);
			lexer->result_symbol = INDENT;
			// printf("  indent\n");
			return true;
		}
	}

	return false;
}
