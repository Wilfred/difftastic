use bytes;
use errors;
use encoding::utf8;
use fs;
use io;
use path;
use rt;
use strings;
use time;

// Controls how symlinks are followed (or not) in a dirfd filesystem. Support
// for this feature varies, you should gate usage of this enum behind a build
// tag.
//
// Note that on Linux, specifying BENEATH or IN_ROOT will also disable magic
// symlinks.
export type resolve_flags = enum {
	NORMAL,

	// Does not allow symlink resolution to occur for any symlinks which
	// would refer to any anscestor of the fd directory. This disables all
	// absolute symlinks, and any call to open or create with an absolute
	// path.
	BENEATH,

	// Treat the directory fd as the root directory. This affects
	// open/create for absolute paths, as well as absolute path resolution
	// of symlinks. The effects are similar to chroot.
	IN_ROOT,

	// Disables symlink resolution entirely.
	NO_SYMLINKS,

	// Disallows traversal of mountpoints during path resolution. This is
	// not recommended for general use, as bind mounts are extensively used
	// on many systems.
	NO_XDEV,
};

type os_filesystem = struct {
	fs: fs::fs,
	dirfd: int,
	resolve: resolve_flags,
};

fn static_dirfdopen(fd: int, filesystem: *os_filesystem) *fs::fs = {
	*filesystem = os_filesystem {
		fs = fs::fs {
			open = &fs_open,
			create = &fs_create,
			remove = &fs_remove,
			iter = &fs_iter,
			stat = &fs_stat,
			subdir = &fs_subdir,
			mkdir = &fs_mkdir,
			rmdir = &fs_rmdir,
			chmod = &fs_chmod,
			chown = &fs_chown,
			resolve = &fs_resolve,
			...
		},
		dirfd = fd,
	};
	return &filesystem.fs;
};

// Opens a file descriptor as an [fs::fs]. This file descriptor must be a
// directory file. The file will be closed when the fs is closed.
//
// If no other flags are provided to [fs::open] and [fs::create] when used with
// a dirfdfs, [fs::flags::NOCTTY] and [fs::flags::CLOEXEC] are used when opening
// the file. If you pass your own flags, it is recommended that you add these
// unless you know that you do not want them.
export fn dirfdopen(fd: int, resolve: resolve_flags...) *fs::fs = {
	let ofs = alloc(os_filesystem { ... });
	let fs = static_dirfdopen(fd, ofs);
	for (let i = 0z; i < len(resolve); i += 1) {
		ofs.resolve |= resolve[i];
	};
	fs.close = &fs_close;
	return fs;
};

// Clones a dirfd filesystem, optionally adding additional [resolve_flags]
// constraints.
export fn dirfs_clone(fs: *fs::fs, resolve: resolve_flags...) *fs::fs = {
	assert(fs.open == &fs_open);
	let fs = fs: *os_filesystem;
	let new = alloc(*fs);
	for (let i = 0z; i < len(resolve); i += 1) {
		new.resolve |= resolve[i];
	};
	new.dirfd = rt::dup(new.dirfd) as int;
	return &new.fs;
};

fn errno_to_fs(err: rt::errno) fs::error = switch (err) {
	rt::ENOENT  => errors::noentry,
	rt::EEXIST  => errors::exists,
	rt::EACCES  => errors::noaccess,
	rt::EBUSY   => errors::busy,
	rt::ENOTDIR => fs::wrongtype,
	rt::EOPNOTSUPP, rt::ENOSYS => errors::unsupported,
	* => errors::errno(err),
};

fn _fs_open(
	fs: *fs::fs,
	path: str,
	mode: io::mode,
	oh: *rt::open_how,
) (*io::stream | fs::error) = {
	let fs = fs: *os_filesystem;

	oh.resolve = 0u64;
	if (fs.resolve & resolve_flags::BENEATH == resolve_flags::BENEATH) {
		oh.resolve |= rt::RESOLVE_BENEATH | rt::RESOLVE_NO_MAGICLINKS;
	};
	if (fs.resolve & resolve_flags::IN_ROOT == resolve_flags::IN_ROOT) {
		oh.resolve |= rt::RESOLVE_IN_ROOT | rt::RESOLVE_NO_MAGICLINKS;
	};
	if (fs.resolve & resolve_flags::NO_SYMLINKS == resolve_flags::NO_SYMLINKS) {
		oh.resolve |= rt::RESOLVE_NO_SYMLINKS;
	};
	if (fs.resolve & resolve_flags::NO_XDEV == resolve_flags::NO_XDEV) {
		oh.resolve |= rt::RESOLVE_NO_XDEV;
	};

	let fd = match (rt::openat2(fs.dirfd, path, oh, size(rt::open_how))) {
		err: rt::errno => return errno_to_fs(err),
		fd: int => fd,
	};

	return fdopen(fd, path, mode);
};

