=====================
Fixme E11
=====================
```typst
_
-
```
---------------------
; FIXME: this test pass, but in editor, it causes SEGFAULT

(source_file
	(raw_blck
    lang: (ident)
    (blob)))


=====================
Fixme E14
=====================
- b
 - a]a
--------------------

(source_file
	(item
		(text)
		(item
			(text)))
	(text)
	(text))
