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
b)
---------------------
; FIXME: should not match `tagged`

(source_file
	(group
		(import
			(string)
			(ident))))


=====================
Fixme E03
=====================
$1 + n n$
---------------------
; FIXME: recurrent problem caused by spaces

(source_file
	(math
		(add
			(number)
			(variable))
		(variable)))


=====================
Fixme E04
=====================
$lim_3$
---------------------
; FIXME: ident in math cannot contain `_`

(source_file
	(math
		(attach
			(ident)
			sub: (number))))
