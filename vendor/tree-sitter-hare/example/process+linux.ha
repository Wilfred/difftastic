use errors;
use rt;
use fmt;
// TODO: Add function to wait on all/any children

fn rusage(st: *status, ru: *rt::rusage) void = {
	st.rusage.maxrss = ru.ru_maxrss;
	st.rusage.minflt = ru.ru_minflt;
	st.rusage.majflt = ru.ru_majflt;
	st.rusage.inblock = ru.ru_inblock;
	st.rusage.oublock = ru.ru_oublock;
	st.rusage.nvcsw = ru.ru_nvcsw;
	st.rusage.nivcsw = ru.ru_nivcsw;
};

// Waits for a process to complete, then returns its status information.
export fn wait(proc: *process) (status | error) = {
	let ru: rt::rusage = rt::rusage { ... };
	let st: status = status { ... };
	match (rt::wait4(*proc, &st.status, 0, &ru)) {
		err: rt::errno => errors::errno(err),
		pid: int => assert(pid == *proc),
	};
	rusage(&st, &ru);
	return st;
};

// Checks for process completion, returning its status information on
// completion, or void if it is still running.
export fn peek(proc: *process) (status | void | error) = {
	let ru: rt::rusage = rt::rusage { ... };
	let st: status = status { ... };
	match (rt::wait4(*proc, &st.status, 0, &ru)) {
		err: rt::errno => errors::errno(err),
		pid: int => switch (pid) {
			0 => return void,
			* => assert(pid == *proc),
		},
	};
	rusage(&st, &ru);
	return st;
};

// The exit status code of a process.
export type exited = int;

// The signal number which caused a process to terminate.
export type signaled = int;

// The exit status of a process.
export type exit_status = (exited | signaled);

// Returns a human friendly string describing the exit status.
export fn exitstr(status: exit_status) const str = {
	static let buf: [1024]u8 = [0...];
	return match (status) {
		i: exited => switch (i) {
			0 => "exited normally",
			* => fmt::bsprintf(buf, "exited with status {}", i: int),
		},
		// TODO: Add signal name
		s: signaled => fmt::bsprintf(buf, "exited with signal {}", s: int),
	};
};

// Returns the exit status of a completed process.
export fn exit(stat: *status) exit_status = {
	if (rt::wifexited(stat.status)) {
		return rt::wexitstatus(stat.status): exited;
	};
	if (rt::wifsignaled(stat.status)) {
		return rt::wtermsig(stat.status): signaled;
	};
	abort("Unexpected exit status");
};

// Checks the exit status of a completed process, returning void if successful,
// or its status code as an error type if not.
export fn check(stat: *status) (void | exit_status!) = {
	if (rt::wifexited(stat.status)) {
		return switch (rt::wexitstatus(stat.status)) {
			0 => void,
			* => exit(stat),
		};
	};
	return exit(stat);
};
