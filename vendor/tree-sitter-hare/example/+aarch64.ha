// Returns the new PID to the parent, void to the child, or errno if something
// goes wrong.
export fn clone(
	stack: nullable *void,
	flags: int,
	parent_tid: nullable *int,
	child_tid: nullable *int,
	tls: u64,
) (int | void | errno) = {
	return match (wrap_return(syscall5(SYS_clone,
			flags: u64,
			stack: uintptr: u64,
			parent_tid: uintptr: u64,
			tls,
			child_tid: uintptr: u64))) {
		u: u64 => switch (u) {
			0 => void,
			* => u: int,
		},
		err: errno => err,
	};
};

export def O_DIRECTORY: int = 0o40000;
