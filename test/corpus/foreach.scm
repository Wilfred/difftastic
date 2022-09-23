==================
Simple foreach
==================

void f() {
	foreach (item; range) {}
}
---
(source_file
	(function_declaration
		(type (void))
		(identifier)
		(parameters)
		(function_body
			(block_statement
				(foreach_statement (foreach)
					(foreach_type (identifier))
					(expression (identifier))
					(block_statement)
				)
			)
		)
	)
)

==================
Simple foreach reverse
==================

void f() {
	foreach_reverse (item; range) {}
}
---
(source_file
	(function_declaration
		(type (void))
		(identifier)
		(parameters)
		(function_body
			(block_statement
				(foreach_statement (foreach_reverse)
					(foreach_type (identifier))
					(expression (identifier))
					(block_statement)
				)
			)
		)
	)
)

==================
Typed foreach
==================

void f() {
	foreach (int item; range) {}
}
---
(source_file
	(function_declaration
		(type (void))
		(identifier)
		(parameters)
		(function_body
			(block_statement
				(foreach_statement (foreach)
					(foreach_type
						(type (int))	
						(identifier))
					(expression (identifier))
					(block_statement)
				)
			)
		)
	)
)

==================
Multiple value foreach
==================

void f() {
	foreach (int key, char value; range) {}
}
---
(source_file
	(function_declaration
		(type (void))
		(identifier)
		(parameters)
		(function_body
			(block_statement
				(foreach_statement (foreach)
					(foreach_type
						(type (int))	
						(identifier))
					(foreach_type
						(type (char))	
						(identifier))
					(expression (identifier))
					(block_statement)
				)
			)
		)
	)
)

==================
Range foreach
==================

void f() {
	foreach (i; start .. end) {}
}
---
(source_file
	(function_declaration
		(type (void))
		(identifier)
		(parameters)
		(function_body
			(block_statement
				(foreach_statement (foreach)
					(foreach_type
						(identifier))
					(expression (identifier))
					(expression (identifier))
					(block_statement)
				)
			)
		)
	)
)

==================
Range foreach typed
==================

void f() {
	foreach (int i; start .. end) {}
}
---
(source_file
	(function_declaration
		(type (void))
		(identifier)
		(parameters)
		(function_body
			(block_statement
				(foreach_statement (foreach)
					(foreach_type
						(type (int))
						(identifier))
					(expression (identifier))
					(expression (identifier))
					(block_statement)
				)
			)
		)
	)
)

==================
Range foreach numbers
==================

void f() {
	foreach (int i; 0..5) {}
}
---
(source_file
	(function_declaration
		(type (void))
		(identifier)
		(parameters)
		(function_body
			(block_statement
				(foreach_statement (foreach)
					(foreach_type
						(type (int))
						(identifier))
					(expression (int_literal))
					(expression (int_literal))
					(block_statement)
				)
			)
		)
	)
)
