use errors;
use io;
use path;

// Closes a filesystem. The fs cannot be used after this function is called.
export fn close(fs: *fs) void = {
	match (fs.close) {
		null => void,
		f: *closefunc => f(fs),
	};
};

// Opens a file. If no flags are provided, the default read/write mode is
// RDONLY.
export fn open(fs: *fs, path: str, flags: flags...) (*io::stream | error) = {
	return match (fs.open) {
		null => errors::unsupported,
		f: *openfunc => f(fs, path, flags...),
	};
};

// Creates a new file and opens it for writing. If no flags are provided, the
// default read/write mode is WRONLY.
//
// Only the permission bits of the mode are used. If other bits are set, they
// are discarded.
export fn create(
	fs: *fs,
	path: str,
	mode: mode,
	flags: flags...
) (*io::stream | error) = {
	mode = mode & 0o777;
	return match (fs.create) {
		null => errors::unsupported,
		f: *createfunc => f(fs, path, mode, flags...),
	};
};

// Removes a file.
export fn remove(fs: *fs, path: str) (void | error) = {
	return match (fs.remove) {
		null => errors::unsupported,
		f: *removefunc => f(fs, path),
	};
};

// Returns an iterator for a path, which yields the contents of a directory.
// Pass empty string to yield from the root. The order in which entries are
// returned is undefined.
export fn iter(fs: *fs, path: str) (*iterator | error) = {
	return match (fs.iter) {
		null => errors::unsupported,
		f: *iterfunc => f(fs, path),
	};
};

// Obtains information about a file or directory. If the target is a symlink,
// information is returned about the link, not its target.
export fn stat(fs: *fs, path: str) (filestat | error) = {
	return match (fs.stat) {
		null => errors::unsupported,
		f: *statfunc => f(fs, path),
	};
};

// Opens a new filesystem for a subdirectory. The subdirectory must be closed
// separately from the parent filesystem, and its lifetime can outlive that of
// its parent.
export fn subdir(fs: *fs, path: str) (*fs | error) = {
	return match (fs.subdir) {
		null => errors::unsupported,
		f: *subdirfunc => f(fs, path),
	};
};

// Creates a directory.
export fn mkdir(fs: *fs, path: str) (void | error) = {
	return match (fs.mkdir) {
		null => errors::unsupported,
		f: *mkdirfunc => f(fs, path),
	};
};

// Makes a directory, and all non-extant directories in its path.
export fn mkdirs(fs: *fs, path: str) (void | error) = {
	let parent = path::dirname(path);
	if (path != parent) {
		match (mkdirs(fs, parent)) {
			errors::exists => void,
			err: error => return err,
			void => void,
		};
	};
	return mkdir(fs, path);
};

// Removes a directory. The target directory must be empty; see [rmdirall] to
// remove its contents as well.
export fn rmdir(fs: *fs, path: str) (void | error) = {
	if (path == "") {
		return errors::invalid;
	};
	return match (fs.rmdir) {
		null => errors::unsupported,
		f: *rmdirfunc => f(fs, path),
	};
};

// Removes a directory, and anything in it.
export fn rmdirall(fs: *fs, path: str) (void | error) = {
	let it = iter(fs, path)?;
	for (true) match (next(it)) {
		ent: dirent => {
			if (ent.name == "." || ent.name == "..") {
				continue;
			};
			let p = path::join(path, ent.name);
			defer free(p);
			switch (ent.ftype) {
				mode::DIR => rmdirall(fs, p)?,
				* => remove(fs, p)?,
			};
		},
		void => break,
	};
	if (path != "") {
		return rmdir(fs, path);
	};
};

// Creates a directory and returns a subdir for it. Some filesystems support
// doing this operation atomically, but if not, a fallback is used.
export fn mksubdir(fs: *fs, path: str) (*fs | error) = {
	return match (fs.mksubdir) {
		null => {
			mkdir(fs, path)?;
			subdir(fs, path);
		},
		f: *mksubdirfunc => f(fs, path),
	};
};

// Changes mode flags on a file or directory. Type bits are discared.
export fn chmod(fs: *fs, path: str, mode: mode) (void | error) = {
	mode &= 0o755;

	return match (fs.chmod) {
		f: *chmodfunc => f(fs, path, mode),
		null => abort(),
	};
};

// Changes ownership of a file.
export fn chown(fs: *fs, path: str, uid: uint, gid: uint) (void | error) = {
	return match (fs.chown) {
		f: *chownfunc => f(fs, path, uid, gid),
		null => abort(),
	};
};

// Resolves a path to its absolute, normalized value. This consoldates ./ and
// ../ sequences, roots the path, and returns a new path. The caller must free
// the return value.
export fn resolve(fs: *fs, path: str) str = {
	match (fs.resolve) {
		f: *resolvefunc => return f(fs, path),
		null => void,
	};
	abort(); // TODO
};

// Returns the next directory entry from an interator, or void if none remain.
// It is a programming error to call this again after it has returned void. The
// file stat returned may only have the type bits set on the file mode; callers
// should call [fs::stat] to obtain the detailed file mode.
export fn next(iter: *iterator) (dirent | void) = iter.next(iter);
