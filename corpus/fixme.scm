=====================
Fixme E06
=====================
#return 0 Hello
---------------------
; FIXME: inlined return accepts an optional expression

(source_file
	(return
		(number))
	(text))


=====================
Fixme E09
=====================
+
/**/ -
 -
---------------------
; FIXME: indent/dedent are sensible to comments, but not redent

(source_file
	(item)
	(comment)
	(item)
	(item))
