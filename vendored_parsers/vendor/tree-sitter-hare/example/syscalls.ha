fn syscall0(_: u64) u64;
fn syscall1(_: u64, _: u64) u64;
fn syscall2(_: u64, _: u64, _: u64) u64;
fn syscall3(_: u64, _: u64, _: u64, _: u64) u64;
fn syscall4(_: u64, _: u64, _: u64, _: u64, _: u64) u64;
fn syscall5(_: u64, _: u64, _: u64, _: u64, _: u64, _: u64) u64;
fn syscall6(_: u64, _: u64, _: u64, _: u64, _: u64, _: u64, _: u64) u64;

def PATH_MAX: size = 4096z;
export type path = (str | []u8 | *const char);
let pathbuf: [PATH_MAX + 1]u8 = [0...];

// NUL terminates a string and stores it in a static buffer of PATH_MAX+1 bytes
// in length.
fn kpath(path: path) (*const char | errno) = {
	let path = match (path) {
		c: *const char => return c,
		s: str => {
			let ptr = &s: *struct {
				buf: *[*]u8,
				length: size,
				capacity: size,
			};
			ptr.buf[..ptr.length];
		},
		b: []u8 => b,
	};
	if (len(path) + 1 >= len(pathbuf)) {
		return ENAMETOOLONG;
	};
	memcpy(&pathbuf, path: *[*]u8, len(path));
	pathbuf[len(path)] = 0;
	return &pathbuf: *const char;
};

export fn read(fd: int, buf: *void, count: size) (size | errno) = {
	return wrap_return(syscall3(SYS_read,
		fd: u64, buf: uintptr: u64, count: u64))?: size;
};

export fn write(fd: int, buf: *const void, count: size) (size | errno) = {
	return wrap_return(syscall3(SYS_write,
		fd: u64, buf: uintptr: u64, count: u64))?: size;
};

export fn open(path: path, flags: int, mode: uint) (int | errno) = {
	let path = kpath(path)?;
	return wrap_return(syscall4(SYS_openat, AT_FDCWD: u64,
		path: uintptr: u64, flags: u64, mode: u64))?: int;
};

fn openat(
	dirfd: int,
	path: *const char,
	flags: int,
	mode: uint,
) (int | errno) = wrap_return(syscall4(SYS_openat, dirfd: u64,
	path: uintptr: u64, flags: u64, mode: u64))?: int;

export fn openat2(
	dirfd: int,
	path: path,
	how: *open_how,
	how_sz: size,
) (int | errno) = {
	let path = kpath(path)?;
	return openat(dirfd, path, how.flags: int, how.mode: uint);
};

export fn unlink(path: path) (void | errno) = {
	let path = kpath(path)?;
	wrap_return(syscall3(SYS_unlinkat,
		AT_FDCWD: u64, path: uintptr: u64, 0u64));
	return;
};

export fn unlinkat(dirfd: int, path: path, flags: int) (void | errno) = {
	let path = kpath(path)?;
	wrap_return(syscall3(SYS_unlinkat,
		dirfd: u64, path: uintptr: u64, flags: u64));
	return;
};

export fn chmod(path: path, mode: uint) (void | errno) = {
	let path = kpath(path)?;
	wrap_return(syscall3(SYS_fchmodat,
		AT_FDCWD: u64, path: uintptr: u64, mode: u64));
	return;
};

export fn fchmodat(dirfd: int, path: path, mode: uint) (void | errno) = {
	let path = kpath(path)?;
	wrap_return(syscall3(SYS_fchmodat,
		dirfd: u64, path: uintptr: u64, mode: u64))?;
	return;
};

export fn chown(path: path, uid: uint, gid: uint) (void | errno) = {
	let path = kpath(path)?;
	wrap_return(syscall4(SYS_fchownat,
		AT_FDCWD: u64, path: uintptr: u64, uid: u32, gid: u32));
	return;
};

export fn fchownat(dirfd: int, path: path, uid: uint, gid: uint) (void | errno) = {
	let path = kpath(path)?;
	wrap_return(syscall4(SYS_fchownat,
		dirfd: u64, path: uintptr: u64, uid: u32, gid: u32))?;
	return;
};

export fn dup(fd: int) (int | errno) = {
	return wrap_return(syscall1(SYS_dup, fd: u64))?: int;
};

export fn close(fd: int) (void | errno) = {
	wrap_return(syscall1(SYS_close, fd: u64))?;
	return;
};

