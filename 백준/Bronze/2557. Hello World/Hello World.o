section .data
	message db "Hello World!"
	msg_len equ $ - message

section .text
	global main

main:
	mov rax, 1
	mov rdi, 1
	lea rsi, [message]
	mov rdx, msg_len
	syscall

	mov rax, 60
	xor rdi, rdi
    mov rax, 0