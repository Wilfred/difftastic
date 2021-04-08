use bytes;
use encoding::utf8;
use io;
use strings;
use types;

// Reads a single byte from the stream.
export fn scanbyte(stream: *io::stream) (u8 | io::EOF | io::error) = {
	let buf: [1]u8 = [0...];

	return match (io::read(stream, buf)?) {
		read: size => if (read > 0) buf[0] else io::EOF,
		io::EOF    => io::EOF,
	};
};

// Reads a slice of bytes until the delimiter. Delimiter is not included. The
// return value must be freed by the caller.
export fn scantok(stream: *io::stream, delim: u8) ([]u8 | io::EOF | io::error) = {
	let buf: []u8 = [];

	for (true) {
		match (scanbyte(stream)?) {
			res: u8 => {
				if (res == delim) {
					break;
				};
				append(buf, res);
			},
			io::EOF => {
				if (len(buf) == 0) {
					return io::EOF;
				};
				break;
			},
		};
	};

	return buf;
};

// Reads a slice of bytes until a newline character (\n, 0x10). Newline itself
// is not included. The return value must be freed by the caller.
export fn scanline(stream: *io::stream) ([]u8 | io::EOF | io::error) =
	scantok(stream, '\n': u32: u8);

// Reads a rune from a UTF-8 stream.
export fn scanrune(stream: *io::stream) (rune | utf8::invalid | io::EOF | io::error) = {
	let b: [4]u8 = [0...];
	match (io::read(stream, b[..1])?) {
		n: size  => assert(n == 1),
		io::EOF => return io::EOF,
	};

	const sz = utf8::utf8sz(b[0]);
	if (sz == types::SIZE_MAX) {
		return utf8::invalid;
	};

	if (sz == 1) {
		return b[0]: u32: rune;
	};

	match (io::read(stream, b[1..sz])) {
		n: size                  => assert(n == sz - 1),
		e: (io::error | io::EOF) => return e,
	};

	let dec = utf8::decode(b[..sz]);
	return match (utf8::next(&dec)) {
		r: rune             => r,
		utf8::invalid       => utf8::invalid,
		(void | utf8::more) => io::EOF,
	};
};

@test fn scanbyte() void = {
	let buf = fixed([1, 3, 3, 7], io::mode::READ);

	assert(scanbyte(buf) as u8 == 1);
	assert(scanbyte(buf) as u8 == 3);
	assert(scanbyte(buf) as u8 == 3);
	assert(scanbyte(buf) as u8 == 7);
	assert(scanbyte(buf) is io::EOF);
};

@test fn scantok() void = {
	let buf = fixed([1, 3, 4, 5, 3, 7], io::mode::READ);

	let tok = scantok(buf, 4) as []u8;
	defer free(tok);
	assert(bytes::equal(tok, [1, 3]));

	let tok = scantok(buf, 7) as []u8;
	defer free(tok);
	assert(bytes::equal(tok, [5, 3]));

	assert(scantok(buf, 1) is io::EOF);
};

@test fn scanline() void = {
	let helloworld = strings::toutf8("hello\nworld");
	let buf = fixed(helloworld, io::mode::READ);

	let line = scanline(buf) as []u8;
	defer free(line);
	assert(bytes::equal(line, strings::toutf8("hello")));

	let line = scanline(buf) as []u8;
	defer free(line);
	assert(bytes::equal(line, strings::toutf8("world")));

	assert(scanline(buf) is io::EOF);
};

@test fn scanrune() void = {
	let in = fixed([
		0xE3, 0x81, 0x93, 0xE3, 0x82, 0x93, 0xE3, 0x81,
		0xAB, 0xE3, 0x81, 0xA1, 0xE3, 0x81, 0xAF, 0x00,
	], io::mode::READ);

	const expected: [_](rune | utf8::invalid | io::EOF | io::error) = [
		'こ', 'ん', 'に', 'ち', 'は', '\0', io::EOF,
	];
	for (let i = 0z; i < len(expected); i += 1) {
		let want = expected[i];

		match (scanrune(in)) {
			r: rune => assert(want is rune && want as rune == r),
			io::EOF => assert(want is io::EOF),
			*       => abort(),
		};
	};
};
