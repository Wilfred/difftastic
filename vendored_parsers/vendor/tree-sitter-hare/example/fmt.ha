// A format string consists of a string of literal characters, to be printed
// verbatim, and format sequences, which describe how to format arguments from
// a set of variadic parameters for printing.
//
// A format sequence is enclosed in curly braces '{}'. An empty sequence takes
// the next argument from the parameter list, in order. A specific parameter may
// be selected by indexing it from zero: '{0}', '{1}', and so on. To print '{',
// use '{{', and for '}', use '}}'.
//
// You may use a colon to add format modifiers; for example, '{:x}' will format
// an argument in hexadecimal, and '{3:-10}' will left-align the 3rd argument to
// at least 10 characters.
//
// The format modifiers takes the form of an optional flag character:
//
// 0: Numeric values are zero-padded up to the required width.
// -: The value shall be left-aligned, and spaces inserted on the right to meet
//    the required width. '-' takes precedence over '0' if both are used.
//  : (a space) insert a space before positive numbers, where '-' would be if it
//    were negative.
// +: insert a '+' before positive numbers, where '-' would be if it were
//    negative. '+' takes precedence over ' ' if both are used.
//
// Following the flag, an optional decimal number shall specify the minimum
// width of this field. If '0' or '-' were not given, the default behavior shall
// be to pad with spaces to achieve the necessary width.
//
// Following the width, an optional precision may be given as a decimal number
// following a '.' character. For integer types, this gives the minimum number
// of digits to include. For floating types, this gives the number of digits
// following the radix to include.
//
// Following the precision, an optional character controls the output format:
//
// x, X: print in lowercase or uppercase hexadecimal
// o, b: print in octal or binary
//
// TODO: Expand this with more format modifiers
use ascii;
use bufio;
use encoding::utf8;
use io;
use os;
use strconv;
use strings;
use types;

// Tagged union of all types which are formattable.
export type formattable =
	(...types::numeric | uintptr | str | rune | bool | nullable *void);

// Formats text for printing and writes it to [os::stdout].
export fn printf(fmt: str, args: formattable...) (io::error | size) =
	fprintf(os::stdout, fmt, args...);

// Formats text for printing and writes it to [os::stdout], followed by a line
// feed.
export fn printfln(fmt: str, args: formattable...) (io::error | size) =
	fprintfln(os::stdout, fmt, args...);

// Formats text for printing and writes it to [os::stderr].
export fn errorf(fmt: str, args: formattable...) (io::error | size) =
	fprintf(os::stderr, fmt, args...);

// Formats text for printing and writes it to [os::stderr], followed by a line
// feed.
export fn errorfln(fmt: str, args: formattable...) (io::error | size) =
	fprintfln(os::stderr, fmt, args...);

// Formats text for printing and writes it into a heap-allocated string. The
// caller must free the return value.
export fn asprintf(fmt: str, args: formattable...) str = {
	let buf = bufio::dynamic(io::mode::WRITE);
	assert(fprintf(buf, fmt, args...) is size);
	return strings::fromutf8_unsafe(bufio::finish(buf));
};

// Formats text for printing and writes it into a caller supplied buffer. The
// returned string is borrowed from this buffer.
export fn bsprintf(buf: []u8, fmt: str, args: formattable...) str = {
	let sink = bufio::fixed(buf, io::mode::WRITE);
	let l = fprintf(sink, fmt, args...) as size;
	return strings::fromutf8_unsafe(buf[..l]);
};

// Formats text for printing and writes it to [os::stderr], followed by a line
// feed, then exits the program with an error status.
export @noreturn fn fatal(fmt: str, args: formattable...) void = {
	fprintfln(os::stderr, fmt, args...);
	os::exit(1);
};

// Formats text for printing and writes it to an [io::stream], followed by a
// line feed.
export fn fprintfln(
	s: *io::stream,
	fmt: str,
	args: formattable...
) (io::error | size) = {
	return fprintf(s, fmt, args...)? + io::write(s, ['\n': u32: u8])?;
};

// Formats values for printing using the default format modifiers and writes
// them to [os::stdout] separated by spaces 
export fn print(args: formattable...) (io::error | size) =
	fprint(os::stdout, args...);

// Formats values for printing using the default format modifiers and writes
// them to [os::stdout] separated by spaces and followed by a line feed
export fn println(args: formattable...) (io::error | size) =
	fprintln(os::stdout, args...);

// Formats values for printing using the default format modifiers and writes
// them to [os::stderr] separated by spaces 
export fn error(args: formattable...) (io::error | size) =
	fprint(os::stderr, args...);

// Formats values for printing using the default format modifiers and writes
// them to [os::stderr] separated by spaces and followed by a line feed
export fn errorln(args: formattable...) (io::error | size) =
	fprintln(os::stderr, args...);

