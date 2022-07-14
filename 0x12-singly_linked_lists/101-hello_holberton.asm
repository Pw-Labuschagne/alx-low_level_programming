; This was something new
;Not really aware of the whole thing, but getting there
global _start

section .text

_start:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, msglen
	syscall

	mov rax, 60
	mov rdi, 0
	syscall

section .rodata
	msg: db "Hello, Holberton", 10 ;allocates memory. 10 = newline or 0xa
	msglen: equ $ - msg ;length
