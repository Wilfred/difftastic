use ascii;

fn isnamestart(rn: rune) bool = {
	if (rn == ':' || rn == '_' || ascii::isalpha(rn)) return true;
	let rn = rn: u32;
	return
		(rn >= 0xC0 && rn <= 0xD6) ||
		(rn >= 0xD8 && rn <= 0xF6) ||
		(rn >= 0xF8 && rn <= 0x2FF) ||
		(rn >= 0x370 && rn <= 0x37D) ||
		(rn >= 0x37F && rn <= 0x1FFF) ||
		(rn >= 0x200C && rn <= 0x200D) ||
		(rn >= 0x2070 && rn <= 0x218F) ||
		(rn >= 0x2C00 && rn <= 0x2FEF) ||
		(rn >= 0x3001 && rn <= 0xD7FF) ||
		(rn >= 0xF900 && rn <= 0xFDCF) ||
		(rn >= 0xFDF0 && rn <= 0xFFFD) ||
		(rn >= 0x10000 && rn <= 0xEFFFF);
};

fn isname(rn: rune) bool = {
	if (isnamestart(rn) || rn == '-' || rn == '.' || ascii::isdigit(rn)) {
		return true;
	};
	let rn = rn: u32;
	return
		(rn == 0xB7) ||
		(rn >= 0x300 && rn <= 0x36F) ||
		(rn >= 0x203F && rn <= 0x2040);
};
