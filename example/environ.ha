use bytes;
use rt;
use strings;
use types;

// The command line arguments provided to the program. By convention, the first
// member is usually the name of the program.
export let args: []str = [];

// Statically allocate arg strings if there are few enough arguments, saves a
// syscall if we don't need it.
let args_static: [32]str = [""...];

@init fn init_environ() void = {
	if (rt::argc < len(args_static)) {
		args = args_static[..rt::argc];
		for (let i = 0z; i < rt::argc; i += 1) {
			args[i] = strings::fromc(rt::argv[i]);
		};
	} else {
		args = alloc([], rt::argc);
		for (let i = 0z; i < rt::argc; i += 1) {
			append(args, strings::fromc(rt::argv[i]));
		};
	};

};

@fini fn fini_environ() void = {
	if (rt::argc >= len(args_static)) {
		free(args);
	};
};

// Looks up an environment variable and returns its value, or void if unset.
export fn getenv(name: const str) (str | void) = {
	const name_b = strings::toutf8(name);
	for (let i = 0z; rt::envp[i] != null; i += 1) {
		const item = rt::envp[i]: *[*]u8;
		const eq: size = match (bytes::index(item[..], '=': u32: u8)) {
			void => abort("Environment violates System-V invariants"),
			i: size => i,
		};
		if (bytes::equal(name_b, item[..eq])) {
			const ln = strings::cstrlen(item: *const char);
			return strings::fromutf8(item[eq+1..ln]);
		};
	};
};

// Looks up an environment variable and returns its value, or a default value if
// unset.
export fn tryenv(name: const str, default: str) str = match (getenv(name)) {
	s: str => s,
	void => default,
};

let envp: []str = [];

// Returns a slice of the environment strings in the form KEY=VALUE.
export fn getenvs() []str = {
	if (len(envp) != 0) {
		return envp;
	};
	for (let i = 0z; rt::envp[i] != null; i += 1) {
		append(envp, strings::fromc(rt::envp[i]: *const char));
	};
	return envp;
};

let uts: rt::utsname = rt::utsname { ... };
let uts_valid: bool = false;

// Returns the host kernel name
export fn sysname() const str = {
	if (!uts_valid) {
		rt::uname(&uts) as void;
	};
	return strings::fromc(&uts.sysname: *const char);
};

// Returns the host system hostname
export fn hostname() const str = {
	if (!uts_valid) {
		rt::uname(&uts) as void;
	};
	return strings::fromc(&uts.nodename: *const char);
};

// Returns the host kernel version
export fn release() const str = {
	if (!uts_valid) {
		rt::uname(&uts) as void;
	};
	return strings::fromc(&uts.release: *const char);
};

// Returns the host operating system version
export fn version() const str = {
	if (!uts_valid) {
		rt::uname(&uts) as void;
	};
	return strings::fromc(&uts.version: *const char);
};

// Returns the host CPU architecture
export fn machine() const str = {
	if (!uts_valid) {
		rt::uname(&uts) as void;
	};
	return strings::fromc(&uts.machine: *const char);
};
