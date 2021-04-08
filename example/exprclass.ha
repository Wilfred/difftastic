use hare::ast;
use hare::lex::{btoken};
use hare::lex;
use io;

// Parses a complex-expression.
export fn complex_expression(lexer: *lex::lexer) (ast::expr | error) = {
	// TODO: if, for, switch, match
	return simple_expression(lexer);
};

// Parses a compound-expression.
export fn compound_expression(lexer: *lex::lexer) (ast::expr | error) = {
	let tok = match (lex::lex(lexer)?) {
		io::EOF => return syntaxerr(mkloc(lexer),
			"Unexpected EOF, expected compound expression"),
		t: (lex::token, lex::location) => t,
	};

	lex::unlex(lexer, tok);
	let tok = match (tok.0) {
		tok: btoken => tok,
		* => return complex_expression(lexer),
	};

	return switch (tok) {
		btoken::LBRACE => expression_list(lexer),
		btoken::BREAK, btoken::CONTINUE, btoken::RETURN =>
			control_statement(lexer),
		* => complex_expression(lexer),
	};
};

fn scope_expression(lexer: *lex::lexer) (ast::expr | error) = {
	return simple_expression(lexer); // TODO
};

// Parses a simple-expression.
export fn simple_expression(lexer: *lex::lexer) (ast::expr | error) =
	binarithm(lexer, void, 0);
