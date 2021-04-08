use rt;
use format::elf;

@init fn init_linux() void = {
	let i = 0;
	for (rt::envp[i] != null) {
		i += 1;
	};
	auxv = &rt::envp[i + 1]: *[*]elf::auxv64;
};
