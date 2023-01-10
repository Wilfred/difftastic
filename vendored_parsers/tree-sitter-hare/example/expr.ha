use io;
use fmt;
use hare::ast;

// TODO
export fn expr(
	out: *io::stream,
	indent: size,
	t: ast::expr
) (size | io::error) = {
	return match (t) {
		e: ast::access_expr => abort(),
		e: ast::alloc_expr => abort(),
		e: ast::append_expr => abort(),
		e: ast::assert_expr => abort(),
		e: ast::assign_expr => abort(),
		e: ast::binarithm_expr => {
			let z = expr(out, indent, *e.lvalue)?;
			z += fmt::fprintf(out, " {} ", switch (e.op) {
				ast::binarithm_op::BAND		=> "&",
				ast::binarithm_op::BOR		=> "|",
				ast::binarithm_op::DIV		=> "/",
				ast::binarithm_op::GT		=> ">",
				ast::binarithm_op::GTEQ		=> ">=",
				ast::binarithm_op::LAND		=> "&&",
				ast::binarithm_op::LEQUAL	=> "==",
				ast::binarithm_op::LESS		=> "<",
				ast::binarithm_op::LESSEQ	=> "<=",
				ast::binarithm_op::LOR		=> "||",
				ast::binarithm_op::LSHIFT	=> "<<",
				ast::binarithm_op::LXOR		=> "^^",
				ast::binarithm_op::MINUS	=> "-",
				ast::binarithm_op::MODULO	=> "%",
				ast::binarithm_op::NEQUAL	=> "!=",
				ast::binarithm_op::PLUS		=> "+",
				ast::binarithm_op::RSHIFT	=> ">>",
				ast::binarithm_op::TIMES	=> "*",
				ast::binarithm_op::BXOR		=> "^",
			})?;
			z += expr(out, indent, *e.rvalue)?;
			z;
		},
		e: []ast::binding_expr => abort(),
		e: ast::break_expr => abort(),
		e: ast::call_expr => abort(),
		e: ast::cast_expr => {
			let z = expr(out, indent, *e.value)?;
			const op = switch (e.kind) {
				ast::cast_kind::CAST => ": ",
				ast::cast_kind::ASSERTION => " as ",
				ast::cast_kind::TEST => " is ",
			};
			z += fmt::fprintf(out, "{}", op)?;
			z += _type(out, indent, *e._type)?;
			z;
		},
		e: ast::constant_expr => {
			assert(e is void);
			fmt::fprint(out, "void")?;
		},
		e: ast::continue_expr => abort(),
		e: ast::defer_expr => abort(),
		e: ast::delete_expr => abort(),
		e: ast::for_expr => abort(),
		e: ast::free_expr => abort(),
		e: ast::if_expr => abort(),
		e: ast::list_expr => abort(),
		e: ast::match_expr => abort(),
		e: ast::len_expr => abort(),
		e: ast::size_expr => abort(),
		e: ast::offset_expr => abort(),
		e: ast::propagate_expr => abort(),
		e: ast::return_expr => abort(),
		e: ast::slice_expr => abort(),
		e: ast::switch_expr => abort(),
		e: ast::unarithm_expr => {
			let z = fmt::fprintf(out, "{}", switch (e.op) {
				ast::unarithm_op::ADDR	=> "&",
				ast::unarithm_op::BNOT	=> "~",
				ast::unarithm_op::DEREF	=> "*",
				ast::unarithm_op::LNOT	=> "!",
				ast::unarithm_op::MINUS	=> "-",
				ast::unarithm_op::PLUS	=> "+",
			})?;
			z += expr(out, indent, *e.operand)?;
			z;
		},
	};
};
