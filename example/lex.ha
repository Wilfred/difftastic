// hare::lex provides a lexer for Hare source code.
use ascii;
use bufio;
use encoding::utf8;
use fmt;
use io;
use sort;
use strconv;
use strings;

// State associated with a lexer.
export type lexer = struct {
	in: *io::stream,
	path: str,
	loc: (uint, uint),
	un: ((token, location) | void),
	rb: [2](rune | io::EOF | void),
};

// A syntax error
export type syntax = (location, str)!;

// All possible lexer errors
export type error = (io::error | syntax)!;

// Returns a human-friendly string for a given error
export fn strerror(err: error) const str = {
	static let buf: [2048]u8 = [0...];
	return match (err) {
		err: io::error => io::strerror(err),
		s: syntax => fmt::bsprintf(buf, "{}:{},{}: Syntax error: {}",
			s.0.path, s.0.line, s.0.col, s.1),
	};
};

// Initializes a new lexer for the given input stream. The path is borrowed.
export fn init(in: *io::stream, path: str) lexer = lexer {
	in = in,
	path = path,
	loc = (1, 1),
	un = void,
	rb = [void...],
};

// Returns the next token from the lexer.
export fn lex(lex: *lexer) ((token, location) | io::EOF | error) = {
	match (lex.un) {
		tok: (token, location) => {
			lex.un = void;
			return tok;
		},
		void => void,
	};

	let loc = location { ... };
	let r: rune = match (nextw(lex)?) {
		io::EOF => return io::EOF,
		r: (rune, location) => {
			loc = r.1;
			r.0;
		},
	};

	if (is_name(r, false)) {
		unget(lex, r);
		return lex_name(lex, loc);
	};
	if (ascii::isdigit(r)) {
		unget(lex, r);
		abort(); // TODO: Literals
	};

	let tok: token = switch (r) {
		* => return syntaxerr(loc, "invalid character"),
		'"', '\'' => {
			unget(lex, r);
			return lex_rn_str(lex, loc);
		},
		'.', '<', '>' => return lex3(lex, loc, r),
		'^', '*', '%', '/', '+', '-', ':', '!', '&', '|', '=' => {
			return lex2(lex, loc, r);
		},
		'~' => btoken::BNOT,
		',' => btoken::COMMA,
		'{' => btoken::LBRACE,
		'[' => btoken::LBRACKET,
		'(' => btoken::LPAREN,
		'}' => btoken::RBRACE,
		']' => btoken::RBRACKET,
		')' => btoken::RPAREN,
		';' => btoken::SEMICOLON,
		'?' => btoken::QUESTION,
	};
	return (tok, loc);
};

fn is_name(r: rune, num: bool) bool =
	ascii::isalpha(r) || r == '_' || r == '@' || (num && ascii::isdigit(r));

fn ncmp(a: const *void, b: const *void) int = {
	let a = a: const *str, b = b: const *str;
	return match (ascii::strcmp(*a, *b)) {
		void => abort("non-ascii name"), // TODO: Bubble me up
		i: int => i,
	};
};

fn lex_unicode(lex: *lexer, loc: location, n: size) (rune | error) = {
	assert(n < 9);
	let buf: [9]u8 = [0...];
	for (let i = 0z; i < n; i += 1z) {
		let r = match (next(lex)?) {
			io::EOF => return syntaxerr(loc,
				"unexpected EOF scanning for escape"),
			r: rune => r,
		};
		if (!ascii::isxdigit(r)) {
			return syntaxerr(loc,
				"unexpected rune scanning for escape");
		};
		buf[i] = r: u32: u8;
	};
	let s = strings::fromutf8_unsafe(buf[..n]);
	return strconv::stou32b(s, strconv::base::HEX) as u32: rune;
};

fn lex_rune(lex: *lexer, loc: location) (rune | error) = {
	let r = match (next(lex)?) {
		io::EOF => return syntaxerr(loc,
			"unexpected EOF scanning for rune"),
		r: rune => r,
	};
	if (r != '\\') {
		return r;
	};
	r = match (next(lex)?) {
		io::EOF => return syntaxerr(loc,
			"unexpected EOF scanning for escape"),
		r: rune => r,
	};
	return switch (r) {
		'\\' => '\\',
		'\'' => '\'',
		'0' => '\0',
		'a' => '\a',
		'b' => '\b',
		'f' => '\f',
		'n' => '\n',
		'r' => '\r',
		't' => '\t',
		'v' => '\v',
		'"' => '\"',
		'x' => lex_unicode(lex, loc, 2),
		'u' => lex_unicode(lex, loc, 4),
		'U' => lex_unicode(lex, loc, 8),
	};
};

