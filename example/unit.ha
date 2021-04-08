use io;
use fmt;
use hare::ast;

export fn subunit(out: *io::stream, s: ast::subunit) (size | io::error) = {
	let n = 0z;
	for (let i = 0z; i < len(s.imports); i += 1) {
		n += import(out, s.imports[i])?;
		n += fmt::fprintln(out)?;
	};
	for (let i = 0z; i < len(s.decls); i += 1) {
		n += decl(out, s.decls[i])?;
		n += fmt::fprintln(out)?;
	};
	return n;
};
