use bufio;
use fmt;
use io;
use io::{mode};
use strings;

@test fn unget() void = {
	let buf = bufio::fixed(strings::toutf8("z"), mode::READ);
	let lexer = init(buf, "<test>");
	unget(&lexer, 'x');
	unget(&lexer, 'y');
	assert(next(&lexer) as rune == 'y');
	assert(next(&lexer) as rune == 'x');
	assert(next(&lexer) as rune == 'z');
	assert(next(&lexer) is io::EOF);
	unget(&lexer, io::EOF);
	assert(next(&lexer) is io::EOF);
};

@test fn unlex() void = {
	let lexer = init(io::empty, "<test>");
	unlex(&lexer, (btoken::IF, location {
		path = "<test>",
		line = 1234,
		col = 1234,
	}));
	let t = lex(&lexer) as (token, location);
	assert(t.0 is btoken);
	assert(t.0 as btoken == btoken::IF);
	assert(t.1.path == "<test>");
	assert(t.1.line == 1234 && t.1.col == 1234);
};

fn litassert(expected: literal, actual: literal) void = match (expected) {
	e: u8 => assert(actual as u8 == e),
	e: u16 => assert(actual as u16 == e),
	e: u32 => assert(actual as u32 == e),
	e: u64 => assert(actual as u64 == e),
	e: uint => assert(actual as uint == e),
	e: uintptr => assert(actual as uintptr == e),
	e: i8 => assert(actual as i8 == e),
	e: i16 => assert(actual as i16 == e),
	e: i32 => assert(actual as i32 == e),
	e: i64 => assert(actual as i64 == e),
	e: int => assert(actual as int == e),
	e: iconst => assert(actual as iconst == e),
	e: f32 => assert(actual as f32 == e),
	e: f64 => assert(actual as f64 == e),
	e: fconst => assert(actual as fconst == e),
	e: rune => assert(actual as rune == e),
	e: str => assert(actual as str == e),
};

fn lextest(in: str, expected: [](uint, uint, token)) void = {
	let buf = bufio::fixed(strings::toutf8(in), mode::READ);
	let lexer = init(buf, "<test>");
	for (let i = 0z; i < len(expected); i += 1) {
		let eline = expected[i].0, ecol = expected[i].1,
			etok = expected[i].2;
		let tl = match (lex(&lexer)) {
			tl: (token, location) => tl,
			io::EOF => {
				fmt::errorfln("unexpected EOF at {}", i);
				abort();
			},
			err: error => {
				fmt::errorfln("{}: {}", i, strerror(err));
				abort();
			},
		};
		let tok = tl.0, loc = tl.1;
		match (tok) {
			b: btoken => if (!(etok is btoken) || etok as btoken != b) {
				fmt::errorfln("bad token at {}: got {}, wanted {}",
					i, tokstr(tok), tokstr(etok));
				abort();
			},
			n: name => if (!(etok is name) || etok as name != n) {
				fmt::errorfln("bad token at {}: got {}, wanted {}",
					i, tokstr(tok), tokstr(etok));
				abort();
			},
			l: literal => if (!(etok is literal)) {
				fmt::errorfln("bad token at {}: got {}, wanted {}",
					i, tokstr(tok), tokstr(etok));
				abort();
			} else {
				litassert(l, etok as literal);
			},
			* => abort("TODO"),
		};
		assert(loc.path == "<test>");
		if (loc.line != eline || loc.col != ecol) {
			fmt::errorfln("bad line/col at {}: got {},{}; wanted {},{}",
				i, loc.line, loc.col, eline, ecol);
			abort();
		};
	};
	assert(lex(&lexer) is io::EOF);
};

@test fn lex1() void = {
	const in = "~,{[(}]);";
	const expected: [_](uint, uint, token) = [
		(1, 1, btoken::BNOT),
		(1, 2, btoken::COMMA),
		(1, 3, btoken::LBRACE),
		(1, 4, btoken::LBRACKET),
		(1, 5, btoken::LPAREN),
		(1, 6, btoken::RBRACE),
		(1, 7, btoken::RBRACKET),
		(1, 8, btoken::RPAREN),
		(1, 9, btoken::SEMICOLON),
	];
	lextest(in, expected);
};

