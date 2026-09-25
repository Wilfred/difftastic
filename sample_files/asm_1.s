.intel_syntax noprefix

.global maim

# This is a comment
maim:
	lea rax, [string]
	lea rcx, [string + 5]
	mov rax, 1
	mov rax, 0x12345678
	mov rax, rax
	ret

string:
	.asciz "Hello, world"
