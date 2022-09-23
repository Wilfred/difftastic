==================
Untyped enum
==================

enum X { x }

---
(source_file (enum_declaration (enum) (identifier) (enum_member (identifier))))


==================
Typed enum
==================

enum X : int { x }

---
(source_file (enum_declaration (enum) (identifier) (type (int)) (enum_member (identifier))))

==================
Enum with initialized values
==================

enum X { x = 1, y = 2 }

---
(source_file (enum_declaration (enum)
			(identifier)
			(enum_member (identifier) (int_literal))
			(enum_member (identifier) (int_literal))
))

==================
Enum with missing body
==================

enum X;

---
(source_file (enum_declaration (enum) (identifier)))

==================
Enum trailing comma
==================

enum X { x, }

---
(source_file (enum_declaration (enum) (identifier) (enum_member (identifier))))

==================
Typed enum with missing body
==================

enum X : Y;

---
(source_file (enum_declaration (enum) (identifier) (type (identifier))))

==================
Anonymous enum
==================

enum { x }
---
(source_file (anonymous_enum_declaration (enum) (anonymous_enum_member (identifier))))

==================
Anonymous trailing comma
==================

enum { x, }
---
(source_file (anonymous_enum_declaration (enum) (anonymous_enum_member (identifier))))

==================
Anonymous enum values
==================

enum { x = 1 }
---
(source_file (anonymous_enum_declaration (enum) (anonymous_enum_member (identifier) (int_literal))))

==================
Anonymous enum typed values
==================

enum { int x = 1 }
---
(source_file (anonymous_enum_declaration (enum) (anonymous_enum_member (type (int)) (identifier) (int_literal))))

==================
Anonymous enum mixed
==================

enum {
	int x = 1,
	d,
	e = 1,
}

---
(source_file
	(anonymous_enum_declaration (enum)
	(anonymous_enum_member (type (int)) (identifier) (int_literal))
	(anonymous_enum_member (identifier))
	(anonymous_enum_member (identifier) (int_literal))
	)
)