export fn chdir(path: path) (void | errno) = {
	let path = kpath(path)?;
	wrap_return(syscall1(SYS_chdir, path: uintptr: u64))?;
	return;
};

export fn fchdir(fd: int) (void | errno) = {
	wrap_return(syscall1(SYS_fchdir, fd: u64))?;
	return;
};

export fn chroot(path: path) (void | errno) = {
	let path = kpath(path)?;
	wrap_return(syscall1(SYS_chroot, path: uintptr: u64))?;
	return;
};

export fn mkdir(path: path, mode: uint) (void | errno) = {
	let path = kpath(path)?;
	wrap_return(syscall3(SYS_mkdirat, AT_FDCWD: u64,
		path: uintptr: u64, mode: u64))?;
	return;
};

export fn mkdirat(dirfd: int, path: path, mode: uint) (void | errno) = {
	let path = kpath(path)?;
	wrap_return(syscall3(SYS_mkdirat,
		dirfd: u64, path: uintptr: u64, mode: u64))?;
	return;
};

export fn execveat(dirfd: int, path: path, argv: *[*]nullable *const char,
		envp: *[*]nullable *const char, flags: int) errno = {
	let path = kpath(path)?;
	return match (wrap_return(syscall5(SYS_execveat, dirfd: u64,
			path: uintptr: u64, argv: uintptr: u64,
			envp: uintptr: u64, flags: u64))) {
		err: errno => err,
		u64 => abort("unreachable"),
	};
};

// Returns the new PID to the parent, void to the child, or errno if something
// goes wrong.
export fn fork() (int | void | errno) = clone(null, SIGCHLD, null, null, 0);

export fn getpid() int = syscall0(SYS_getpid): int;

export fn wait4(
	pid: int,
	wstatus: *int,
	options: int,
	rusage: *rusage,
) (int | errno) = {
	return wrap_return(syscall4(SYS_wait4,
		pid: u64, wstatus: uintptr: u64,
		options: u64, rusage: uintptr: u64))?: int;
};

export fn sendfile(
	out: int,
	in: int,
	offs: nullable *size,
	count: size,
) (size | errno) = wrap_return(syscall4(SYS_sendfile,
	out: u64, in: u64, offs: uintptr: u64, count: u64))?: size;
	
export @noreturn fn exit(status: int) void = syscall1(SYS_exit, status: u64);

export fn kill(pid: int, signal: int) (void | errno) = {
	wrap_return(syscall2(SYS_kill, pid: u64, signal: u64))?;
	return;
};

export fn pipe2(pipefd: *[2]int, flags: int) (void | errno) = {
	wrap_return(syscall2(SYS_pipe2, pipefd: uintptr: u64, flags: u64))?;
	return;
};

export fn mmap(
	addr: nullable *void,
	length: size,
	prot: uint,
	flags: uint,
	fd: int,
	offs: size
) (*void | errno) = {
	let r = syscall6(SYS_mmap, addr: uintptr: u64,
		length: u64, prot: u64, flags: u64, fd: u64, offs: u64);
	match (wrap_return(r)) {
		err: errno => {
			// XXX: Type promotion would simplify this
			return if (r: int == -EPERM
					&& addr: uintptr == null: uintptr
					&& (flags & MAP_ANON) > 0
					&& (flags & MAP_FIXED) == 0) {
				 // Fix up incorrect EPERM from kernel:
				wrap_errno(ENOMEM);
			} else err;
		},
		n: u64 => n: uintptr: *void,
	};
};

export fn munmap(addr: *void, length: size) (void | errno) = {
	wrap_return(syscall2(SYS_munmap,
		addr: uintptr: u64, length: u64))?;
	return;
};
	

export fn mprotect(addr: *void, length: size, prot: uint) (void | errno) = {
	wrap_return(syscall3(SYS_mprotect,
		addr: uintptr: u64, length: u64, prot: u64))?;
	return;
};
	

export fn lseek(fd: int, off: i64, whence: uint) (i64 | errno) = {
	return wrap_return(syscall3(SYS_lseek,
		fd: u64, off: u64, whence: u64))?: i64;
};

fn faccessat1(dirfd: int, path: *const char, mode: int) (bool | errno) = {
	return match (wrap_return(syscall3(SYS_faccessat, dirfd: u64,
			path: uintptr: u64, mode: u64))) {
		err: errno => switch (err) {
			EACCES => false,
			* => err,
		},
		n: u64 => {
			assert(n == 0);
			true;
		},
	};
};

