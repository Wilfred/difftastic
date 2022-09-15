use rt;

// Sets the caller's user ID to the specified value. This generally requires
// elevated permissions from the calling process.
//
// If the system returns an error, this function will abort the program. Failing
// to handle errors from setuid is a grave security issue in your program, and
// therefore we require this function to succeed. If you need to handle the
// error case gracefully, call the appropriate syscall wrapper in [rt] yourself,
// and take extreme care to handle errors correctly.
export fn setuid(uid: uint) void = rt::setresuid(uid, -1u, -1u) as void;

// Sets the caller's effective user ID to the specified value. This generally
// requires elevated permissions from the calling process.
//
// If the system returns an error, this function will abort the program. Failing
// to handle errors from seteuid is a grave security issue in your program, and
// therefore we require this function to succeed. If you need to handle the
// error case gracefully, call the appropriate syscall wrapper in [rt] yourself,
// and take extreme care to handle errors correctly.
export fn seteuid(uid: uint) void = rt::setresuid(-1u, uid, -1u) as void;

// Sets the caller's group ID to the specified value. This generally requires
// elevated permissions from the calling process.
//
// If the system returns an error, this function will abort the program. Failing
// to handle errors from setuid is a grave security issue in your program, and
// therefore we require this function to succeed. If you need to handle the
// error case gracefully, call the appropriate syscall wrapper in [rt] yourself,
// and take extreme care to handle errors correctly.
export fn setgid(gid: uint) void = rt::setresgid(gid, -1u, -1u) as void;

// Sets the caller's effective group ID to the specified value. This generally
// requires elevated permissions from the calling process.
//
// If the system returns an error, this function will abort the program. Failing
// to handle errors from setegid is a grave security issue in your program, and
// therefore we require this function to succeed. If you need to handle the
// error case gracefully, call the appropriate syscall wrapper in [rt] yourself,
// and take extreme care to handle errors correctly.
export fn setegid(gid: uint) void = rt::setresgid(-1u, gid, -1u) as void;
