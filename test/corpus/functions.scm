==================
Basic Function
==================

int f() { return 0; }
---
(source_file
	(function_declaration
		(type (int))
		(identifier)
		(parameters)
		(function_body
			(block_statement
				(return_statement (return) (expression (int_literal)))
			)
		)
	)
)

==================
Single Parameter Function
==================

int f(int c) { return c; }
---
(source_file
	(function_declaration
		(type (int))
		(identifier)
		(parameters
			(parameter (type (int)) (identifier))
		)
    (function_body
    	(block_statement
      	(return_statement (return) (expression (identifier)))
			)
		)
	)
)

==================
Var Args Parameter Function
==================

int f(int c, ...) { return c; }
---
(source_file
	(function_declaration
		(type (int))
		(identifier)
		(parameters
			(parameter (type (int)) (identifier))
			(ellipses)
		)
		(function_body
			(block_statement
				(return_statement (return) (expression (identifier)))
			)
		)
	)
)

==================
Var Args Only Function
==================

int f(...) { return c; }
---
(source_file
	(function_declaration
		(type (int))
		(identifier)
		(parameters
			(ellipses)
		)
		(function_body
			(block_statement
				(return_statement (return) (expression (identifier)))
			)
		)
	)
)

==================
Var Args Type-Safe Function
==================

int f(int...) { return c; }
---
(source_file
	(function_declaration
		(type (int))
		(identifier)
		(parameters (parameter (type (int)) (ellipses)))
		(function_body (block_statement (return_statement (return) (expression (identifier)))))
	)
)

==================
Member Function Attributes
==================

int f(int a, int b) @safe pure @myattr { return a+b; }
---
(source_file
	(function_declaration
		(type (int))
		(identifier)
		(parameters
			(parameter (type (int)) (identifier))
			(parameter (type (int)) (identifier))
		)
		(member_function_attribute (at_attribute (identifier)))
		(member_function_attribute (pure))
    (member_function_attribute (at_attribute (identifier)))
		(function_body
			(block_statement
				(return_statement
					(return)
					(expression (binary_expression (add_expression (identifier) (identifier))))
				)
			)
		)
	)
)

===
Function literal no parameters
===

unittest {
	f({return 1;});
}

---
(source_file
	(unittest_declaration
		(unittest)
		(block_statement
			(expression_list
				(call_expression
					(type (identifier))
					(arguments
						(function_literal
							(block_statement
								(return_statement (return) (expression (int_literal)))
							)
						)
					)
				)
			)
		)
	)
)

===
Function literal anonymous parameter
===

unittest {
	f((int){return 1;});
}

---
(source_file
	(unittest_declaration
		(unittest)
		(block_statement
			(expression_list
				(call_expression
					(type (identifier))
					(arguments
						(function_literal
							(type (int))
							(block_statement
								(return_statement (return) (expression (int_literal)))
							)
						)
					)
				)
			)
		)
	)
)

===
Function literal named parameter
===

unittest {
	f((bool b){return 1;});
}

---
; it would be nice if the parameters were expressed, but inlining precludes this
(source_file
	(unittest_declaration
		(unittest)
		(block_statement
			(expression_list
				(call_expression
					(type (identifier))
					(arguments
						(function_literal
							(type (bool))
							(identifier)
							(block_statement
								(return_statement (return) (expression (int_literal)))
							)
						)
					)
				)
			)
		)
	)
)