// The use of this function is discouraged, as it can create race conditions.
// TOCTOU is preferred: attempt to simply use the resource you need and handle
// any access errors which occur.
export fn faccessat(
	dirfd: int,
	path: path,
	mode: int,
	flags: int,
) (bool | errno) = {
	let path = kpath(path)?;
	return match (wrap_return(syscall4(SYS_faccessat2, dirfd: u64,
			path: uintptr: u64, mode: u64, flags: u64))) {
		err: errno => switch (err) {
			EACCES => false,
			ENOSYS =>
				if (flags == 0) faccessat1(dirfd, path, mode)
				else err,
			* => err,
		},
		n: u64 => {
			assert(n == 0);
			true;
		},
	};
};

export fn getdents64(dirfd: int, dirp: *void, count: size) (size | errno) = {
	return wrap_return(syscall3(SYS_getdents64, dirfd: u64,
		dirp: uintptr: u64, count: u64))?: size;
};

// The use of this function is discouraged, as it can create race conditions.
// TOCTOU is preferred: attempt to simply use the resource you need and handle
// any access errors which occur.
export fn access(path: path, mode: int) (bool | errno) =
	faccessat(AT_FDCWD, path, mode, 0);

export type fcntl_arg = (void | int | *st_flock | *f_owner_ex | *u64);

export fn fcntl(fd: int, cmd: int, arg: fcntl_arg) (int | errno) = {
	let _fd = fd: u64, _cmd = cmd: u64;
	return wrap_return(match (arg) {
		void => syscall2(SYS_fcntl, _fd, _cmd),
		i: int => syscall3(SYS_fcntl, _fd, _cmd, i: u64),
		l: *st_flock => syscall3(SYS_fcntl, _fd, _cmd, l: uintptr: u64),
		o: *f_owner_ex => syscall3(SYS_fcntl, _fd, _cmd, o: uintptr: u64),
		u: *u64 => syscall3(SYS_fcntl, _fd, _cmd, u: uintptr: u64),
	})?: int;
};

export fn getrandom(buf: *void, bufln: size, flags: uint) (size | errno) = {
	return wrap_return(syscall3(SYS_getrandom,
		buf: uintptr: u64, bufln: u64, flags: u64))?: size;
};

// TODO: Implement me with VDSO
export fn clock_gettime(clock_id: int, tp: *timespec) (void | errno) = {
	wrap_return(syscall2(SYS_clock_gettime,
		clock_id: u64, tp: uintptr: u64))?;
	return;
};

export fn nanosleep(req: *const timespec, rem: *timespec) (void | errno) = {
	wrap_return(syscall2(SYS_nanosleep,
		req: uintptr: u64, rem: uintptr: u64))?;
	return;
};

export fn uname(uts: *utsname) (void | errno) = {
	wrap_return(syscall1(SYS_uname, uts: uintptr: u64))?;
	return;
};

// The return value is statically allocated and must be duplicated before
// calling getcwd again.
export fn getcwd() (*const char | errno) = {
	static let pathbuf: [PATH_MAX + 1]u8 = [0...];
	wrap_return(syscall2(SYS_getcwd,
		&pathbuf: *[*]u8: uintptr: u64,
		PATH_MAX + 1))?;
	return &pathbuf: *const char;
};

export fn ppoll(
	fds: *pollfd,
	nfds: nfds_t,
	timeout: const nullable *timespec,
	sigmask: const nullable *sigset,
) (int | errno) = {
	return wrap_return(syscall4(SYS_ppoll, fds: uintptr: u64, nfds: u64,
		timeout: uintptr: u64, sigmask: uintptr: u64))?: int;
};

export fn poll(fds: *pollfd, nfds: nfds_t, timeout: int) (int | errno) = {
	const ts = timespec {
		tv_sec = timeout % 1000,
		tv_nsec = timeout * 1000000,
	};
	return ppoll(fds, nfds, (if (timeout != -1) &ts else null), null);
};

export fn epoll_create1(flags: int) (int | errno) = {
	return wrap_return(syscall1(SYS_epoll_create1, flags: u64))?: int;
};

export fn epoll_create(size_: int) (int | errno) = {
	return epoll_create1(0);
};

export fn epoll_ctl(
	epfd: int,
	op: int,
	fd: int,
	event: nullable *epoll_event
) (int | errno) = {
	return wrap_return(syscall4(SYS_epoll_ctl,
		epfd: u64, op: u64, fd: u64, event: uintptr: u64))?: int;
};

