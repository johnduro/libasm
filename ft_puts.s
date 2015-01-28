;; ld -macosx_version_min 10.7.0 -lSystem -lcrt1.o main.o ft_puts.o
; arg0 = di, arg1 = si, arg3 = dx

section .text

global _ft_puts

_ft_puts:
	push rbx
	push rdi
	mov rax, 0x2000004			; syscall de write
	cmp rdi, 0
	je puting_null
	mov rsi, rdi				; arg 1 write
	mov rdi, 1 					; arg 0 write
	mov edx, 0					; arg 3 write
	mov rbx, rsi				; pointeur sur la string pour remplacer le \0

len:
	cmp byte [rbx], 0
	je puting
	inc edx
	inc rbx
	jmp len

puting:
	syscall
	cmp eax, -1
	je error
	mov eax, edx
	pop rdi
	pop rbx
	jmp puting_bn

puting_bn:
	mov rax, 0x2000004			; syscall de write
	mov rdi, 1 					; arg 0 write
	mov rsi, bn					; arg 1 write
	mov edx, 1					; arg 3 write
	syscall
	ret

puting_null:
	mov rdi, 1
	mov rsi, msg
	mov edx, msg.len
	syscall
	pop rdi
	pop rbx
	ret

error:
	pop rdi
	pop rbx
	ret

section .data

msg:
	db		`(null)\n`
	.len:	equ $ - msg

bn:
	db		10
