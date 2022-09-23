==================
Simple type
==================
int x;
---
(source_file (variable_declaration (type (int)) (declarator (identifier))))

==================
User type
==================
myType x;
---
(source_file (variable_declaration (type (identifier)) (declarator (identifier))))

==================
User qualified type
==================
myType.subType x;
---
(source_file (variable_declaration (type (identifier) (identifier)) (declarator (identifier))))

==================
Simple type in block
==================
unittest {
	int x;
}
---
(source_file
	(unittest_declaration
		(unittest)
		(block_statement
			(variable_declaration
				(type (int))
				(declarator (identifier))
			)
		)
	)
)

==================
User type in block
==================
unittest {
	myType x;
}
---
(source_file
	(unittest_declaration
		(unittest)
		(block_statement
			(variable_declaration
				(type (identifier))
				(declarator (identifier))
			)
		)
	)
)

==================
User qualified type in block
==================
unittest {
myType.subType x;
}
---
; this one is totally busted right now
(source_file
	(unittest_declaration
		(unittest)
		(block_statement
			(variable_declaration
				(type (identifier) (identifier))
				(declarator (identifier))
			)
		)
	)
)

===
Nested user types
===

x.y z;
---
(source_file
	(variable_declaration
		(type (identifier) (identifier))
		(declarator (identifier))
	)
)

===
Primitive array type
===
int[3] z;
---
(source_file
	(variable_declaration
		(type (int) (expression (int_literal)))
		(declarator (identifier))
	)
)

===
Dynamic array of primitives
===
int[] z;
---
; NB: the type suffix is hidden
(source_file
	(variable_declaration
		(type (int))
		(declarator (identifier))
	)
)

===
Dynamic array of user types
===
ZZZ[] z;
---
; NB: the type suffix is hidden
(source_file
	(variable_declaration
		(type (identifier))
		(declarator (identifier))
	)
)

===
Dynamic array of nested types
===
Z.Z[] z;
---
; NB: the type suffix is hidden
(source_file
	(variable_declaration
		(type (identifier) (identifier))
		(declarator (identifier))
	)
)

===
Dynamic array of fixed arrays types
===
Z[4].Z[] z;
---
; e.g. for tupleof
(source_file
	(variable_declaration
		(type (identifier) (expression (int_literal)) (identifier))
		(declarator (identifier))
	)
)