// Formats values for printing using the default format modifiers and writes
// them into a heap-allocated string separated by spaces. The caller must free
// the return value.
export fn asprint(args: formattable...) str = {
	let buf = bufio::dynamic(io::mode::WRITE);
	assert(fprint(buf, args...) is size);
	return strings::fromutf8_unsafe(bufio::finish(buf));
};

// Formats values for printing using the default format modifiers and writes
// them into a caller supplied buffer separated by spaces. The returned string
// is borrowed from this buffer.
export fn bsprint(buf: []u8, args: formattable...) str = {
	let sink = bufio::fixed(buf, io::mode::WRITE);
	assert(fprint(sink, args...) is size);
	return strings::fromutf8_unsafe(buf);
};

// Formats values for printing using the default format modifiers and writes
// them to an [io::stream] separated by spaces and followed by a line feed
export fn fprintln(s: *io::stream, args: formattable...) (io::error | size) = {
	return fprint(s, args...)? + io::write(s, ['\n': u32: u8])?;
};

// Formats values for printing using the default format modifiers and writes
// them to an [io::stream] separated by spaces 
export fn fprint(s: *io::stream, args: formattable...) (io::error | size) = {
	let mod = modifiers { base = strconv::base::DEC, ... };
	let n = 0z;
	for (let i = 0z; i < len(args); i += 1) {
		n += format(s, args[i], &mod)?;
		if (i != len(args) - 1) {
			n += io::write(s, [' ': u32: u8])?;
		};
	};
	return n;
};

type negation = enum {
	NONE,
	SPACE,
	PLUS,
};

type padding = enum {
	ALIGN_RIGHT,
	ALIGN_LEFT,
	ZEROES,
};

type modifiers = struct {
	padding:   padding,
	negation:  negation,
	width:     uint,
	precision: uint,
	base:      strconv::base,
};

type modflags = enum uint {
	NONE  = 0,
	ZERO  = 1 << 0,
	MINUS = 1 << 1,
	SPACE = 1 << 2,
	PLUS  = 1 << 3,
};

// Formats text for printing and writes it to an [io::stream].
export fn fprintf(
	s: *io::stream,
	fmt: str,
	args: formattable...
) (io::error | size) = {
	let n = 0z, i = 0z;
	let iter = strings::iter(fmt);
	for (true) {
		let r: rune = match (strings::next(&iter)) {
			void => break,
			r: rune => r,
		};

		if (r == '{') {
			r = match (strings::next(&iter)) {
				void => abort("Invalid format string (unterminated '{')"),
				r: rune => r,
			};

			const arg = if (r == '{') {
				n += io::write(s, utf8::encoderune('{'))?;
				continue;
			} else if (ascii::isdigit(r)) {
				strings::push(&iter, r);
				args[scan_uint(&iter)];
			} else {
				strings::push(&iter, r);
				i += 1;
				args[i - 1];
			};

			let mod = modifiers { base = strconv::base::DEC, ... };
			r = match (strings::next(&iter)) {
				void => abort("Invalid format string (unterminated '{')"),
				r: rune => r,
			};
			switch (r) {
				':' => scan_modifiers(&iter, &mod),
				'}' => void,
				*   => abort("Invalid format string"),
			};

			n += format(s, arg, &mod)?;
		} else if (r == '}') {
			match (strings::next(&iter)) {
				void => abort("Invalid format string (hanging '}')"),
				r: rune => assert(r == '}', "Invalid format string (hanging '}')"),
			};

			n += io::write(s, utf8::encoderune('}'))?;
		} else {
			n += io::write(s, utf8::encoderune(r))?;
		};
	};

	return n;
};

fn format(out: *io::stream, arg: formattable, mod: *modifiers) (size | io::error) = {
	let z = format_raw(io::empty, arg, mod)?;

	let pad: []u8 = [];
	if (z < mod.width: size) {
		pad = utf8::encoderune(switch (mod.padding) {
			padding::ZEROES => '0',
			* => ' ',
		});
	};

	if (mod.padding == padding::ALIGN_LEFT) {
		format_raw(out, arg, mod);
	};

	for (z < mod.width: size) {
		z += io::write(out, pad)?;
	};

	if (mod.padding != padding::ALIGN_LEFT) {
		format_raw(out, arg, mod);
	};

	return z;
};

fn format_raw(
	out: *io::stream,
	arg: formattable,
	mod: *modifiers,
) (size | io::error) = match (arg) {
	s: str => io::write(out, strings::toutf8(s)),
	r: rune => io::write(out, utf8::encoderune(r)),
	b: bool => io::write(out, strings::toutf8(if (b) "true" else "false")),
	n: types::numeric => {
		let s = strconv::numerictosb(n, mod.base);
		io::write(out, strings::toutf8(s));
	},
	p: uintptr => {
		let s = strconv::uptrtosb(p, mod.base);
		io::write(out, strings::toutf8(s));
	},
	v: nullable *void => match (v) {
		v: *void => {
			let s = strconv::uptrtosb(v: uintptr,
				strconv::base::HEX_LOWER);
			let n = io::write(out, strings::toutf8("0x"))?;
			n += io::write(out, strings::toutf8(s))?;
			n;
		},
		null => format(out, "(null)", mod),
	},
};