fn lex_string(
	lex: *lexer,
	loc: location,
) ((token, location) | io::EOF | error) = {
	let chars: []u8 = [];
	for (true) match (next(lex)?) {
		io::EOF => return syntaxerr(loc, "unexpected EOF scanning string literal"),
		r: rune =>
			if (r == '"') break
			else {
				unget(lex, r);
				r = lex_rune(lex, loc)?;
				append(chars, ...utf8::encoderune(r));
			},
	};
	return (strings::fromutf8(chars): literal, loc);
};

fn lex_rn_str(
	lex: *lexer,
	loc: location,
) ((token, location) | io::EOF | error) = {
	let r = match (next(lex)) {
		r: rune => r,
		(io::EOF | io::error) => abort(),
	};
	switch (r) {
		'\"' => return lex_string(lex, loc),
		'\'' => void,
		* => abort(), // Invariant
	};

	// Rune literal
	let ret: (token, location) = (lex_rune(lex, loc)?: literal, loc);
	match (next(lex)?) {
		io::EOF =>
			return syntaxerr(loc, "unexpected EOF"),
		n: rune => if (n != '\'')
			return syntaxerr(loc, "expected \"\'\""),
	};
	return ret;
};

fn lex_name(
	lex: *lexer,
	loc: location,
) ((token, location) | io::EOF | error) = {
	let chars: []u8 = [];
	match (next(lex)) {
		r: rune => {
			assert(is_name(r, false));
			append(chars, ...utf8::encoderune(r));
		},
		(io::EOF | io::error) => abort(),
	};

	for (true) match (next(lex)?) {
		io::EOF => break,
		r: rune => {
			if (!is_name(r, true)) {
				unget(lex, r);
				break;
			};
			append(chars, ...utf8::encoderune(r));
		},
	};

	let n = strings::fromutf8(chars);
	return match (sort::search(bmap[..btoken::LAST_KEYWORD+1],
			size(str), &n, &ncmp)) {
		// TODO: Validate that names are ASCII
		null => (n: name: token, loc),
		v: *void => {
			let tok = v: uintptr - &bmap[0]: uintptr;
			tok /= size(str): uintptr;
			(tok: btoken: token, loc);
		},
	};
};

fn lex2(
	lexr: *lexer,
	loc: location,
	r: rune,
) ((token, location) | io::EOF | error) = {
	let n = match (next(lexr)?) {
		io::EOF => io::EOF,
		r: rune => r,
	};
	let tok: token = switch (r) {
		'^' => match (n) {
			r: rune => switch (r) {
				'^' => return (btoken::LXOR: token, loc),
				'=' => return (btoken::BXOREQ: token, loc),
				*   => btoken::BXOR,
			},
			io::EOF => btoken::BXOR,
		},
		'*' => match (n) {
			r: rune => switch (r) {
				'=' => return (btoken::TIMESEQ: token, loc),
				*   => btoken::TIMES,
			},
			io::EOF => btoken::TIMES,
		},
		'/' => match (n) {
			r: rune => switch (r) {
				'=' => return (btoken::DIVEQ: token, loc),
				'/' => {
					// Comment
					for (true) match (next(lexr)?) {
						io::EOF => break,
						r: rune => if (r == '\n') {
							break;
						},
					};
					return lex(lexr);
				},
				*   => btoken::DIV,
			},
			io::EOF => btoken::DIV,
		},
		'%' => match (n) {
			r: rune => switch (r) {
				'=' => return (btoken::MODEQ: token, loc),
				*   => btoken::MODULO,
			},
			io::EOF => btoken::MODULO,
		},
		'+' => match (n) {
			r: rune => switch (r) {
				'=' => return (btoken::PLUSEQ: token, loc),
				*   => btoken::PLUS,
			},
			io::EOF => btoken::PLUS,
		},
		'-' => match (n) {
			r: rune => switch (r) {
				'=' => return (btoken::MINUSEQ: token, loc),
				*   => btoken::MINUS,
			},
			io::EOF => btoken::MINUS,
		},
		':' => match (n) {
			r: rune => switch (r) {
				':' => return (btoken::DOUBLE_COLON: token, loc),
				*   => btoken::COLON,
			},
			io::EOF => btoken::COLON,
		},
		'!' => match (n) {
			r: rune => switch (r) {
				'=' => return (btoken::NEQUAL: token, loc),
				*   => btoken::LNOT,
			},
			io::EOF => btoken::LNOT,
		},
		'&' => match (n) {
			r: rune => switch (r) {
				'&' => return (btoken::LAND: token, loc),
				'=' => return (btoken::ANDEQ: token, loc),
				*   => btoken::BAND,
			},
			io::EOF => btoken::BAND,
		},
		'|' => match (n) {
			r: rune => switch (r) {
				'|' => return (btoken::LOR: token, loc),
				'=' => return (btoken::OREQ: token, loc),
				*   => btoken::BOR,
			},
			io::EOF => btoken::BOR,
		},
		'=' => match (n) {
			r: rune => switch (r) {
				'=' => return (btoken::LEQUAL: token, loc),
				*   => btoken::EQUAL,
			},
			io::EOF => btoken::EQUAL,
		},
		* => return syntaxerr(loc, "unknown token sequence"),
	};
	unget(lexr, n);
	return (tok, loc);
};

