func hello():
	match 0:
		0 when false: print("does not run")
		## Invalid:
		# 1 when true, 2 when false: print("This does not parse")
