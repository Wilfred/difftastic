=====================
Fixme E01
=====================
$||)$
---------------------
; FIXME: the termination of a group goes outside the bar group

(source_file
	(math
		(group)
		(symbol))))


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
