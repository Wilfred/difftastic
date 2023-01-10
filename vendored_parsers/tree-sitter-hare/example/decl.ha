use io;
use fmt;
use hare::ast;
use hare::lex;
use strio;

export fn decl(out: *io::stream, d: ast::decl) (size | io::error) = {
	let n = 0z;
	if (d.exported) {
		n += fmt::fprint(out, "export ")?;
	};
	match (d.decl) {
		g: []ast::decl_global => {
			n += fmt::fprint(out,
				if (g[0].is_const) "def " else "let ")?;
			for (let i = 0z; i < len(g); i += 1) {
				if (len(g[i].symbol) != 0) {
					n += fmt::fprintf(out,
						"@symbol(\"{}\") ", g[i].symbol)?;
				};
				n += ident(out, g[i].ident)?;
				n += fmt::fprint(out, ": ")?;
				n += _type(out, 0, g[i]._type)?;
				n += fmt::fprint(out, " = ")?;
				n += expr(out, 0, g[i].init)?;
				if (i + 1 < len(g)) {
					n += fmt::fprint(out, ", ")?;
				};
			};
		},
		t: []ast::decl_type => {
			n += fmt::fprint(out, "type ")?;
			for (let i = 0z; i < len(t); i += 1) {
				n += ident(out, t[i].ident)?;
				n += fmt::fprint(out, " = ")?;
				n += _type(out, 0, t[i]._type)?;
				if (i + 1 < len(t)) {
					n += fmt::fprint(out, ", ")?;
				};
			};
		},
		f: ast::decl_func => {
			n += fmt::fprint(out, switch (f.attrs) {
				ast::fndecl_attrs::NONE => "",
				ast::fndecl_attrs::FINI => "@fini ",
				ast::fndecl_attrs::INIT => "@init ",
				ast::fndecl_attrs::TEST => "@test ",
			})?;
			let p = f.prototype._type as ast::func_type;
			if (p.attrs & ast::func_attrs::NORETURN != 0) {
				n += fmt::fprint(out, "@noreturn ")?;
			};
			if (len(f.symbol) != 0) {
				n += fmt::fprintf(out, "@symbol(\"{}\") ",
					f.symbol)?;
			};
			n += fmt::fprint(out, "fn ")?;
			n += ident(out, f.ident)?;
			n += prototype(out, 0,
				f.prototype._type as ast::func_type)?;
			match (f.body) {
				void => void,
				e: ast::expr => {
					n += fmt::fprint(out, " = ")?;
					n += expr(out, 0, e)?;
				},
			};
		},
	};
	n += fmt::fprint(out, ";")?;
	return n;
};

fn decl_test(d: ast::decl, expected: str) bool = {
	let buf = strio::dynamic();
	decl(buf, d) as size;
	let s = strio::finish(buf);
	defer free(s);
	return s == expected;
};

@test fn decl() void = {
	let loc = lex::location {
		path = "<test>",
		line = 0,
		col = 0,
	};
	let type_int = ast::_type {
		loc = loc,
		flags = 0,
		_type = ast::builtin_type::INT,
	};
	let type_fn = ast::_type {
		loc = loc,
		flags = ast::type_flags::CONST,
		_type = ast::func_type {
			result = &type_int,
			attrs = ast::func_attrs::NORETURN,
			variadism = ast::variadism::HARE,
			params = [
				ast::func_param {
					loc = loc,
					name = "foo",
					_type = &type_int,
				},
				ast::func_param {
					loc = loc,
					name = "bar",
					_type = &type_int,
				},
			],
		},
	};
	let expr_void = void: ast::constant_expr: ast::expr;

	let d = ast::decl {
		loc = loc,
		exported = false,
		decl = [
			ast::decl_global {
				is_const = false,
				symbol = "",
				ident = ["foo", "bar"],
				_type = type_int,
				init = expr_void,
			},
			ast::decl_global {
				is_const = false,
				symbol = "foobar",
				ident = ["baz"],
				_type = type_int,
				init = expr_void,
			},
		],
	};
	assert(decl_test(d, "let foo::bar: int = void, @symbol(\"foobar\") baz: int = void;"));

	d.exported = true;
	d.decl = [
		ast::decl_global {
			is_const = true,
			ident = ["foo"],
			_type = type_int,
			init = expr_void,
			...
		},
	];
	assert(decl_test(d, "export def foo: int = void;"));

	d.exported = false;
	d.decl = [
		ast::decl_type {
			ident = ["foo"],
			_type = type_int,
		},
		ast::decl_type {
			ident = ["bar"],
			_type = type_int,
		},
	];
	assert(decl_test(d, "type foo = int, bar = int;"));

	d.decl = ast::decl_func {
		symbol = "foo",
		ident = ["foo"],
		prototype = type_fn,
		body = void,
		attrs = ast::fndecl_attrs::FINI,
	};
	assert(decl_test(d, "@fini @noreturn @symbol(\"foo\") fn foo(foo: int, bar: int...) int;"));

	type_fn._type = ast::func_type {
		result = &type_int,
		attrs = 0,
		variadism = ast::variadism::NONE,
		params = [
			ast::func_param {
				loc = loc,
				name = "",
				_type = &type_int,
			},
		],
	};
	d.decl = ast::decl_func {
		symbol = "",
		ident = ["foo"],
		prototype = type_fn,
		body = expr_void,
		attrs = 0,
	};
	assert(decl_test(d, "fn foo(_: int) int = void;"));
};
