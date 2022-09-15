use bufio;
use fmt;
use hare::lex;
use hare::parse;
use io;
use os;
use strings;

// TODO: Expand to more kinds of errors
fn printerr(err: parse::error) void = {
	match (err) {
		err: lex::syntax => printerr_syntax(err),
		err: io::error => fmt::errorln(io::strerror(err)),
	};
};

fn printerr_syntax(err: lex::syntax) void = {
	let location = err.0, details = err.1;
	let file = os::open(location.path) as *io::stream;
	defer io::close(file);

	let line = 1u;
	for (line < location.line) {
		let r = bufio::scanrune(file) as rune;
		if (r == '\n') {
			line += 1u;
		};
	};

	let line = bufio::scanline(file) as []u8;
	defer free(line);
	let line = strings::fromutf8(line);
	fmt::errorfln("{}:{},{}: Syntax error: {}",
		location.path, location.line, location.col, details);
	fmt::errorln(line);
	for (let i = 0u; i < location.col - 2; i += 1) {
		fmt::error(" ");
	};
	fmt::errorln("^--- here");
};
