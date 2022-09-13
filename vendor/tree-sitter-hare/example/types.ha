use fmt;
use hare::lex;

// All possible error types
export type error = lex::error!;

// Convert an error into a human-friendly string
export fn strerror(err: error) const str = lex::strerror(err: lex::error);

fn syntaxerr(
	loc: lex::location,
	fmt: str,
	args: fmt::formattable...
) lex::error = {
	let why = fmt::asprintf(fmt, args...);
	return (loc, why): lex::syntax: lex::error;
};

fn mkloc(lex: *lex::lexer) lex::location = lex::location {
	path = lex.path,
	line = lex.loc.0,
	col = lex.loc.1,
};
