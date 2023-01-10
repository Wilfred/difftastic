use fmt;
use io;
use hare::ast;
use hare::lex;
use strio;

fn builtin_type(b: ast::builtin_type) str = switch (b) {
	ast::builtin_type::BOOL => "bool",
	ast::builtin_type::CHAR => "char",
	ast::builtin_type::F32 => "f32",
	ast::builtin_type::F64 => "f64",
	ast::builtin_type::FCONST => abort("FCONST has no lexical representation"),
	ast::builtin_type::I16 => "i16",
	ast::builtin_type::I32 => "i32",
	ast::builtin_type::I64 => "i64",
	ast::builtin_type::I8 => "i8",
	ast::builtin_type::ICONST => abort("ICONST has no lexical representation"),
	ast::builtin_type::INT => "int",
	ast::builtin_type::NULL => "null",
	ast::builtin_type::RUNE => "rune",
	ast::builtin_type::SIZE => "size",
	ast::builtin_type::STR => "str",
	ast::builtin_type::U16 => "u16",
	ast::builtin_type::U32 => "u32",
	ast::builtin_type::U64 => "u64",
	ast::builtin_type::U8 => "u8",
	ast::builtin_type::UINT => "uint",
	ast::builtin_type::UINTPTR => "uintptr",
	ast::builtin_type::VOID => "void",
};

fn prototype(
	out: *io::stream,
	indent: size,
	t: ast::func_type,
) (size | io::error) = {
	let n = 0z;
	n += fmt::fprint(out, "(")?;
	for (let i = 0z; i < len(t.params); i += 1) {
		let param = t.params[i];
		n += fmt::fprintf(out, "{}: ",
			if (len(param.name) == 0) "_" else param.name)?;
		n += _type(out, indent, *param._type)?;
		if (i + 1 == len(t.params)
				&& t.variadism == ast::variadism::HARE) {
			n += fmt::fprintf(out, "...")?;
		};
		if (i + 1 < len(t.params)) {
			n += fmt::fprint(out, ", ")?;
		};
	};
	if (t.variadism == ast::variadism::C) {
		n += fmt::fprint(out, ", ...")?;
	};
	n += fmt::fprint(out, ") ")?;
	n += _type(out, indent, *t.result)?;
	return n;
};

export fn _type(
	out: *io::stream,
	indent: size,
	t: ast::_type,
) (size | io::error) = {
	let n = 0z;
	if (t.flags & ast::type_flags::CONST != 0
			&& !(t._type is ast::func_type)) {
		n += fmt::fprint(out, "const ")?;
	};
	match (t._type) {
		a: ast::alias_type => {
			if (a.unwrap) {
				n += fmt::fprint(out, "...")?;
			};
			n += ident(out, a.ident)?;
		},
		b: ast::builtin_type => n += fmt::fprint(out, builtin_type(b))?,
		e: ast::enum_type => {
			n += fmt::fprint(out, "enum",
				builtin_type(e.storage), "{")?;
			indent += 1;
			for (let i = 0z; i < len(e.values); i += 1) {
				n += newline(out, indent)?;
				let value = e.values[i];
				n += fmt::fprint(out, value.name)?;
				match (value.value) {
					null => void,
					e: *ast::expr => {
						n += fmt::fprint(out, ": ")?;
						n += expr(out, indent, *e)?;
					},
				};
				n += fmt::fprint(out, ",")?;
			};
			indent -= 1;
			n += newline(out, indent)?;
			n += fmt::fprint(out, "}")?;
		},
		f: ast::func_type => {
			if (f.attrs & ast::func_attrs::NORETURN != 0) {
				n += fmt::fprint(out, "@noreturn ")?;
			};
			n += fmt::fprint(out, "fn")?;
			n += prototype(out, indent, f)?;
		},
		l: ast::list_type => {
			n += fmt::fprint(out, "[")?;
			n += match (l.length) {
				ast::len_slice => 0,
				ast::len_unbounded => fmt::fprint(out, "*")?,
				ast::len_contextual => fmt::fprint(out, "_")?,
				e: *ast::expr => expr(out, indent, *e)?,
			};
			n += fmt::fprint(out, "]")?;
			n += _type(out, indent, *l.members)?;
		},
		p: ast::pointer_type => {
			if (p.flags & ast::pointer_flags::NULLABLE != 0) {
				n += fmt::fprint(out, "nullable ")?;
			};
			n += fmt::fprint(out, "*")?;
			n += _type(out, indent, *p.referent)?;
		},
		s: []ast::struct_member => abort(), // TODO
		t: ast::tagged_type => {
			n += fmt::fprint(out, "(")?;
			for (let i = 0z; i < len(t); i += 1) {
				n += _type(out, indent, *t[i])?;
				if (i + 1 < len(t)) {
					n += fmt::fprint(out, " | ")?;
				};
			};
			n += fmt::fprint(out, ")")?;
		},
		t: ast::tuple_type => {
			n += fmt::fprint(out, "(")?;
			for (let i = 0z; i < len(t); i += 1) {
				n += _type(out, indent, *t[i])?;
				if (i + 1 < len(t)) {
					n += fmt::fprint(out, ", ")?;
				};
			};
			n += fmt::fprint(out, ")")?;
		},
	};
	if (t.flags & ast::type_flags::ERROR != 0) {
		n += fmt::fprint(out, "!")?;
	};
	return n;
};

