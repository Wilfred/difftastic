==================
Assert Expression
==================

void f() {
	assert(0);
}
---
(source_file
	(function_declaration
		(type (void))
		(identifier)
		(parameters)
		(function_body
			(block_statement
				(expression_list (assert_expression
					(assert)
					(int_literal)
				))
			)
		)
	)
)

==================
Assert Expression Multiple arguments
==================

void f() {
	assert(0, "xyz");
}
---
(source_file
	(function_declaration
		(type (void))
		(identifier)
		(parameters)
		(function_body
			(block_statement
				(expression_list (assert_expression
					(assert)
					(int_literal)
					(string_literal)
				))
			)
		)
	)
)
