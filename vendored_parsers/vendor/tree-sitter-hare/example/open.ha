use fs;
use io;
use path;

// Opens a file.
//
// If no flags are provided, [fs::flags::RDONLY], [fs::flags::NOCTTY],
// [fs::flags::CLOEXEC] are used when opening the file. If you pass your own
// flags, it is recommended that you add the latter two unless you know that you
// do not want them.
export fn open(path: str, flags: fs::flags...) (*io::stream | fs::error) =
	fs::open(cwd, path, flags...);

// Creates a new file and opens it for writing.
//
// If no flags are provided, [fs::flags::WRONLY], [fs::flags::NOCTTY],
// [fs::flags::CLOEXEC] are used when opening the file. If you pass your own
// flags, it is recommended that you add the latter two unless you know that you
// do not want them.
//
// Only the permission bits of the mode are used. If other bits are set, they
// are discarded.
export fn create(
	path: str,
	mode: fs::mode,
	flags: fs::flags...
) (*io::stream | fs::error) = fs::create(cwd, path, mode, flags...);