fn type_test(t: ast::_type, expected: str) bool = {
	let buf = strio::dynamic();
	_type(buf, 0, t) as size;
	let s = strio::finish(buf);
	defer free(s);
	return s == expected;
};

@test fn _type() void = {
	let loc = lex::location {
		path = "<test>",
		line = 0,
		col = 0,
	};
	let t = ast::_type {
		loc = loc,
		flags = ast::type_flags::CONST,
		_type = ast::alias_type {
			unwrap = false,
			ident = ["foo", "bar"],
		},
	};
	let type_int = ast::_type {
		loc = loc,
		flags = 0,
		_type = ast::builtin_type::INT,
	};
	let expr_void = void: ast::constant_expr: ast::expr;

	assert(type_test(t, "const foo::bar"));
	t.flags = 0;
	t._type = ast::alias_type {
		unwrap = true,
		ident = ["baz"],
	};
	assert(type_test(t, "...baz"));

	t.flags = ast::type_flags::ERROR;
	t._type = ast::builtin_type::INT;
	assert(type_test(t, "int!"));

	t.flags = ast::type_flags::CONST | ast::type_flags::ERROR;
	t._type = ast::enum_type {
		storage = ast::builtin_type::U32,
		values = [
			ast::enum_field {
				name = "FOO",
				value = null,
			},
			ast::enum_field {
				name = "BAR",
				value = &expr_void,
			},
		],
	};
	assert(type_test(t, "const enum u32 {\n\tFOO,\n\tBAR: void,\n}!"));

	t.flags = 0;

	t._type = ast::func_type {
		result = &type_int,
		attrs = 0,
		variadism = ast::variadism::NONE,
		params = [],
	};
	assert(type_test(t, "fn() int"));
	t._type = ast::func_type {
		result = &type_int,
		attrs = ast::func_attrs::NORETURN,
		variadism = ast::variadism::C,
		params = [
			ast::func_param {
				loc = loc,
				name = "",
				_type = &type_int,
			},
		],
	};
	assert(type_test(t, "@noreturn fn(_: int, ...) int"));
	t._type = ast::func_type {
		result = &type_int,
		attrs = 0,
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
	};
	assert(type_test(t, "fn(foo: int, bar: int...) int"));

	t.flags = ast::type_flags::CONST;
	assert(type_test(t, "fn(foo: int, bar: int...) int"));

	t.flags = 0;
	t._type = ast::list_type {
		length = ast::len_slice,
		members = &type_int,
	};
	assert(type_test(t, "[]int"));
	t._type = ast::list_type {
		length = ast::len_unbounded,
		members = &type_int,
	};
	assert(type_test(t, "[*]int"));
	t._type = ast::list_type {
		length = ast::len_contextual,
		members = &type_int,
	};
	assert(type_test(t, "[_]int"));
	t._type = ast::list_type {
		length = &expr_void,
		members = &type_int,
	};
	assert(type_test(t, "[void]int"));

	t._type = ast::pointer_type {
		referent = &type_int,
		flags = 0,
	};
	assert(type_test(t, "*int"));
	t._type = ast::pointer_type {
		referent = &type_int,
		flags = ast::pointer_flags::NULLABLE,
	};
	assert(type_test(t, "nullable *int"));

	// TODO: struct_members

	t._type = [&type_int, &type_int]: ast::tagged_type;
	assert(type_test(t, "(int | int)"));

	t._type = [&type_int, &type_int]: ast::tuple_type;
	assert(type_test(t, "(int, int)"));
};
