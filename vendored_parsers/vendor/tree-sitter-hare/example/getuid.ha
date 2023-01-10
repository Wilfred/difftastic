use rt;

// Returns the current process user ID.
export fn getuid() uint = {
	let uid = 0u, euid = 0u, suid = 0u;
	rt::getresuid(&uid, &euid, &suid) as void;
	return uid;
};

// Returns the current process effective user ID.
export fn geteuid() uint = {
	let uid = 0u, euid = 0u, suid = 0u;
	rt::getresuid(&uid, &euid, &suid) as void;
	return euid;
};

// Returns the current process group ID.
export fn getgid() uint = {
	let gid = 0u, egid = 0u, sgid = 0u;
	rt::getresgid(&gid, &egid, &sgid) as void;
	return gid;
};

// Returns the current process effective group ID.
export fn getegid() uint = {
	let gid = 0u, egid = 0u, sgid = 0u;
	rt::getresgid(&gid, &egid, &sgid) as void;
	return egid;
};
