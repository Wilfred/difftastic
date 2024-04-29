use fmt;

export fn main() void = {
	const greetings = [
		"Hello, world!",
		"¡Hola Mundo!",
		"Γειά σου Κόσμε!",
		"Привет, мир!",
		"こんにちは世界！",
	];
	for (let i = 0z; i < len(greetings); i += 1) {
		fmt::println(greetings[i])!;
	};
};