fn fs_open(
	fs: *fs::fs,
	path: str,
	flags: fs::flags...
) (*io::stream | fs::error) = {
	let oflags = 0;
	let iomode = io::mode::NONE;
	if (len(flags) == 0z) {
		oflags |= (fs::flags::NOCTTY
			| fs::flags::CLOEXEC
			| fs::flags::RDONLY): int;
	};
	for (let i = 0z; i < len(flags); i += 1z) {
		oflags |= flags[i]: int;
	};

	if ((oflags: fs::flags & fs::flags::DIRECTORY) == fs::flags::DIRECTORY) {
		// This is arch-specific
		oflags &= ~fs::flags::DIRECTORY: int;
		oflags |= rt::O_DIRECTORY: int;
	};

	if ((oflags: fs::flags & fs::flags::RDWR) == fs::flags::RDWR) {
		iomode = io::mode::RDWR;
	} else if ((oflags: fs::flags & fs::flags::WRONLY) == fs::flags::WRONLY) {
		iomode = io::mode::WRITE;
	} else if ((oflags: fs::flags & fs::flags::PATH) != fs::flags::PATH) {
		iomode = io::mode::READ;
	};

	let oh = rt::open_how {
		flags = oflags: u64,
		...
	};
	return _fs_open(fs, path, iomode, &oh);
};

fn fs_create(
	fs: *fs::fs,
	path: str,
	mode: fs::mode,
	flags: fs::flags...
) (*io::stream | fs::error) = {
	let oflags = 0;
	let iomode = io::mode::NONE;
	if (len(flags) == 0z) {
		oflags |= (fs::flags::NOCTTY
			| fs::flags::CLOEXEC
			| fs::flags::WRONLY): int;
	};
	for (let i = 0z; i < len(flags); i += 1z) {
		oflags |= flags[i]: int;
	};
	oflags |= fs::flags::CREATE: int;

	if ((oflags: fs::flags & fs::flags::RDWR) == fs::flags::RDWR) {
		iomode = io::mode::RDWR;
	} else if ((oflags: fs::flags & fs::flags::WRONLY) == fs::flags::WRONLY) {
		iomode = io::mode::WRITE;
	} else if ((oflags: fs::flags & fs::flags::PATH) != fs::flags::PATH) {
		iomode = io::mode::READ;
	};

	let oh = rt::open_how {
		flags = oflags: u64,
		mode = mode: u64,
		...
	};
	return _fs_open(fs, path, iomode, &oh);
};

fn fs_remove(fs: *fs::fs, path: str) (void | fs::error) = {
	let fs = fs: *os_filesystem;
	match (rt::unlinkat(fs.dirfd, path, 0)) {
		err: rt::errno => return errno_to_fs(err),
		void => void,
	};
};

fn fs_stat(fs: *fs::fs, path: str) (fs::filestat | fs::error) = {
	let fs = fs: *os_filesystem;
	let st = rt::st { ... };
	match (rt::fstatat(fs.dirfd, path, &st, rt::AT_SYMLINK_NOFOLLOW)) {
		err: rt::errno => return errno_to_fs(err),
		void => void,
	};
	return fs::filestat {
		mask = fs::stat_mask::UID
			| fs::stat_mask::GID
			| fs::stat_mask::SIZE
			| fs::stat_mask::INODE
			| fs::stat_mask::ATIME
			| fs::stat_mask::MTIME
			| fs::stat_mask::CTIME,
		mode = st.mode: fs::mode,
		uid = st.uid,
		uid = st.gid,
		sz = st.sz,
		inode = st.ino,
		atime = time::instant {
			sec = st.atime.tv_sec,
			nsec = st.atime.tv_nsec,
		},
		mtime = time::instant {
			sec = st.mtime.tv_sec,
			nsec = st.mtime.tv_nsec,
		},
		ctime = time::instant {
			sec = st.ctime.tv_sec,
			nsec = st.ctime.tv_nsec,
		},
	};
};

fn fs_subdir(fs: *fs::fs, path: str) (*fs::fs | fs::error) = {
	let fs = fs: *os_filesystem;
	let oh = rt::open_how {
		flags = (rt::O_RDONLY | rt::O_CLOEXEC | rt::O_DIRECTORY): u64,
		...
	};

	let fd: int = match (rt::openat2(fs.dirfd, path,
			&oh, size(rt::open_how))) {
		err: rt::errno => return errno_to_fs(err),
		n: int => n,
	};

	return dirfdopen(fd);
};