fn scan_uint(iter: *strings::iterator) uint = {
	let num: []u8 = [];
	defer free(num);
	for (true) {
		let r = match (strings::next(iter)) {
			void => abort("Invalid format string (unterminated '{')"),
			r: rune => r,
		};

		if (ascii::isdigit(r)) {
			append(num, r: u32: u8);
		} else {
			strings::push(iter, r);
			match (strconv::stou(strings::fromutf8(num))) {
				(strconv::invalid | strconv::overflow) =>
					abort("Invalid format string (invalid index)"),
				u: uint => return u,
			};
		};
	};
	abort("unreachable");
};

fn scan_modifier_flags(iter: *strings::iterator, mod: *modifiers) void = {
	let flags = modflags::NONE;

	for (true) {
		let r = match (strings::next(iter)) {
			void => abort("Invalid format string (unterminated '{')"),
			r: rune => r,
		};

		switch (r) {
			'0' => flags |= modflags::ZERO,
			'-' => flags |= modflags::MINUS,
			' ' => flags |= modflags::SPACE,
			'+' => flags |= modflags::PLUS,
			* => {
				strings::push(iter, r);
				break;
			},
		};
	};

	mod.padding = if (flags & modflags::MINUS != 0)
		padding::ALIGN_LEFT
	else if (flags & modflags::ZERO != 0)
		padding::ZEROES
	else
		padding::ALIGN_RIGHT;

	mod.negation = if (flags & modflags::PLUS != 0)
		negation::PLUS
	else if (flags & modflags::SPACE != 0)
		negation::SPACE
	else
		negation::NONE;
};

fn scan_modifier_width(iter: *strings::iterator, mod: *modifiers) void = {
	let r = match (strings::next(iter)) {
		void => abort("Invalid format string (unterminated '{')"),
		r: rune => r,
	};

	let is_digit = ascii::isdigit(r);
	strings::push(iter, r);

	if (is_digit) {
		mod.width = scan_uint(iter);
	};
};

fn scan_modifier_precision(iter: *strings::iterator, mod: *modifiers) void = {
	let r = match (strings::next(iter)) {
		void => abort("Invalid format string (unterminated '{')"),
		r: rune => r,
	};

	if (r == '.') {
		mod.precision = scan_uint(iter);
	} else {
		strings::push(iter, r);
	};
};

fn scan_modifier_base(iter: *strings::iterator, mod: *modifiers) void = {
	let r = match (strings::next(iter)) {
		void => abort("Invalid format string (unterminated '{')"),
		r: rune => r,
	};

	switch (r) {
		'x' => mod.base = strconv::base::HEX_LOWER,
		'X' => mod.base = strconv::base::HEX_UPPER,
		'o' => mod.base = strconv::base::OCT,
		'b' => mod.base = strconv::base::BIN,
		* => strings::push(iter, r),
	};
};

fn scan_modifiers(iter: *strings::iterator, mod: *modifiers) void = {
	scan_modifier_flags(iter, mod);
	scan_modifier_width(iter, mod);
	scan_modifier_precision(iter, mod);
	scan_modifier_base(iter, mod);

	// eat '}'
	let terminated = match (strings::next(iter)) {
		void => false,
		r: rune => r == '}',
	};
	assert(terminated, "Invalid format string (unterminated '{')");
};

@test fn fmt() void = {
	let buf: [1024]u8 = [0...];
	assert(bsprintf(buf, "hello world") == "hello world");
	assert(bsprintf(buf, "{} {}", "hello", "world") == "hello world");
	assert(bsprintf(buf, "{0} {1}", "hello", "world") == "hello world");
	assert(bsprintf(buf, "{0} {0}", "hello", "world") == "hello hello");
	assert(bsprintf(buf, "{1} {0} {1}", "hello", "world") == "world hello world");
	assert(bsprintf(buf, "x: {:08x}", 0xBEEF) == "x: 0000beef");
	assert(bsprintf(buf, "x: {:8X}", 0xBEEF) == "x:     BEEF");
	assert(bsprintf(buf, "x: {:-8X}", 0xBEEF) == "x: BEEF    ");
	assert(bsprintf(buf, "x: {:o}", 0o755) == "x: 755");
	assert(bsprintf(buf, "x: {:b}", 0b11011) == "x: 11011");
	assert(bsprintf(buf, "{} {} {} {}", true, false, null, 'x')
		== "true false (null) x");
};
