def U: u8 = 0o1;
def L: u8 = 0o2;
def N: u8 = 0o4;
def S: u8 = 0o10;
def P: u8 = 0o20;
def C: u8 = 0o40;
def B: u8 = 0o100;
def X: u8 = 0o200;

// LUT of bitfields with character attributes
const cclass: []u8 = [
//	 0	 1	 2	 3	 4	 5	 6	 7
	C,	C,	C,	C,	C,	C,	C,	C,	// 0
	C,	S|C,	S|C,	S|C,	S|C,	S|C,	C,	C,	// 10
	C,	C,	C,	C,	C,	C,	C,	C,	// 20
	C,	C,	C,	C,	C,	C,	C,	C,	// 30
	S|B,	P,	P,	P,	P,	P,	P,	P,	// 40
	P,	P,	P,	P,	P,	P,	P,	P,	// 50
	N|X,	N|X,	N|X,	N|X,	N|X,	N|X,	N|X,	N|X,	// 60
	N|X,	N|X,	P,	P,	P,	P,	P,	P,	// 70
	P,	U|X,	U|X,	U|X,	U|X,	U|X,	U|X,	U,	// 100
	U,	U,	U,	U,	U,	U,	U,	U,	// 110
	U,	U,	U,	U,	U,	U,	U,	U,	// 120
	U,	U,	U,	P,	P,	P,	P,	P,	// 130
	P,	L|X,	L|X,	L|X,	L|X,	L|X,	L|X,	L,	// 140
	L,	L,	L,	L,	L,	L,	L,	L,	// 150
	L,	L,	L,	L,	L,	L,	L,	L,	// 160
	L,	L,	L,	P,	P,	P,	P,	C,	// 170
];

// True if an ASCII character is a letter
export fn isalpha(c: rune) bool =
	if (!isascii(c)) false else cclass[c: u32]&(U|L) > 0;

// True if an ASCII character is uppercase
export fn isupper(c: rune) bool =
	if (!isascii(c)) false else cclass[c: u32]&U > 0;

// True if an ASCII character is lowercase
export fn islower(c: rune) bool =
	if (!isascii(c)) false else cclass[c: u32]&L > 0;

// True if an ASCII character is a digit
export fn isdigit(c: rune) bool =
	if (!isascii(c)) false else cclass[c: u32]&N > 0;

// True if an ASCII character is a hexadecimal digit
export fn isxdigit(c: rune) bool =
	if (!isascii(c)) false else cclass[c: u32]&X > 0;

// True if an ASCII character is a space.
export fn isspace(c: rune) bool =
	if (!isascii(c)) false else cclass[c: u32]&S > 0;

// True if an ASCII character is punctuation.
export fn ispunct(c: rune) bool =
	if (!isascii(c)) false else cclass[c: u32]&P > 0;

// True if an ASCII character is alphanumeric.
export fn isalnum(c: rune) bool =
	if (!isascii(c)) false else cclass[c: u32]&(U|L|N) > 0;

// True if an ASCII character is printable.
export fn isprint(c: rune) bool =
	if (!isascii(c)) false else cclass[c: u32]&(P|U|L|N|B) > 0;

// True if an ASCII character is any printable character other than space.
export fn isgraph(c: rune) bool =
	if (!isascii(c)) false else cclass[c: u32]&(P|U|L|N) > 0;

// True if an ASCII character is a control character.
export fn iscntrl(c: rune) bool =
	if (!isascii(c)) false else cclass[c: u32]&C > 0;

// True if a rune is a valid ASCII character.
export fn isascii(c: rune) bool = c: u32 <= 0o177;

// Returns the uppercase form of an ASCII character, or the original character
// if it was not a lowercase letter.
export fn toupper(c: rune) rune = {
	return if (islower(c)) {
		(c: u32 - ('a': u32) + ('A': u32)): rune;
	} else c;
};

// Returns the lowercase form of an ASCII character, or the original character
// if it was not an uppercase letter.
export fn tolower(c: rune) rune = {
	return if (isupper(c)) {
		(c: u32 - ('A': u32) + ('a': u32)): rune;
	} else c;
};

@test fn ctype() void = {
	// Just some simple tests
	assert(isspace(' ') && !isspace('x') && !isspace('こ'));
	assert(isalnum('a') && isalnum('8') && !isalnum('こ'));
	assert(!ispunct('\0') && iscntrl('\b'));
	assert(isascii('a') && isascii('\0') && isascii('\x7F'));
	assert(!isascii('\x80') && !isascii('こ'));
	assert(tolower('A') == 'a' && tolower('こ') == 'こ');
};
