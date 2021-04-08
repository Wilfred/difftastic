fn mkdev(major: u32, minor: u32) dev_t =
	((major: u64 & 0xFFFFF000) << 32) |
	((major: u64 & 0x00000FFF) << 8)  |
	((minor: u64 & 0xFFFFFF00) << 12) |
	 (minor: u64 & 0x000000FF);

fn fstatat_statx(
	dirfd: int,
	path: path,
	flags: int,
	mask: uint,
	statbuf: *stx,
) (void | errno) = {
	let path = kpath(path)?;
	wrap_return(syscall5(SYS_statx,
		dirfd: u64, path: uintptr: u64, flags: u64,
		mask: u64, statbuf: uintptr: u64))?;
	return;
};

export fn fstatat(
	dirfd: int,
	path: path,
	statbuf: *st,
	flags: int,
) (errno | void) = {
	let path = kpath(path)?;
	let statxbuf = stx { ... };
	fstatat_statx(dirfd, path, flags, STATX_BASIC_STATS, &statxbuf)?;
	statbuf.dev = mkdev(statxbuf.dev_major, statxbuf.dev_minor);
	statbuf.ino = statxbuf.ino;
	statbuf.mode = statxbuf.mode;
	statbuf.nlink = statxbuf.nlink;
	statbuf.uid = statxbuf.uid;
	statbuf.gid = statxbuf.gid;
	statbuf.rdev = mkdev(statxbuf.dev_major, statxbuf.dev_minor);
	statbuf.sz = statxbuf.sz;
	statbuf.blksz = statxbuf.blksize;
	statbuf.blocks = statxbuf.blocks;
	statbuf.atime.tv_sec = statxbuf.atime.tv_sec;
	statbuf.atime.tv_nsec = statxbuf.atime.tv_nsec: i64;
	statbuf.mtime.tv_sec = statxbuf.mtime.tv_sec;
	statbuf.mtime.tv_nsec = statxbuf.mtime.tv_nsec: i64;
	statbuf.ctime.tv_sec = statxbuf.ctime.tv_sec;
	statbuf.ctime.tv_nsec = statxbuf.ctime.tv_nsec: i64;
};

export fn stat(path: path, statbuf: *st) (errno | void) =
	fstatat(AT_FDCWD, path, statbuf, 0);

export fn fstat(fd: int, statbuf: *st) (errno | void) =
	fstatat(fd, "", statbuf, AT_EMPTY_PATH);

export fn lstat(path: path, statbuf: *st) (errno | void) =
	fstatat(AT_FDCWD, path, statbuf, AT_SYMLINK_NOFOLLOW);
