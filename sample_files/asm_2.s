.intel_syntax noprefix

.global main

# This comment is different
main:
	lea rax, [string2]
	lea rcx, [string + 6]
	mov rax, 2
	mov rax, 0x123456789
	xor rax, rax
	ret

string:
	.asciz "Hello, world!"

string2:
	.asciz "Hello"
