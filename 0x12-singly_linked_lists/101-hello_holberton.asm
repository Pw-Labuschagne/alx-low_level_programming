; This was something new
;Not really aware of the whole thing, but getting there
global _start

section .text

_start:
	mov edx, len
	mov ecx, msg
	mov ebx, 1
	mov eax, 4 ;sys call sys_write
	int 0x80 ;calls kernel

	mov eax, 1 ;system call sys_exit

section .data
	msg db "Hello, Holberton", 10 ;allocates memory. 10 = newline or 0xa
	len equ $ -msg ;length
