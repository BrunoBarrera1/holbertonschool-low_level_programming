section .data
	msg db "Hello, World", 0x0A ; Message with a newline at the end
	len equ $ - msg		    ; Calculate the length of the message

section .text
	global _start

_start:
	mov rax, 1		    ; Ststem call number for write (sys_write)
	mov rdi, 1		    ; File descriptor 1 (stdout)
	mov rsi, msg		    ; Address of the message
	mov rdx, len		    ; Length of the message
	syscall			    ; Make the system call

	mov rax, 60		    ; System call number for exit (sys_exit)
	xor rdi, rdi		    ; Exit code 0
	syscall			    ; Make the system call
