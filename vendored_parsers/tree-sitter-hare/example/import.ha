use fmt;
use io;
use hare::ast;
use strio;

export fn import(out: *io::stream, i: ast::import) (size | io::error) = {
	let n = 0z;
	n += fmt::fprint(out, "use ")?;
	match (i) {
		m: ast::import_module => n += ident(out, m)?,
		a: ast::import_alias => {
			n += fmt::fprint(out, a.alias, "= ")?;
			n += ident(out, a.ident)?;
		},
		o: ast::import_objects => {
			n += ident(out, o.ident)?;
			n += fmt::fprint(out, "::{")?;
			for (let i = 0z; i < len(o.objects); i += 1) {
				n += fmt::fprintf(out, "{}{}", o.objects[i],
					if (i + 1 < len(o.objects)) ", "
					else "")?;
			};
			n += fmt::fprint(out, "}")?;
		},
	};
	n += fmt::fprint(out, ";")?;
	return n;
};

@test fn import() void = {
	let buf = strio::dynamic();
	import(buf, ["foo", "bar", "baz"]) as size;
	let s = strio::finish(buf);
	assert(s == "use foo::bar::baz;");
	free(s);
	buf = strio::dynamic();
	import(buf, ast::import_alias {
		ident = ["foo"],
		alias = "bar",
	}) as size;
	s = strio::finish(buf);
	assert(s == "use bar = foo;");
	free(s);
	buf = strio::dynamic();
	import(buf, ast::import_objects {
		ident = ["foo"],
		objects = ["bar", "baz"],
	}) as size;
	s = strio::finish(buf);
	assert(s == "use foo::{bar, baz};");
	free(s);
};
