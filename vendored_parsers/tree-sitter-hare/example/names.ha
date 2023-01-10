use bytes;
use encoding::utf8;
use strings;

// Returns the directory name for a given path. For a path to a file name, this
// returns the directory in which that file resides. For a path to a directory,
// this returns the path to its parent directory. The return value is borrowed
// from the input, use [dup] to extend its lifetime.
export fn dirname(path: str) str = {
	let b = strings::toutf8(path);
	let i = match (bytes::rindex(b, PATHSEP)) {
		void => return path,
		z: size => z,
	};
	if (i == 0) {
		i += 1;
	};
	return strings::fromutf8_unsafe(b[..i]);
};

@test fn dirname() void = {
	assert(dirname("/foo/bar") == "/foo");
	assert(dirname("/foo") == "/");
	assert(dirname("/") == "/");
	assert(dirname("foo/bar") == "foo");
	assert(dirname("foo") == "foo");
};

// Returns the final component of a given path. For a path to a file name, this
// returns the file name. For a path to a directory, this returns the directory
// name. The return value is borrowed from the input, use [dup] to extend its
// lifetime.
export fn basename(path: str) str = {
	let b = strings::toutf8(path);
	let i = match (bytes::rindex(b, PATHSEP)) {
		void => return path,
		z: size => if (z + 1 < len(b)) z + 1z else 0z,
	};
	return strings::fromutf8_unsafe(b[i..]);
};

@test fn basename() void = {
	assert(basename("/foo/bar") == "bar");
	assert(basename("/foo") == "foo");
	assert(basename("/") == "/");
	assert(basename("foo/bar") == "bar");
	assert(basename("foo") == "foo");
};

// Returns the file name and extension for a path. The return value is borrowed
// from the input, see [strings::dup] to extend its lifetime.
//
// The extension includes the '.' character.
//
// extension("foo/example") => ("example", "")
// extension("foo/example.txt") => ("example", ".txt")
// extension("foo/example.tar.gz") => ("example", ".tar.gz")
export fn extension(p: str) (str, str) = {
	let p = basename(p);
	let b = strings::toutf8(p);
	if (len(b) == 0 || b[len(b) - 1] == PATHSEP) {
		return (p, "");
	};
	let b = strings::toutf8(p);
	let i = match (bytes::index(b, '.': u32: u8)) {
		void => return (p, ""),
		z: size => z,
	};
	let e = b[i..];
	let n = b[..i];
	return (strings::fromutf8_unsafe(n), strings::fromutf8_unsafe(e));
};

@test fn extension() void = {
	assert(extension("").0 == "");
	assert(extension("").1 == "");
	assert(extension("foo/bar").0 == "bar");
	assert(extension("foo/bar").1 == "");
	assert(extension("foo/bar.txt").0 == "bar");
	assert(extension("foo/bar.txt").1 == ".txt");
	assert(extension("foo/bar.tar.gz").0 == "bar");
	assert(extension("foo/bar.tar.gz").1 == ".tar.gz");
	assert(extension("foo.bar/baz.ha").0 == "baz");
	assert(extension("foo.bar/baz.ha").1 == ".ha");
};
