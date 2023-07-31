=====================
Escape Ident Space
=====================
a #b c
---------------------

(source_file
	(text)
	(ident)
	(text))


=====================
Escape Ident Direct
=====================
a#b c
---------------------

(source_file
	(text)
	(ident)
	(text))


=====================
Escape Expr Spaced
=====================
a #b + c d
---------------------

(source_file
	(text)
	()
	(text)
	(text)
	(text))


=====================
Escape Expr Scoped
=====================
a #(b + c) d
---------------------

(source_file
	(text)
	(add
		(ident)
		(ident))
	(text))
