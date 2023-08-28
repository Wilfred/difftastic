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


=====================
Fixme E03
=====================
$lim_3$
---------------------
; FIXME: ident in math cannot contain `_`

(source_file
	(math
		(attach
			(ident)
			sub: (number))))