export fn epoll_pwait(
	epfd: int,
	events: *epoll_event,
	maxevents: int,
	timeout: int,
	sigmask: nullable *sigset
) (int | errno) = {
	return wrap_return(syscall6(SYS_epoll_pwait,
		epfd: u64, events: uintptr: u64,
		maxevents: u64, timeout: u64,
		sigmask: uintptr: u64, size(sigset): u64))?: int;
};

export fn epoll_wait(
	epfd: int,
	events: *epoll_event,
	maxevents: int,
	timeout: int,
) (int | errno) = {
	return epoll_pwait(epfd, events, maxevents, timeout, null);
};

export fn timerfd_create(clock_id: int, flags: int) (int | errno) = {
	return wrap_return(syscall2(SYS_timerfd_create,
		clock_id: u64, flags: u64))?: int;
};

export fn timerfd_settime(
	fd: int,
	flags: int,
	new_value: *const itimerspec,
	old_value: nullable *itimerspec
) (int | errno) = {
	return wrap_return(syscall4(SYS_timerfd_settime,
		fd: u64, flags: u64,
		new_value: uintptr: u64, old_value: uintptr: u64))?: int;
};

export fn timerfd_gettime(fd: int, curr_value: *itimerspec) (int | errno) = {
	return wrap_return(syscall2(SYS_timerfd_gettime,
		fd: u64, curr_value: uintptr: u64))?: int;
};

export fn signalfd(fd: int, mask: *const sigset, flags: int) (int | errno) = {
	return wrap_return(syscall4(SYS_signalfd4,
		fd: u64, mask: uintptr: u64, size(sigset): u64,
		flags: u64))?: int;
};

export fn sigprocmask(
	how: int,
	set: *const sigset,
	old: nullable *sigset
) (int | errno) = {
	return wrap_return(syscall4(SYS_rt_sigprocmask,
		how: u64, set: uintptr: u64, old: uintptr: u64,
		size(sigset): u64))?: int;
};

fn restore() void;
fn restore_si() void;

export fn sigaction(
	signum: int,
	act: *const sigact,
	old: nullable *sigact
) (int | errno) = {
	let real_act = *act;
	real_act.sa_flags |= SA_RESTORER;
	let restore_fn = if ((act.sa_flags & SA_SIGINFO) != 0) &restore_si else &restore;
	real_act.sa_restorer = &restore;
	return wrap_return(syscall4(SYS_rt_sigaction,
		signum: u64, &real_act: uintptr: u64, old: uintptr: u64,
		size(sigset): u64))?: int;
};

export fn socket(domain: int, type_: int, protocol: int) (int | errno) = {
	return wrap_return(syscall3(SYS_socket,
		domain: u64, type_: u64, protocol: u64))?: int;
};

export fn connect(sockfd: int, addr: *const sockaddr, addrlen: u32) (int | errno) = {
	return wrap_return(syscall3(SYS_connect,
		sockfd: u64, addr: uintptr: u64, addrlen: u64))?: int;
};

export fn bind(sockfd: int, addr: *const sockaddr, addrlen: u32) (int | errno) = {
	return wrap_return(syscall3(SYS_bind,
		sockfd: u64, addr: uintptr: u64, addrlen: u64))?: int;
};

export fn listen(sockfd: int, backlog: u32) (int | errno) = {
	return wrap_return(syscall2(SYS_listen,
		sockfd: u64, backlog: u64))?: int;
};

export fn accept(sockfd: int, addr: nullable *sockaddr, addrlen: nullable *u32) (int | errno) = {
	return wrap_return(syscall3(SYS_accept,
		sockfd: u64, addr: uintptr: u64, addrlen: uintptr: u64))?: int;
};

export fn recvfrom(sockfd: int, buf: *void, len_: size, flags: int,
	src_addr: nullable *sockaddr, addrlen: nullable *u32
) (size | errno) = {
	return wrap_return(syscall6(SYS_recvfrom,
		sockfd: u64, buf: uintptr: u64, len_: u64, flags: u64,
		src_addr: uintptr: u64, addrlen: uintptr: u64))?: size;
};