@test fn lex2() void = {
	// Ends with = to test =, EOF
	const in = "^ ^^ ^= * *= % %= + += - -= : :: & && &= | || |= = == / /= =";
	const expected: [_](uint, uint, token) = [
		(1, 1,  btoken::BXOR),
		(1, 3,  btoken::LXOR),
		(1, 6,  btoken::BXOREQ),
		(1, 9,  btoken::TIMES),
		(1, 11, btoken::TIMESEQ),
		(1, 14, btoken::MODULO),
		(1, 16, btoken::MODEQ),
		(1, 19, btoken::PLUS),
		(1, 21, btoken::PLUSEQ),
		(1, 24, btoken::MINUS),
		(1, 26, btoken::MINUSEQ),
		(1, 29, btoken::COLON),
		(1, 31, btoken::DOUBLE_COLON),
		(1, 34, btoken::BAND),
		(1, 36, btoken::LAND),
		(1, 39, btoken::ANDEQ),
		(1, 42, btoken::BOR),
		(1, 44, btoken::LOR),
		(1, 47, btoken::OREQ),
		(1, 50, btoken::EQUAL),
		(1, 52, btoken::LEQUAL),
		(1, 55,  btoken::DIV),
		(1, 57, btoken::DIVEQ),
		(1, 60, btoken::EQUAL),
	];
	lextest(in, expected);
};

@test fn lex3() void = {
	const in = ". .. ... < << <= <<= > >> >= >>= >>";
	const expected: [_](uint, uint, token) = [
		(1, 1,  btoken::DOT),
		(1, 3,  btoken::SLICE),
		(1, 6,  btoken::ELLIPSIS),
		(1, 10, btoken::LESS),
		(1, 12, btoken::LSHIFT),
		(1, 15, btoken::LESSEQ),
		(1, 18, btoken::LSHIFTEQ),
		(1, 22, btoken::GREATER),
		(1, 24, btoken::RSHIFT),
		(1, 27, btoken::GREATEREQ),
		(1, 30, btoken::RSHIFTEQ),
		(1, 34, btoken::RSHIFT),
	];
	lextest(in, expected);
};

@test fn lexname() void = {
	const in = "hello world return void foobar";
	const expected: [_](uint, uint, token) = [
		(1, 1,  "hello": name),
		(1, 7,  "world": name),
		(1, 13, btoken::RETURN),
		(1, 20, btoken::VOID),
		(1, 25, "foobar": name),
	];
	lextest(in, expected);
};

@test fn keywords() void = {
	let keywords = bmap[..btoken::LAST_KEYWORD+1];
	for (let i = 0z; i < len(keywords); i += 1) {
		let lexer = init(bufio::fixed(
			strings::toutf8(keywords[i]), mode::READ),
			"<test>");
		let tl = match (lex(&lexer)) {
			tl: (token, location) => tl,
			* => abort(),
		};
		let tok = tl.0;
		assert(tok is btoken);
		assert(tok as btoken == i: btoken);
	};
};

@test fn comments() void = {
	const in = "hello world // foo\nbar";
	const expected: [_](uint, uint, token) = [
		(1, 1,  "hello": name),
		(1, 7,  "world": name),
		(2, 1, "bar": name),
	];
	lextest(in, expected);
};

@test fn runes() void = {
	const in = "'a' 'b' '\\a' '\\b' '\\f' '\\n' '\\r' '\\t' '\\v' '\\0' "
		"'\\\\' '\\\'' '\\x0A' '\\u1234' '\\U12345678'";
	const expected: [_](uint, uint, token) = [
		(1, 1,  'a'),
		(1, 5,  'b'),
		(1, 9,  '\a'),
		(1, 14, '\b'),
		(1, 19, '\f'),
		(1, 24, '\n'),
		(1, 29, '\r'),
		(1, 34, '\t'),
		(1, 39, '\v'),
		(1, 44, '\0'),
		(1, 49, '\\'),
		(1, 54, '\''),
		(1, 59, '\x0A'),
		(1, 66, '\u1234'),
		(1, 75, '\U12345678'),
	];
	lextest(in, expected);
};

@test fn strings() void = {
	const in = "\"a\" \"b\" \"\\a\" \"\\b\" \"\\f\" \"\\n\" \"\\r\" "
		"\"\\t\" \"\\v\" \"\\0\" \"\\\\\" \"\\\'\"";
	const expected: [_](uint, uint, token) = [
		(1, 1,  "a": literal),
		(1, 5,  "b": literal),
		(1, 9,  "\a": literal),
		(1, 14, "\b": literal),
		(1, 19, "\f": literal),
		(1, 24, "\n": literal),
		(1, 29, "\r": literal),
		(1, 34, "\t": literal),
		(1, 39, "\v": literal),
		(1, 44, "\0": literal),
		(1, 49, "\\": literal),
		(1, 54, "\'": literal),
	];
	// TODO: test \x and \u and \U
	lextest(in, expected);
	const in = "\"ab\\a\\b\\f\\n\\r\\t\\v\\0\\\\\\'\"";
	const expected: [_](uint, uint, token) = [
		(1, 1,  "ab\a\b\f\n\r\t\v\0\\\'": literal),
	];
	lextest(in, expected);
	const in = "\"hello world\" \"こんにちは\" \"return\" \"foo\"";
	const expected: [_](uint, uint, token) = [
		(1, 1, "hello world": literal),
		(1, 15, "こんにちは": literal),
		(1, 23, "return": literal),
		(1, 32, "foo": literal),
	];
	lextest(in, expected);
};
