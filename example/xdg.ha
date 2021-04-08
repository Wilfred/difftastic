use fs;
use os;
use path;
use io;

fn lookup(prog: str, var: str, default: str) str = {
	match (os::getenv(var)) {
		s: str => {
			let path = path::join(s, prog);
			match (os::stat(path)) {
				err: fs::error => {
					os::mkdirs(path) as void;
					return path;
				},
				st: fs::filestat => {
					if (fs::is_dir(st.mode)) {
						return path;
					};
				},
			};
		},
		void => void,
	};

	let home = match (os::getenv("HOME")) {
		s: str => s,
		void => abort("$HOME unset"), // TODO: Try reading /etc/passwd
	};

	let path = path::join(home, default, prog);
	os::mkdirs(path) as void;
	return path;
};

// Returns a directory suitable for storing config files. If 'prog' is given, a
// unique path for this program to store data will be returned.
export fn config(prog: str) str = lookup(prog, "XDG_CONFIG_HOME", ".config");

// Returns an [fs::fs] for storing config files. If 'prog' is given, a unique
// path for this program to store data will be returned.
export fn configfs(prog: str) *fs::fs = os::diropen(config(prog)) as *fs::fs;

// Returns a directory suitable for cache files. If 'prog' is given, a unique
// path for this program to store data will be returned.
export fn cache(prog: str) str = lookup(prog, "XDG_CACHE_HOME", ".cache");

// Returns an [fs::fs] for cache files. If 'prog' is given, a unique path for
// this program to store data will be returned.
export fn cachefs(prog: str) *fs::fs = os::diropen(cache(prog)) as *fs::fs;

// Returns a directory suitable for persistent data files. If 'prog' is given, a
// unique path for this program to store data will be returned.
export fn data(prog: str) str =
	lookup(prog, "XDG_DATA_HOME", path::join(".local", "share"));

// Returns an [fs::fs] for persistent data files. If 'prog' is given, a unique
// path for this program to store data will be returned.
export fn datafs(prog: str) *fs::fs = os::diropen(data(prog)) as *fs::fs;
