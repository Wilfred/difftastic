#include <tree_sitter/parser.h>
#include <stdio.h>
#include <string.h>

enum TokenType {
  INDENT,
  DEDENT,
	REDENT,

	URL_TOKEN,

	CONTENT_TOKEN,
	STRONG_TOKEN,
	EMPH_TOKEN,
	// MATH_GROUP_TOKEN,
	// MATH_BAR_TOKEN,
	TERMINATION,
};

enum container {
	CONTENT,
	STRONG,
	EMPH,
	// MATH_GROUP,
	// MATH_BAR,
};

struct vec_u32 {
	size_t cap;
	size_t len;
	uint32_t* vec;
};
static struct vec_u32 vec_u32_new() {
	return (struct vec_u32) {.cap = 0, .len = 0, .vec = NULL};
}
static void vec_u32_drop(struct vec_u32 self) {
	if (self.vec != NULL) {
		free(self.vec);
	}
}
static void vec_u32_debug(struct vec_u32* self) {
	fprintf(stderr, "(struct vec_u32*)");
	if (self == NULL) {
		fprintf(stderr, "NULL\n");
		return;
	}
	fprintf(stderr, "[");
	bool sep = false;
	for (size_t i = 0; i < self->len; i++) {
		if (sep) {
			fprintf(stderr, ", ");
		}
		sep = true;
		fprintf(stderr, "%d", self->vec[i]);
	}
	fprintf(stderr, "]\n");
}
static void vec_u32_push(struct vec_u32* self, uint32_t value) {
	if (self->len + 1 > self->cap) {
		self->cap = self->len + 8;
		self->vec = realloc(self->vec, sizeof(uint32_t) * self->cap);
		if (self->vec == NULL) {
			fprintf(stderr, "vec_u32_push: malloc failed\n");
			exit(EXIT_FAILURE);
		}
	}
	self->vec[self->len] = value;
	self->len += 1;
}
static uint32_t vec_u32_pop(struct vec_u32* self) {
	if (self->len < 1) {
			fprintf(stderr, "vec_u32_pop: empty vec\n");
			exit(EXIT_FAILURE);
	}
	self->len -= 1;
	return self->vec[self->len];
}
static uint32_t vec_u32_get(struct vec_u32* self, size_t index) {
	if (index >= self->len) {
			fprintf(stderr, "vec_u32_get: index out of bound\n");
			exit(EXIT_FAILURE);
	}
	return self->vec[index];
}
static uint32_t vec_u32_get_or(struct vec_u32* self, size_t index, uint32_t value) {
	if (index >= self->len) {
			return value;
	}
	return self->vec[index];
}
static uint32_t vec_u32_set(struct vec_u32* self, size_t index, uint32_t value) {
	if (index >= self->len) {
			fprintf(stderr, "vec_u32_set: index out of bound\n");
			exit(EXIT_FAILURE);
	}
	self->vec[index] = value;
}
static size_t vec_u32_last(struct vec_u32* self) {
	if (self->len < 1) {
			fprintf(stderr, "vec_u32_last: empty vec\n");
		exit(EXIT_FAILURE);
	}
	return self->len - 1;
}
static size_t vec_u32_serialize(struct vec_u32* self, char* buffer) {
	size_t written = 0;
	memcpy(buffer, &self->len, sizeof self->len);
	written += sizeof self->len;
	memcpy(buffer + written, self->vec, self->len * sizeof *self->vec);
	written += self->len * sizeof *self->vec;
	return written;
}
static size_t vec_u32_deserialize(struct vec_u32* self, const char* buffer) {
	size_t read = 0;
	memcpy(&self->len, buffer, sizeof self->len);
	read += sizeof self->len;
	if (self->len > self->cap) {
		self->cap = self->len;
		self->vec = realloc(self->vec, sizeof(uint32_t) * self->cap);
		if (self->vec == NULL) {
			fprintf(stderr, "vec_u32_deserialize: malloc failed\n");
			exit(EXIT_FAILURE);
		}
	}
	memcpy(self->vec, buffer + read, self->len * sizeof *self->vec);
	read += self->len * sizeof *self->vec;
	return read;
}

struct Scanner {
	struct vec_u32 indentation;
	struct vec_u32 containers;
	struct vec_u32 worker;
};

static uint32_t scanner_current(struct Scanner* self) {
	if (self->indentation.len < 1) {
		return 0;
	}
	return vec_u32_get(&self->indentation, self->indentation.len - 1);
}
static unsigned char scanner_previous(struct Scanner* self) {
	if (self->indentation.len < 2) {
		return 0;
	}
	return vec_u32_get(&self->indentation, self->indentation.len - 2);
}
static void scanner_redent(struct Scanner* self, uint32_t col) {
	if (self->indentation.len == 0) {
		fprintf(stderr, "redent on base line\n");
		exit(EXIT_FAILURE);
	}
	vec_u32_set(&self->indentation, self->indentation.len - 1, col);
}
static void scanner_dedent(struct Scanner* self) {
	if (self->indentation.len == 0) {
		return;
	}
	vec_u32_pop(&self->indentation);
}
static void scanner_indent(struct Scanner* self, uint32_t col) {
	vec_u32_push(&self->indentation, col);
}
static bool scanner_termination(struct Scanner* self, TSLexer* lexer) {
	if (self->containers.len == 0) {
		return lexer->eof(lexer);
	}
	enum container container = vec_u32_get(&self->containers, vec_u32_last(&self->containers));
	switch (container) {
		case CONTENT:
		return lexer->lookahead == ']';
		case STRONG:
		return lexer->lookahead == '*';
		case EMPH:
		return lexer->lookahead == '_';
	}
	fprintf(stderr, "unreachable\n");
	exit(EXIT_FAILURE);
}
static void scanner_container(struct Scanner* self, enum container container) {
	vec_u32_push(&self->containers, container);
}
static void scanner_out(struct Scanner* self) {
	if (self->containers.len == 0) {
		return;
	}
	vec_u32_pop(&self->containers);
}

