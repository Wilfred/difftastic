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
#(a .b())
---------------------
; FIXME: spaces and comments around method notation
; fix is already written but crashes gcc

(source_file
	(group
		(call
			item: (field
				(ident)
				field: (ident))
			(group))))
