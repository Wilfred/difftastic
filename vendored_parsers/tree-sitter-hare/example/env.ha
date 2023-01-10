use format::elf;

// System V auxillary vector for the current process
export let auxv: *[*]format::elf::auxv64 = null: *[*]format::elf::auxv64;