fn lex3(
	lex: *lexer,
	loc: location,
	r: rune,
) ((token, location) | io::EOF | error) = {
	let n = match (next(lex)?) {
		io::EOF => return switch (r) {
			'.' => (btoken::DOT: token, loc),
			'<' => (btoken::LESS: token, loc),
			'>' => (btoken::GREATER: token, loc),
		},
		r: rune => r,
	};
	return switch (r) {
		'.' => lex3dot(lex, loc, n),
		'<' => lex3lt(lex, loc, n),
		'>' => lex3gt(lex, loc, n),
		* => syntaxerr(loc, "unknown token sequence"),
	};
};

fn lex3dot(
	lex: *lexer,
	loc: location,
	n: rune,
) ((token, location) | io::EOF | error) = {
	let tok: token = switch (n) {
		'.' => {
			let q = match (next(lex)?) {
				io::EOF => io::EOF,
				r: rune => r,
			};
			let t = match (q) {
				r: rune => switch (r) {
					'.' => return (btoken::ELLIPSIS: token, loc),
					*   => btoken::SLICE,
				},
				io::EOF => btoken::SLICE,
			};
			unget(lex, q);
			t;
		},
		* => {
			unget(lex, n);
			btoken::DOT;
		}
	};
	return (tok, loc);
};

fn lex3lt(
	lex: *lexer,
	loc: location,
	n: rune,
) ((token, location) | io::EOF | error) = {
	let tok: token = switch (n) {
		'<' => {
			let q = match (next(lex)?) {
				io::EOF => io::EOF,
				r: rune => r,
			};
			let t = match (q) {
				r: rune => switch (r) {
					'=' => return (btoken::LSHIFTEQ: token, loc),
					*   => btoken::LSHIFT,
				},
				io::EOF => btoken::LSHIFT,
			};
			unget(lex, q);
			t;
		},
		'=' => btoken::LESSEQ,
		* => {
			unget(lex, n);
			btoken::LESS;
		}
	};
	return (tok, loc);
};

fn lex3gt(
	lex: *lexer,
	loc: location,
	n: rune,
) ((token, location) | io::EOF | error) = {
	let tok: token = switch (n) {
		'>' => {
			let q = match (next(lex)?) {
				io::EOF => io::EOF,
				r: rune => r,
			};
			let t = match (q) {
				r: rune => switch (r) {
					'=' => return (btoken::RSHIFTEQ: token, loc),
					*   => btoken::RSHIFT,
				},
				io::EOF => btoken::RSHIFT,
			};
			unget(lex, q);
			t;
		},
		'=' => btoken::GREATEREQ,
		* => {
			unget(lex, n);
			btoken::GREATER;
		}
	};
	return (tok, loc);
};

// Unlex a single token. The next call to [lex] will return this token, location
// pair. Only one unlex is supported at a time; you must call [lex] before
// calling [unlex] again.
export fn unlex(lex: *lexer, tok: (token, location)) void = {
	assert(lex.un is void, "attempted to unlex more than one token");
	lex.un = tok;
};

fn next(lex: *lexer) (rune | io::EOF | io::error) = {
	match (lex.rb[0]) {
		void => void,
		r: (rune | io::EOF) => {
			lex.rb[0] = lex.rb[1];
			lex.rb[1] = void;
			return r;
		},
	};

	for (true) {
		return match (bufio::scanrune(lex.in)) {
			e: (io::EOF | io::error) => e,
			r: rune => {
				lexloc(lex, r);
				r;
			},
		};
	};

	abort("unreachable");
};

fn nextw(lex: *lexer) ((rune, location) | io::EOF | io::error) = {
	for (true) {
		let loc = mkloc(lex);
		match (next(lex)) {
			e: (io::error | io::EOF) => return e,
			r: rune => if (!ascii::isspace(r)) {
				return (r, loc);
			},
		};
	};
	abort();
};

fn lexloc(lex: *lexer, r: rune) void = {
	switch (r) {
		'\n' => {
			lex.loc.0 += 1;
			lex.loc.1 = 1;
		},
		'\t' => lex.loc.1 += 8,
		*    => lex.loc.1 += 1,
	};
};

fn unget(lex: *lexer, r: (rune | io::EOF)) void = {
	if (!(lex.rb[0] is void)) {
		assert(lex.rb[1] is void, "ungot too many runes");
		lex.rb[1] = lex.rb[0];
	};
	lex.rb[0] = r;
};

fn mkloc(lex: *lexer) location = location {
	path = lex.path,
	line = lex.loc.0,
	col = lex.loc.1,
};

fn syntaxerr(loc: location, why: str) error = (loc, why);
