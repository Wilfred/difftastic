use errors;
use rt;
use strings;
use os;

// Forks the current process, returning the pid of the child (to the parent) and
// void (to the child), or an error.
export fn fork() (int | void | error) = match (rt::fork()) {
	err: rt::errno  => errors::errno(err),
	i: (int | void) => i,
};

fn open(path: str) (platform_cmd | errors::opaque) = {
	match (rt::access(path, rt::X_OK)) {
		err: rt::errno => errors::errno(err),
		b: bool => if (!b) {
			return errors::errno(rt::EACCES);
		},
	};
	// O_PATH is used because it allows us to use an executable for which we
	// have execute permissions, but not read permissions.
	return match (rt::open(path, rt::O_PATH, 0u)) {
		fd: int => fd,
		err: rt::errno => errors::errno(err),
	};
};

fn platform_finish(cmd: *command) void = rt::close(cmd.platform);

fn platform_exec(cmd: *command) errors::opaque = {
	// We don't worry about freeing the return values from strings::to_c
	// because once we exec(2) our heap is fried anyway
	let argv: []nullable *const char = alloc([], len(cmd.argv) + 1z);
	for (let i = 0z; i < len(cmd.argv); i += 1z) {
		append(argv, strings::to_c(cmd.argv[i]));
	};
	append(argv, null);

	let envp: nullable *[*]nullable *const char = null;
	if (len(cmd.env) != 0) {
		let env: []nullable *const char = alloc([], len(cmd.env) + 1);
		for (let i = 0z; i < len(cmd.env); i += 1) {
			append(env, strings::to_c(cmd.env[i]));
		};
		append(env, null);
		envp = env: *[*]nullable *const char;
	};

	return errors::errno(rt::execveat(cmd.platform, strings::c_empty,
		argv: *[*]nullable *const char, envp, rt::AT_EMPTY_PATH));
};

fn platform_start(cmd: *command) (errors::opaque | process) = {
	// TODO: Let the user configure clone more to their taste (e.g. SIGCHLD)
	let pipe: [2]int = [0...];
	match (rt::pipe2(&pipe, rt::O_CLOEXEC)) {
		err: rt::errno => return errors::errno(err),
		void => void,
	};

	match (rt::clone(null, 0, null, null, 0)) {
		err: rt::errno => return errors::errno(err),
		pid: int => {
			rt::close(pipe[1]);
			let errno: int = 0;
			return match (rt::read(pipe[0], &errno, size(int))) {
				err: rt::errno => errors::errno(err),
				n: size => switch (n) {
					size(int) => errors::errno(errno),
					* => abort("Unexpected rt::read result"),
					0 => pid,
				},
			};
		},
		void => {
			rt::close(pipe[0]);
			let err = platform_exec(cmd);
			let err = &err.data: *rt::errno;
			rt::write(pipe[1], &err, size(int));
			rt::exit(1);
		},
	};
};