fn fs_rmdir(fs: *fs::fs, path: str) (void | fs::error) = {
	let fs = fs: *os_filesystem;
	match (rt::unlinkat(fs.dirfd, path, rt::AT_REMOVEDIR)) {
		err: rt::errno => return errno_to_fs(err),
		void => void,
	};
};

fn fs_mkdir(fs: *fs::fs, path: str) (void | fs::error) = {
	let fs = fs: *os_filesystem;
	return match (rt::mkdirat(fs.dirfd, path, 0o755)) {
		err: rt::errno => errno_to_fs(err),
		void => void,
	};
};

fn fs_chmod(fs: *fs::fs, path: str, mode: fs::mode) (void | fs::error) = {
	let fs = fs: *os_filesystem;
	return match (rt::fchmodat(fs.dirfd, path, mode: uint)) {
		err: rt::errno => return errno_to_fs(err),
		void => void,
	};
};

fn fs_chown(fs: *fs::fs, path: str, uid: uint, gid: uint) (void | fs::error) = {
	let fs = fs: *os_filesystem;
	return match (rt::fchownat(fs.dirfd, path, uid, gid)) {
		err: rt::errno => return errno_to_fs(err),
		void => void,
	};
};

fn resolve_part(parts: *[]str, part: str) void = {
	if (part == ".") {
		// no-op
		void;
	} else if (part == "..") {
		// XXX: We should not have to dereference this
		if (len(*parts) != 0) {
			delete(parts[len(*parts) - 1]);
		};
	} else {
		append(*parts, part);
	};
};

fn fs_resolve(fs: *fs::fs, path: str) str = {
	let parts: []str = [];
	if (!path::abs(path)) {
		let iter = path::iter(getcwd());
		for (true) match (path::next(&iter)) {
			void => break,
			p: str => resolve_part(&parts, p),
		};
	};
	let iter = path::iter(path);
	for (true) match (path::next(&iter)) {
		void => break,
		p: str => resolve_part(&parts, p),
	};
	return path::join(parts...);
};

fn fs_close(fs: *fs::fs) void = {
	let fs = fs: *os_filesystem;
	rt::close(fs.dirfd);
};

def BUFSIZ: size = 2048;

// Based on musl's readdir
type os_iterator = struct {
	iter: fs::iterator,
	fd: int,
	buf_pos: size,
	buf_end: size,
	buf: [BUFSIZ]u8,
};

fn fs_iter(fs: *fs::fs, path: str) (*fs::iterator | fs::error) = {
	let fs = fs: *os_filesystem;
	let oh = rt::open_how {
		flags = (rt::O_RDONLY | rt::O_CLOEXEC | rt::O_DIRECTORY): u64,
		...
	};
	let fd: int = match (rt::openat2(fs.dirfd, path,
			&oh, size(rt::open_how))) {
		err: rt::errno => return errno_to_fs(err),
		n: int => n,
	};

	let iter = alloc(os_iterator {
		iter = fs::iterator {
			next = &iter_next,
		},
		fd = fd,
		...
	});
	return &iter.iter;
};

fn iter_next(iter: *fs::iterator) (fs::dirent | void) = {
	let iter = iter: *os_iterator;
	if (iter.buf_pos >= iter.buf_end) {
		let n = rt::getdents64(iter.fd, &iter.buf, BUFSIZ) as size;
		if (n == 0) {
			rt::close(iter.fd);
			free(iter);
			return;
		};
		iter.buf_end = n;
		iter.buf_pos = 0;
	};
	let de = &iter.buf[iter.buf_pos]: *rt::dirent64;
	iter.buf_pos += de.d_reclen;
	let name = strings::fromc(&de.d_name: *const char);

	let ftype: fs::mode = switch (de.d_type) {
		rt::DT_UNKNOWN => fs::mode::UNKNOWN,
		rt::DT_FIFO => fs::mode::FIFO,
		rt::DT_CHR  => fs::mode::CHR,
		rt::DT_DIR  => fs::mode::DIR,
		rt::DT_BLK  => fs::mode::BLK,
		rt::DT_REG  => fs::mode::REG,
		rt::DT_LNK  => fs::mode::LINK,
		rt::DT_SOCK => fs::mode::SOCK,
		* => fs::mode::UNKNOWN,
	};
	return fs::dirent {
		name = name,
		ftype = ftype,
	};
};