void * tree_sitter_typst_external_scanner_create() {
  struct Scanner* self = malloc(sizeof(struct Scanner));
	if (self == NULL) {
		fprintf(stderr, "malloc failed\n");
		exit(EXIT_FAILURE);
	}
	self->indentation = vec_u32_new();
	self->containers = vec_u32_new();
	self->worker = vec_u32_new();
	return self;
}

void tree_sitter_typst_external_scanner_destroy(void *payload) {
	struct Scanner* self = payload;
	vec_u32_drop(self->indentation);
	vec_u32_drop(self->containers);
	vec_u32_drop(self->worker);
	free(self);
}

unsigned tree_sitter_typst_external_scanner_serialize(
  void *payload,
  char *buffer
) {
	struct Scanner* self = payload;
	size_t written = 0;
	written += vec_u32_serialize(&self->indentation, buffer + written);
	written += vec_u32_serialize(&self->containers, buffer + written);
	return written;
}

void tree_sitter_typst_external_scanner_deserialize(
  void *payload,
  const char *buffer,
  unsigned length
) {
	struct Scanner* self = payload;
	self->indentation.len = 0;
	self->containers.len = 0;
	if (length != 0) {
		size_t read = 0;
		read += vec_u32_deserialize(&self->indentation, buffer + read);
		read += vec_u32_deserialize(&self->containers, buffer + read);
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

	// highest precedence
	if (valid_symbols[TERMINATION] && scanner_termination(self, lexer)) {
		lexer->advance(lexer, false);
		scanner_dedent(self);
		scanner_out(self);
		lexer->result_symbol = TERMINATION;
		return true;
	}
	if (valid_symbols[CONTENT_TOKEN] && lexer->lookahead == '[') {
		lexer->advance(lexer, false);
		scanner_indent(self, lexer->get_column(lexer));
		scanner_container(self, CONTENT);
		lexer->result_symbol = CONTENT_TOKEN;
		return true;
	}
	if (valid_symbols[STRONG_TOKEN] && lexer->lookahead == '*') {
		lexer->advance(lexer, false);
		scanner_indent(self, lexer->get_column(lexer));
		scanner_container(self, STRONG);
		lexer->result_symbol = STRONG_TOKEN;
		return true;
	}
	if (valid_symbols[EMPH_TOKEN] && lexer->lookahead == '_') {
		lexer->advance(lexer, false);
		scanner_indent(self, lexer->get_column(lexer));
		scanner_container(self, EMPH);
		lexer->result_symbol = EMPH_TOKEN;
		return true;
	}

	if (valid_symbols[URL_TOKEN]) {
		self->worker.len = 0;
		const uint32_t BRACKET = 0;
		const uint32_t PARENTHESIS = 1;
		for (; true; lexer->advance(lexer, false)) {
			uint32_t c = lexer->lookahead;
			size_t len = self->worker.len;
			if (
				(c >= 'a' && c <= 'z') ||
			  (c >= 'A' && c <= 'Z') ||
			  (c >= '0' && c <= '9') ||
			  (c == '!') ||
			  (c == '#') ||
			  (c == '$') ||
			  (c == '%') || 
			  (c == '&') || 
			  (c == '*') || 
			  (c == '+') || 
			  (c == ',') || 
			  (c == '-') || 
			  (c == '.') || 
			  (c == '/') || 
			  (c == ':') || 
			  (c == ';') || 
			  (c == '=') || 
			  (c == '?') || 
			  (c == '@') || 
			  (c == '_') || 
			  (c == '~') || 
			  (c == '\'')
			) {
			}
			else if (c == '[') {
				vec_u32_push(&self->worker, BRACKET);
			}
			else if (c == '(') {
				vec_u32_push(&self->worker, PARENTHESIS);
			}
			else if (c == ']' && len > 0 && self->worker.vec[len - 1] == BRACKET) {
				vec_u32_pop(&self->worker);
			}
			else if (c == ')' && len > 0 && self->worker.vec[len - 1] == PARENTHESIS) {
				vec_u32_pop(&self->worker);
			}
			else {
				lexer->result_symbol = URL_TOKEN;
				return true;
			}
		}
	}

	if (valid_symbols[INDENT] || valid_symbols[DEDENT]) {
		lexer->mark_end(lexer);


		if (lexer->lookahead == '\n') {
			lexer->advance(lexer, false);
		}

		if (valid_symbols[DEDENT]) {
			if (scanner_termination(self, lexer)) {
				scanner_dedent(self);
				lexer->result_symbol = DEDENT;
				// printf("Hey\n");
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

		// uint32_t current = vec_u32_get(&self->indentation, vec_u32_last(&self->indentation));
		// uint32_t previous = vec_u32_get(&self->indentation, vec_u32_last(&self->indentation) - 1);
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
