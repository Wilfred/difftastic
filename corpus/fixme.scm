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
Fixme E02
=====================
#(import
"a"
:
b, c)
---------------------
; FIXME: comma precedence to import over list

(source_file
	(group
		(import
			(string)
			(ident)
			(ident))))