export fn sendto(sockfd: int, buf: *void, len_: size, flags: int,
	dest_addr: nullable *sockaddr, addrlen: nullable *u32
) (size | errno) = {
	return wrap_return(syscall6(SYS_sendto,
		sockfd: u64, buf: uintptr: u64, len_: u64, flags: u64,
		dest_addr: uintptr: u64, addrlen: uintptr: u64))?: size;
};

export fn recv(sockfd: int, buf: *void, len_: size, flags: int) (size | errno) = {
	return recvfrom(sockfd, buf, len_, flags, null, null);
};

export fn send(sockfd: int, buf: *void, len_: size, flags: int) (size | errno) = {
	return sendto(sockfd, buf, len_, flags, null, null);
};

export fn getsockopt(sockfd: int, level: int, optname: int, optval: nullable *void, optlen: nullable *u32) (int | errno) = {
	return wrap_return(syscall5(SYS_getsockopt,
		sockfd: u64, level: u64, optname: u64,
		optval: uintptr: u64, optlen: uintptr: u64))?: int;
};

export fn setsockopt(sockfd: int, level: int, optname: int, optval: *void, optlen: u32) (int | errno) = {
	return wrap_return(syscall5(SYS_setsockopt,
		sockfd: u64, level: u64, optname: u64,
		optval: uintptr: u64, optlen: u64))?: int;
};

export fn ioctl(fd: int, req: u64, arg: nullable *void) (int | errno) = {
	return wrap_return(syscall3(SYS_ioctl, fd: u64,
		req, arg: uintptr: u64))?: int;
};

export fn getsockname(sockfd: int, addr: nullable *sockaddr, addrlen: nullable *u32) (int | errno) = {
	return wrap_return(syscall3(SYS_getsockname,
		sockfd: u64, addr: uintptr: u64, addrlen: uintptr: u64))?: int;
};

export fn getpeername(sockfd: int, addr: nullable *sockaddr, addrlen: nullable *u32) (int | errno) = {
	return wrap_return(syscall3(SYS_getpeername,
		sockfd: u64, addr: uintptr: u64, addrlen: uintptr: u64))?: int;
};

export fn readv(fd: int, iov: *const iovec, iovcnt: int) (int | errno) = {
	return wrap_return(syscall3(SYS_readv,
		fd: u64, iov: uintptr: u64, iovcnt: u64))?: int;
};

export fn writev(fd: int, iov: *const iovec, iovcnt: int) (int | errno) = {
	return wrap_return(syscall3(SYS_writev,
		fd: u64, iov: uintptr: u64, iovcnt: u64))?: int;
};

export fn sendmsg(fd: int, msg: *const msghdr, flags: int) (int | errno) = {
	return wrap_return(syscall3(SYS_sendmsg,
		fd: u64, msg: uintptr: u64, flags: u64))?: int;
};

export fn recvmsg(fd: int, msg: *const msghdr, flags: int) (int | errno) = {
	return wrap_return(syscall3(SYS_recvmsg,
		fd: u64, msg: uintptr: u64, flags: u64))?: int;
};

export fn umask(mode: mode_t) (mode_t | errno) = {
	return wrap_return(syscall1(SYS_umask, mode: u64))?: mode_t;
};

export fn setresuid(uid: uid_t, euid: uid_t, suid: uid_t) (void | errno) = {
	wrap_return(syscall3(SYS_setresuid, uid: u64, euid: u64, suid: u64))?;
	return;
};

export fn setresgid(gid: gid_t, egid: gid_t, sgid: gid_t) (void | errno) = {
	wrap_return(syscall3(SYS_setresgid, gid: u64, egid: u64, sgid: u64))?;
	return;
};

export fn getresuid(uid: *uid_t, euid: *uid_t, suid: *uid_t) (void | errno) = {
	wrap_return(syscall3(SYS_getresuid,
		uid: uintptr: u64,
		euid: uintptr: u64,
		suid: uintptr: u64))?;
	return;
};

export fn getresgid(gid: *gid_t, egid: *gid_t, sgid: *gid_t) (void | errno) = {
	wrap_return(syscall3(SYS_getresgid,
		gid: uintptr: u64,
		egid: uintptr: u64,
		sgid: uintptr: u64))?;
	return;
};

export fn getpriority(which: int, who: id_t) (int | errno) = {
	return wrap_return(syscall2(SYS_setpriority,
		which: u64, who: u64))?: int;
};

export fn setpriority(which: int, who: id_t, prio: int) (void | errno) = {
	wrap_return(syscall3(SYS_setpriority, which: u64, who: u64, prio: u64))?;
	return;
};
