section .data
	format db "Hello, Holberton",10,0	; Format string with newline character
	fmtlen equ $ - format

section .text
	global _start

_start:
	; Call printf
	mov rdi, format
	call printf

	; Exit the program
	mov rax, 60	; syscall number for exit
	xor rdi, rdi        ; exit status 0
	syscall

section .bss
	dummy resq 1   ; Reserve space for a dummy variable (required for non-PIE)
